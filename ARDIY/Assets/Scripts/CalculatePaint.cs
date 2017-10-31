using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CalculatePaint : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
    
  public float findPaintRequired(PaintType type, float area) {
    return (float) type * area;
  }

  //TODO: possibly set values for paint types per sqm
}
