using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PaintButtons : MonoBehaviour {

  private static PaintType paintType;

  private GameObject oilBased;
  private GameObject emulsion;
  private GameObject nonDrip;
  private bool clicked;

  private GameObject infoPanel;
  private bool infoDisplayed; 

  private Text measurementP;

	// Use this for initialization
	void Start () {

    clicked = false;
    paintType = PaintType.Instance;

    oilBased = GameObject.Find ("OilBasedButton");
    emulsion = GameObject.Find ("EmulsionButton");
    nonDrip = GameObject.Find ("NonDripButton");
    oilBased.SetActive (false);
    emulsion.SetActive (false);
    nonDrip.SetActive (false);

    infoPanel = GameObject.Find ("Info Pop Up");
    GameObject infoButton = GameObject.Find("Info Button");

    measurementP = GameObject.Find(GameObjectNames.MeasurementPaint).GetComponent<Text>();
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

  public void clickPaintType() {
    if (!clicked) {
      oilBased.SetActive (true);
      emulsion.SetActive (true);
      nonDrip.SetActive (true);
      clicked = true;
    } else {
      hideButtons();
    }
    infoPanel.SetActive (!infoDisplayed);
    infoDisplayed = !infoDisplayed;
  }

  public void clickOilBased() {
    //Choice 0 is oil based
    paintType.setPaintType (0);
    measurementP.text = "Paint: " + MeasurementManager.getTotalPaintRequired().ToString("n3") + " litres of " + paintType.ToString() + " paint";
  }

  public void clickEmulsion() {
    //Choice 1 is emulsion
    paintType.setPaintType (1);
    measurementP.text = "Paint: " + MeasurementManager.getTotalPaintRequired().ToString("n3") + " litres of " + paintType.ToString() + " paint";
  }

  public void clickNonDrip() {
    //Choice 2 is non drip
    paintType.setPaintType (2);
    measurementP.text = "Paint: " + MeasurementManager.getTotalPaintRequired().ToString("n3") + " litres of " + paintType.ToString() + " paint";
  }

  private void hideButtons() {
    oilBased.SetActive (false);
    emulsion.SetActive (false);
    nonDrip.SetActive (false);
    clicked = false;
  }
}
