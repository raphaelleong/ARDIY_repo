using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Onboarding : MonoBehaviour {

  public GameObject onboard;

	// Use this for initialization
	void Start () {
    if (ButtonManager.isPreview) {
      bool showOnboarding = PlayerPrefs.GetInt ("onboarding", 1) == 1;
      if (showOnboarding) {
        onboard.SetActive (true);
      } else {
        onboard.SetActive (false);
      }
      PlayerPrefs.SetInt ("onboarding", 0);
    }
	}

  void Update() {
    if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began) {
      if (ButtonManager.isPreview) {
        PlayerPrefs.SetInt ("onboarding", 0);
        onboard.SetActive (false);
      }
    }
  }

  void OnApplicationQuit()
  {
    PlayerPrefs.DeleteKey ("onboarding");
  }
}
