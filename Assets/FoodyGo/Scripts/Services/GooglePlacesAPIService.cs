﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using packt.FoodyGO.Mapping;
using TinyJson;
using packt.FoodyGO.Managers;
using packt.FoodyGO.Controllers;


namespace packt.FoodyGO.Services
{
    public class GooglePlacesAPIService : Singleton<GooglePlacesAPIService>
    {
        private const string GOOGLE_PLACES_NEARBY_SEARCH_URL = "https://maps.googleapis.com/maps/api/place/nearbysearch/json";
        private const string GOOGLE_PLACES_RADAR_SEARCH_URL = "https://maps.googleapis.com/maps/api/place/radarsearch/json";

        public GameObject placeMarkerPrefab;
        public MapLocation location;
        public float visualDistance;
        public string type;
        public string APIKey;
        
        private Dictionary<string, GameObject> places;
        private List<string> oldIds;
        private List<GameObject> placesPool;

        void Start()
        {
            GPSLocationService.Instance.OnMapRedraw += GPSLocationService_OnMapRedraw;
            places = new Dictionary<string, GameObject>();
            placesPool = new List<GameObject>();
            oldIds = new List<string>();
        }

        private void GPSLocationService_OnMapRedraw(GameObject g)
        {
            //update the plaes around the player
            var location = GPSLocationService.Instance.Location;
            StartCoroutine(SearchPlaces());
        }

        IEnumerator SearchPlaces()
        {
            var queryString = string.Format("location={0}&radius={1}&type={2}&key={3}"
                , GPSLocationService.Instance.Location.LatLong, visualDistance, type, APIKey);            
            
            var req = new WWW(GOOGLE_PLACES_NEARBY_SEARCH_URL + "?" + queryString);
            //yield until the service responds
            yield return req;
            var json = req.text;
            ParseSearchResult(json);
        }

        private void ParseSearchResult(string json)
        {
            var sr = JSONParser.FromJson<SearchResult>(json);
            print(sr);
            if (sr.status == "OK" || sr.status == "ZERO_RESULTS")
            {
                UpdatePlaces(sr);
                CleanOldPlaces(GPSLocationService.Instance.PlayerTimestamp);
            }
            else
            {
                //search failed
                print("search failed");
                StartCoroutine(SearchPlaces());
            }
        }

        private void CleanOldPlaces(double timestamp)
        {
            oldIds.Clear();
            foreach(var id in places.Keys)
            {
                if(places[id].GetComponent<PlacesController>().LastUpdateTimestamp < timestamp)
                {
                    oldIds.Add(id);
                }
            }
            foreach(var id in oldIds)
            {
                var go = places[id];
                go.SetActive(false);

                places.Remove(id);
            }
        }

        private void UpdatePlaces(SearchResult sr)
        {
            foreach(var s in sr.results)
            {                
                var lon = s.geometry.location.lng;
                var lat = s.geometry.location.lat;
                
                if(GPSLocationService.Instance.mapBounds.Contains(new MapLocation((float)lon, (float)lat))==false)
                {
                    continue;
                }

                var pos = ConvertToWorldSpace(lon, lat);
                if (places.ContainsKey(s.id))
                {
                    var go = places[s.id];
                    go.transform.position = pos;
                    go.GetComponent<PlacesController>().LastUpdateTimestamp =
                        GPSLocationService.Instance.PlayerTimestamp;
                }
                else
                {
                    if (placesPool.Count > 0)
                    {
                        var go = placesPool[0];
                        go.transform.position = pos;
                        go.SetActive(true);
                        placesPool.Remove(go);
                        var pc = go.GetComponent<PlacesController>();
                        pc.LastUpdateTimestamp = GPSLocationService.Instance.PlayerTimestamp;
                        places.Add(s.id, go);
                    }
                    else
                    {
                        var go = (GameObject)Instantiate(placeMarkerPrefab, pos, Quaternion.identity, transform);
                        var pc = go.AddComponent<PlacesController>();
                        pc.LastUpdateTimestamp = GPSLocationService.Instance.PlayerTimestamp;
                        places.Add(s.id, go);
                    }                    
                }
            }
        }

        private Vector3 ConvertToWorldSpace(double longitude, double latitude)
        {
            //convert GPS lat/long to world x/y 
            var x = ((GoogleMapUtils.LonToX((float)longitude)
                - GPSLocationService.Instance.mapWorldCenter.x) * GPSLocationService.Instance.mapScale.x);
            var y = (GoogleMapUtils.LatToY((float)latitude)
                - GPSLocationService.Instance.mapWorldCenter.y) * GPSLocationService.Instance.mapScale.y;
            return new Vector3(-x, 0, y);
        }
    }

    public class Location
    {
        public double lat { get; set; }
        public double lng { get; set; }
    }

    public class Northeast
    {
        public double lat { get; set; }
        public double lng { get; set; }
    }

    public class Southwest
    {
        public double lat { get; set; }
        public double lng { get; set; }
    } 

    public class Viewport
    {
        public Northeast northeast { get; set; }
        public Southwest southwest { get; set; }
    }

    public class Geometry
    {
        public Location location { get; set; }
        public Viewport viewport { get; set; }
    }

    public class OpeningHours
    {
        public bool open_now { get; set; }
        public List<object> weekday_text { get; set; }
    }

    public class Photo
    {
        public int height { get; set; }
        public List<string> html_attributions { get; set; }
        public string photo_reference { get; set; }
        public int width { get; set; }
    }

    public class Result
    {
        public Geometry geometry { get; set; }
        public string icon { get; set; }
        public string id { get; set; }
        public string name { get; set; }
        public OpeningHours opening_hours { get; set; }
        public List<Photo> photos { get; set; }
        public string place_id { get; set; }
        public string reference { get; set; }
        public string scope { get; set; }
        public List<string> types { get; set; }
        public string vicinity { get; set; }       
    }

    public class SearchResult
    {
        public List<object> html_attributions { get; set; }
        public string next_page_token { get; set; }
        public List<Result> results { get; set; }
        public string status { get; set; }

        public override string ToString()
        {
            return string.Format("SearchResult: {0}, Results: {1}", status, results.Count);
        }
    }
}
