using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI; 
using UnityEngine.SceneManagement;
using UnityEngine.EventSystems;

public class UIManager : MonoBehaviour {
	// Use this for initialization
	bool palette; 
	CUIColorPicker picker;
	private GameObject home; 
	private GameObject colour;

	void Start () {
		palette = false; 
		picker = this.gameObject.GetComponentInChildren<CUIColorPicker> (true);

		home = GameObject.Find ("Home Button");
		//colour = GameObject.Find ("Colour Palette");

        if (ButtonManager.isPreview)
        {
			GameObject instructions = GameObject.Find("InstructionsUI");
            instructions.SetActive(false);
        } else
        {
            GameObject colourPicker = GameObject.Find("ColourUI");
            colourPicker.SetActive(false);
			GameObject recorder = GameObject.Find("Recorder");
			recorder.SetActive(false); 
			GameObject slider = GameObject.Find("Slider");
			slider.SetActive(false); 
        }
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
