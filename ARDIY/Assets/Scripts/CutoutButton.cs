using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CutoutButton : MonoBehaviour {

  public bool cutoutMode = false;

  public WallManager wallManager;
  public CutoutManager cutoutManager;
  public CUIColorPicker cuiColorPicker;
  public DrawLine drawLine;
	public Sprite cutout;
	public Sprite wallMode;

  public void onClick() {
		
    cutoutMode = !cutoutMode;

		Image icon = this.GetComponent<Image> ();

		if (!cutoutMode) {
			icon.sprite = wallMode;
		} else {
			icon.sprite = cutout;
		}

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
