using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PaintButtons : MonoBehaviour {

  private static PaintType paintType;

  public GameObject primer;
  public GameObject oilBased;
  public GameObject emulsion;
  public GameObject nonDrip;
  private bool clicked;

  public GameObject infoPanel;
  private bool infoDisplayed; 

  public GameObject measurementGameObjectP;
  private Text measurementP;

	// Use this for initialization
	void Start () {

    clicked = true; //TODO was false
    paintType = PaintType.Instance;

    /*
    oilBased.SetActive (false);
    emulsion.SetActive (false);
    nonDrip.SetActive (false);
    primer.SetActive (false);
    */
    clickPaintType ();

    measurementP = measurementGameObjectP.GetComponent<Text>();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

  public void clickPaintType() {
    oilBased.SetActive (!clicked);
    emulsion.SetActive (!clicked);
    nonDrip.SetActive (!clicked);
    primer.SetActive (!clicked);

    infoPanel.SetActive (!clicked);

    clicked = !clicked;
    infoDisplayed = !clicked;
  }


  public void clickOilBased() {
    //Choice 0 is oil based
    changePaintType(0);
  }

  public void clickEmulsion() {
    //Choice 1 is emulsion
    changePaintType(1);
  }

  public void clickNonDrip() {
    //Choice 2 is non drip
    changePaintType(2);
  }

  public void clickPrimer() {
    //Choice 3 is primer
    changePaintType(3);
  }

  private void changePaintType(int val) {
    paintType.setPaintType (val);
    setMP ();
  }

  private void setMP() {
    string suffix = "";
    if (paintType.getPaintType() != 3) {
        suffix = " paint";
      }
    measurementP.text = "Paint: " + MeasurementManager.getTotalPaintRequired().ToString("n3") + " litres of " + paintType.getName() + suffix;
  }
}
