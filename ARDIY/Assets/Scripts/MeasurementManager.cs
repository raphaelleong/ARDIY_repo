using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MeasurementManager : MonoBehaviour
{
  private Text measurementW;
  private Text measurementH;
  private Text measurementA;
  private Text measurementP;

  private float cumulativeArea;
  private float cumulativeWidth;
  private float currentWidth;

  private float currentWallHeight = 1;
  /* initial wall height  */
  private PaintType paintType;

  // Use this for initialization
  void Start ()
  {
    paintType = PaintType.Instance;
    measurementW = GameObject.Find (GameObjectNames.MeasurementWidth).GetComponent<Text> ();
    measurementH = GameObject.Find (GameObjectNames.MeasurementHeight).GetComponent<Text> ();
    measurementA = GameObject.Find (GameObjectNames.MeasurementArea).GetComponent<Text> ();
    measurementP = GameObject.Find (GameObjectNames.MeasurementPaint).GetComponent<Text> ();
  }
	
  // Update is called once per frame
  void Update ()
  {
    
  }

  public static MeasurementManager getMeasurementManager ()
  {
    return GameObject.Find (GameObjectNames.MeasurementManager).GetComponent<MeasurementManager> ();
  }

  public void displayMeasurements ()
  {
    //Made a change here
    measurementW.text = "Width: " + currentWidth.ToString ("n3") + " m";
    measurementH.text = "Height: " + currentWallHeight.ToString ("n3") + " m";
    measurementA.text = "Area: " + cumulativeArea.ToString ("n3") + " sq. m";
    measurementP.text = "Paint: " + getTotalPaintRequired ().ToString ("n3") + " litres of " + paintType.ToString () + " paint";
  }

  private void updateAreaAndPaint ()
  {
    float width = cumulativeWidth;
    float height = currentWallHeight;

    cumulativeArea = Measure.findArea (height, width);

    displayMeasurements ();
  }

  public float getTotalPaintRequired ()
  {
    return Measure.findPaintRequired (cumulativeArea);
  }

  public void updateWidth (Vector3 lastCoordinate, Vector3 currentCoordinate)
  {
    cumulativeWidth += Measure.findDistance (lastCoordinate, currentCoordinate);
    currentWidth += Measure.findDistance (lastCoordinate, currentCoordinate);
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
