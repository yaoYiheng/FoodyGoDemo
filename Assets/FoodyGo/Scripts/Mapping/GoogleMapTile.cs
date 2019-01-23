﻿using UnityEngine;
using System.Collections;
using packt.FoodyGO.Services;

namespace packt.FoodyGO.Mapping
{
    [AddComponentMenu("Mapping/GoogleMapTile")]
    public class GoogleMapTile : MonoBehaviour
	{
		public enum MapType
		{
			RoadMap,
			Satellite,
			Terrain,
			Hybrid
		}

		//Google Maps API Staticmap URL
		private const string GOOGLE_MAPS_URL = "http://maps.googleapis.com/maps/api/staticmap";

		[Header("Map Settings")]
		[Range(1,20)]
		[Tooltip("Zoom Level, 1=global - 20=house")]
		public int zoomLevel = 1;
		[Tooltip("Type of map, Road, Satellite, Terrain or Hybrid")]
		public MapType mapType = MapType.RoadMap;
		[Range(64,1024)]
		[Tooltip("Size in pixels of the map image")]
		public int size = 640;
		[Tooltip("Double the pixel resolution of the image returned")]
		public bool doubleResolution = true;
		[Tooltip("Defines the origin of the map")]
		public MapLocation worldCenterLocation;

		[Header("Tile Settings")]
		[Tooltip("Sets the tiles position in tile units")]        
        public Vector2 TileOffset;
		[Tooltip("Calculated tile center")]
		public MapLocation tileCenterLocation;
		[Tooltip("Calculated tile corners")]
        public Vector2 TopLeftCorner;
        public Vector2 BottomRightCorner;

		[Header("GPS Settings")]
		[Tooltip("GPS service used to locate world center")]
		
        private double lastGPSUpdate;

		// Use this for initialization
		void Start ()
		{
			RefreshMapTile ();
		}
	
		// Update is called once per frame
		void Update ()
		{
			//check if a new location has been acquired
            if (GPSLocationService.Instance != null &&
                GPSLocationService.Instance.IsServiceStarted && 
                lastGPSUpdate < GPSLocationService.Instance.Timestamp)
            {
                lastGPSUpdate = GPSLocationService.Instance.Timestamp;
                worldCenterLocation.Latitude = GPSLocationService.Instance.Latitude;
                worldCenterLocation.Longitude = GPSLocationService.Instance.Longitude;
                print("GoogleMapTile refreshing map texture");
                RefreshMapTile();
            }
		}

		public void RefreshMapTile() {
			
			StartCoroutine(_RefreshMapTile());
		}

		IEnumerator _RefreshMapTile ()
		{            
			//find the center lat/long of the tile
			tileCenterLocation.Latitude = GoogleMapUtils.adjustLatByPixels(worldCenterLocation.Latitude, (int)(size * 1 * TileOffset.y), zoomLevel);
			tileCenterLocation.Longitude = GoogleMapUtils.adjustLonByPixels(worldCenterLocation.Longitude, (int)(size * 1 * TileOffset.x), zoomLevel);

			var queryString = "";

			//build the query string parameters for the map tile request
			queryString += "center=" + WWW.UnEscapeURL (string.Format ("{0},{1}", tileCenterLocation.Latitude, tileCenterLocation.Longitude));
			queryString += "&zoom=" + zoomLevel.ToString ();
			queryString += "&size=" + WWW.UnEscapeURL (string.Format ("{0}x{0}", size));
			queryString += "&scale=" + (doubleResolution ? "2" : "1");
			queryString += "&maptype=" + mapType.ToString ().ToLower ();
			queryString += "&format=" + "png";

            //adding the map styles
            queryString += "&style=element:geometry|invert_lightness:true|weight:3.1|hue:0x00ffd5";
            queryString += "&style=element:labels|visibility:off";

            queryString += "&key=AIzaSyBlr9fIHQ4C4lL76oL4Reh6AJpMvU9UzWM";

            //check if script is on a mobile device and using a location service 
            var usingSensor = false;
#if MOBILE_INPUT
            usingSensor = Input.location.isEnabledByUser 
							&& Input.location.status == LocationServiceStatus.Running 
							&& GPSLocationService.Instance !=null;
#endif
			queryString += "&sensor=" + (usingSensor ? "true" : "false");

			//set map bounds rect
			TopLeftCorner.x = GoogleMapUtils.adjustLonByPixels(tileCenterLocation.Longitude, -size, zoomLevel);
			TopLeftCorner.y = GoogleMapUtils.adjustLatByPixels(tileCenterLocation.Latitude, size, zoomLevel);

			BottomRightCorner.x = GoogleMapUtils.adjustLonByPixels(tileCenterLocation.Longitude, size, zoomLevel);
			BottomRightCorner.y = GoogleMapUtils.adjustLatByPixels(tileCenterLocation.Latitude, -size, zoomLevel);

            print(string.Format("Tile {0}x{1} requested with {2}", TileOffset.x, TileOffset.y, queryString));

			//finally, we request the image
			var req = new WWW(GOOGLE_MAPS_URL + "?" + queryString);
            print(req);
			//yield until the service responds
			yield return req;
			//first destroy the old texture first
			Destroy(GetComponent<Renderer>().material.mainTexture);
			//when the image returns set it as the tile texture
			GetComponent<Renderer>().material.mainTexture = req.texture;
            print(string.Format("Tile {0}x{1} textured", TileOffset.x, TileOffset.y));
            if(TileOffset.x == 0 && TileOffset.y == 0)
            {
                GPSLocationService.Instance.MapRedrawn();
            }
        }
	}
}
