using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class HomeButton : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public void Home_onClick()
    {
        //ButtonManager.isPreview = false; 
        SceneManager.LoadScene("UI");
        Debug.Log("Home pressed");
        //go to the home screen
    }
}
