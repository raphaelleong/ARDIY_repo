﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MeasurementManager : MonoBehaviour
{
  private Text measurementW;
  public GameObject measurementGameObjectH;
  private Text measurementH;
  private Text measurementA;
  public GameObject measurementGameObjectP;
  private Text measurementP;

  private static float cumulativeArea = 0;
  private float cumulativeWidth = 0;
  private float currentWidth = 0;

  private float cumulativeCutoutArea = 0;

  private float currentWallHeight = 1;
  /* initial wall height  */
  private PaintType paintType;


	// Use this for initialization
	void Start () {
    paintType = PaintType.Instance;
    //measurementW = GameObject.Find(GameObjectNames.MeasurementWidth).GetComponent<Text>();
    measurementH = measurementGameObjectH.GetComponent<Text>();
    //measurementH = GameObject.Find(GameObjectNames.MeasurementHeight).GetComponent<Text>();
		Debug.Log (measurementH);
//    measurementA = GameObject.Find(GameObjectNames.MeasurementArea).GetComponent<Text>();
    measurementP = measurementGameObjectP.GetComponent<Text>();
    //measurementP = GameObject.Find(GameObjectNames.MeasurementPaint).GetComponent<Text>();
		Debug.Log (measurementP);
	}
	
  // Update is called once per frame
  void Update ()
  {
    
  }

  public void displayMeasurements() {
		//Made a change here
//    measurementW.text = "Width: " + currentWidth.ToString("n3") + " m";
    measurementH.text = currentWallHeight.ToString("n3") + " m";
 //   measurementA.text = "Area: " + cumulativeArea.ToString("n3") + " sq. m";
    measurementP.text = "Paint: " + getTotalPaintRequired().ToString("n3") + " litres of " + paintType.ToString() + " paint";

  }

  private void updateAreaAndPaint ()
  {
    float width = cumulativeWidth;
    float height = currentWallHeight;

    cumulativeArea = Measure.findArea (height, width);
    cumulativeArea -= cumulativeCutoutArea;

    displayMeasurements ();
  }

  public static float getTotalPaintRequired ()
  {
    return Measure.findPaintRequired (cumulativeArea);
  }

  public void updateWidth (Vector3 lastCoordinate, Vector3 currentCoordinate)
  {
    cumulativeWidth += Measure.findDistance (lastCoordinate, currentCoordinate);
    currentWidth += Measure.findDistance (lastCoordinate, currentCoordinate);
    updateAreaAndPaint ();
  }

  public void updateCutoutsArea (float width, float height)
  {
    cumulativeCutoutArea += Measure.findArea (height, width);
    updateAreaAndPaint ();
  }

  public void setHeight (float h)
  {
    currentWallHeight = Measure.findDistance (Vector3.up * h, Vector3.zero);
    updateAreaAndPaint ();
  }

  public void setCurrentWidth (float h)
  {
    currentWidth = h;
    updateAreaAndPaint ();
  }

  public float getWallHeight ()
  {
    return currentWallHeight;
  }
}
