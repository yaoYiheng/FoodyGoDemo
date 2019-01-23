﻿using UnityEngine;
using System.Collections;
using packt.FoodyGO.Mapping;
using System.Collections.Generic;
using packt.FoodyGO.Database;
using packt.FoodyGo.Utils;
using packt.FoodyGO.Controllers;

namespace packt.FoodyGO.Services
{
    public class MonsterService : MonoBehaviour
    {
        public GameObject monsterPrefab;
        private double lastTimestamp;

        [Header("Monster Spawn Parameters")]
        public float monsterSpawnRate = .75f;
        public float latitudeSpawnOffset = .001f;
        public float longitudeSpawnOffset = .001f;

        [Header("Monster Visibility")]
        public float monsterHearDistance = 200f;
        public float monsterSeeDistance = 100f;
        public float monsterLifetimeSeconds = 30;

        [Header("Monster Foot Step Range")]
        public float oneStepRange = 125f;
        public float twoStepRange = 150f;
        public float threeStepRange = 200f;

        public List<MonsterSpawnLocation> monsters;
        
        // Use this for initialization
        void Start()
        {
            monsters = new List<MonsterSpawnLocation>();
            StartCoroutine(CleanupMonsters());
            GPSLocationService.Instance.OnMapRedraw += GpsLocationService_OnMapRedraw;
        }

        private void GpsLocationService_OnMapRedraw(GameObject g)
        {
            //map is recentered, recenter all monsters
            foreach(MonsterSpawnLocation m in monsters)
            {
                if(m.gameObject != null)
                {
                    var newPosition = ConvertToWorldSpace(m.location.Longitude, m.location.Latitude);
                    m.gameObject.transform.position = newPosition;
                }
            }
        }

        private IEnumerator CleanupMonsters()
        {
            while (true)
            {
                var now = Epoch.Now;
                var list = monsters.ToArray();
                for(int i = 0; i < list.Length; i++)
                {
                    if(list[i].spawnTimestamp + monsterLifetimeSeconds < now)
                    {
                        var monster = list[i];
                        RemoveMonster(monster);
                    }
                }
                yield return new WaitForSeconds(5);
            }
        }

        public void RemoveMonster(MonsterSpawnLocation monster)
        {
            print("Cleaning up monster ");
            if (monster.gameObject != null)
            {
                Destroy(monster.gameObject);
            }
            monsters.Remove(monster);
        }

        // Update is called once per frame
        void Update()
        {
            if (GPSLocationService.Instance != null &&
                GPSLocationService.Instance.IsServiceStarted &&
                GPSLocationService.Instance.PlayerTimestamp > lastTimestamp)
            {
                lastTimestamp = GPSLocationService.Instance.PlayerTimestamp;

                //update the monsters around the player
                CheckMonsters();
            }
        }

        private void CheckMonsters()
        {            
            if (Random.value > monsterSpawnRate)
            {
                var mlat = GPSLocationService.Instance.Latitude + Random.Range(-latitudeSpawnOffset, latitudeSpawnOffset);
                var mlon = GPSLocationService.Instance.Longitude + Random.Range(-longitudeSpawnOffset, longitudeSpawnOffset);
                var monster = new MonsterSpawnLocation
                {
                    location = new MapLocation(mlon, mlat),
                    spawnTimestamp = GPSLocationService.Instance.PlayerTimestamp
                };
                monsters.Add(monster);
            }

            //store players location for easy access in distance calculations
            var playerLocation = new MapLocation(GPSLocationService.Instance.Longitude, GPSLocationService.Instance.Latitude);
            //get the current Epoch time in seconds
            var now = Epoch.Now;

            foreach (MonsterSpawnLocation m in monsters)
            {
                var d = MathG.Distance(m.location, playerLocation);
                if (MathG.Distance(m.location, playerLocation) < monsterSeeDistance)
                {
                    m.lastSeenTimestamp = now;
                    m.footstepRange = 4;
                    if (m.gameObject == null)
                    {

                        print("Monster seen, distance " + d + " started at " + m.spawnTimestamp);
                        SpawnMonster(m);
                    }
                    else
                    {
                        m.gameObject.SetActive(true);  //make sure the monster is visible
                    }                        
                    continue;
                }

                if (MathG.Distance(m.location, playerLocation) < monsterHearDistance)
                {
                    m.lastHeardTimestamp = now;
                    var footsteps = CalculateFootstepRange(d);
                    m.footstepRange = footsteps;
                    print("Monster heard, footsteps " + footsteps );                    
                }

                //hide monsters that can't be seen 
                if(m.gameObject != null)
                {
                    m.gameObject.SetActive(false);
                }
            }              
        }

        private int CalculateFootstepRange(float distance)
        {
            if (distance < oneStepRange) return 1;
            if (distance < twoStepRange) return 2;
            if (distance < threeStepRange) return 3;
            return 4;
        }

        

        private Vector3 ConvertToWorldSpace(float longitude, float latitude)
        {
            //convert GPS lat/long to world x/y 
            var x = ((GoogleMapUtils.LonToX(longitude)
                - GPSLocationService.Instance.mapWorldCenter.x) * GPSLocationService.Instance.mapScale.x);
            var y = (GoogleMapUtils.LatToY(latitude)
                - GPSLocationService.Instance.mapWorldCenter.y) * GPSLocationService.Instance.mapScale.y;
            return new Vector3(-x, 0, y);
        }

        private void SpawnMonster(MonsterSpawnLocation monster)
        {            
            var lon = monster.location.Longitude;
            var lat = monster.location.Latitude;
            var position = ConvertToWorldSpace(lon, lat);
            var rotation = Quaternion.AngleAxis(Random.Range(0, 360), Vector3.up);
            monster.gameObject = (GameObject)Instantiate(monsterPrefab, position, rotation);
            var controller = monster.gameObject.AddComponent<MonsterController>();
            controller.monsterSpawnLocation = monster;
            controller.monsterService = this;
            monster.gameObject.transform.parent = transform;
        }
        
    }
}
