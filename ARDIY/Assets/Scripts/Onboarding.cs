using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Onboarding : MonoBehaviour {

  /*
   * Onboarding displays if the Player Pref "onboarding" isn't set or 
   * if it equals 1
   */

  public GameObject onboard;

	// Use this for initialization
	void Start () {
    if (ButtonManager.isPreview) {
      /*
       * showOnBoarding is true if "onboarding" is set to 1 or is not
       * set at all
       */
      bool showOnboarding = PlayerPrefs.GetInt ("onboarding", 1) == 1;
      onboard.SetActive (showOnboarding);
      PlayerPrefs.SetInt ("onboarding", 0);
    }
	}

  void Update() {
    if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began) {
      if (ButtonManager.isPreview && onboard.activeSelf) {
        PlayerPrefs.SetInt ("onboarding", 0);
        onboard.SetActive (false);
      }
    }
  }

  public void ShowOnboarding () {
    PlayerPrefs.SetInt ("onboarding", 1);
    onboard.SetActive (true);
  }

  void OnApplicationQuit()
  {
    PlayerPrefs.DeleteKey ("onboarding");
  }
}
