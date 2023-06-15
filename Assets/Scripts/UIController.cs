using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using OVR;

public class UIController : MonoBehaviour
{
    // Reference to the Canvas component
    private Canvas canvas;
    public OVRInput.Button button;
    public OVRInput.Controller controller;

    private void Start()
    {
        // Get the Canvas component
        canvas = GetComponent<Canvas>();

        // Disable the canvas on start
        canvas.enabled = true;
    }

    private void Update()
    {
        // Check for input from Oculus Quest 2 controllers
        if (OVRInput.GetDown(button))
        {
            Debug.Log("BUTTON PRESS DETECTED");
            // Toggle the canvas on and off
            //canvas.enabled = !canvas.enabled;
        }
    }
}
