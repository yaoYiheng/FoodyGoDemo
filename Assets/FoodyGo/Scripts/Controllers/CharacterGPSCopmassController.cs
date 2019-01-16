using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterGPSCopmassController : MonoBehaviour
{
    private void Start()
    {
        Input.compass.enabled = true;
    }

    private void Update()
    {
        var heading = 180 + Input.compass.magneticHeading;

        var rotation = Quaternion.AngleAxis(heading, Vector3.up);

        transform.rotation = Quaternion.Slerp(transform.rotation, rotation, Time.fixedTime * 0.001f);
    }
}
