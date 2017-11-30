using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI; 
using UnityEngine.SceneManagement;
using UnityEngine.EventSystems;
public class HomeFromTools : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

  public void HomePressed() {
    SceneManager.LoadScene("UI");
    Debug.Log("Home pressed");
  }
}
