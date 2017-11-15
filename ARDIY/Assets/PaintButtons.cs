using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PaintButtons : MonoBehaviour {

  private static PaintType paintType;

  private GameObject oilBased;
  private GameObject emulsion;
  private GameObject nonDrip;
  private bool clicked;

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
  }

  public void clickOilBased() {
    //Choice 0 is oil based
    paintType.setPaintType (0);
    hideButtons();
  }

  public void clickEmulsion() {
    //Choice 1 is emulsion
    paintType.setPaintType (1);
    hideButtons();
  }

  public void clickNonDrip() {
    //Choice 2 is non drip
    paintType.setPaintType (2);
    hideButtons();
  }

  private void hideButtons() {
    oilBased.SetActive (false);
    emulsion.SetActive (false);
    nonDrip.SetActive (false);
    clicked = false;
  }
}
