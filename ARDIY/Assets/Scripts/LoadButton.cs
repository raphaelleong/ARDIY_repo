using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.iOS;

public class LoadButton : MonoBehaviour {
	public Image cooldown;
	public UnityARGeneratePlane unityARGeneratePlane;
	private bool coolingDown;
	public float waitTime = 1.0f;

	// Update is called once per frame
	void Update()
	{
		coolingDown = unityARGeneratePlane.getAnchorManager ().getPlaneAnchorMap ().Count != 0;

		if (coolingDown == true)
		{
			//Reduce fill amount over 30 seconds
			cooldown.fillAmount += 10.0f / waitTime * Time.deltaTime;
		}
	}
}
