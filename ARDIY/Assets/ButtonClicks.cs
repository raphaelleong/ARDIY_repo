using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEngine.UI;

public class ButtonClicks : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void OnClick_Preview () {
		EditorUtility.DisplayDialog ("Warning", "Previews are coming soon!", "Okay, I can't wait!");
	}

	public void OnClick_Tools () {
		EditorUtility.DisplayDialog ("Warning", "This feature is coming soon!", "Okay, I can't wait!");
	}
	public void OnClick_Steps () {
		EditorUtility.DisplayDialog ("Warning", "This feature is coming soon!", "Okay, I can't wait!");
	}
}
