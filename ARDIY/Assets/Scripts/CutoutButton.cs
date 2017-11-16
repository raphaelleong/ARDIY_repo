using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CutoutButton : MonoBehaviour {

  public bool cutoutMode = false;

  public WallManager wallManager;
  public CutoutManager cutoutManager;
  public CUIColorPicker cuiColorPicker;
  public DrawLine drawLine;

  public void onClick() {
    cutoutMode = !cutoutMode;
    wallManager.enabled = !wallManager.enabled;
    cutoutManager.enabled = !cutoutManager.enabled;
    if (cuiColorPicker.alpha == 0.8f) {
      cuiColorPicker.setOpaque ();
    } else {
      cuiColorPicker.setTransparent ();
    }
    drawLine.enabled = !drawLine.enabled;
  }
}
