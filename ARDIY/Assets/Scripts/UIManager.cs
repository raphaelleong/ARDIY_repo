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
	private GameObject infoPanel;
	private GameObject menu; 
	private bool infoDisplayed; 
	private bool menuDisplayed; 

	void Start () {
		palette = false; 
		picker = this.gameObject.GetComponentInChildren<CUIColorPicker> (true);

		home = GameObject.Find ("Home Button");
		infoPanel = GameObject.Find ("Info Pop Up");
		menu = GameObject.Find("Menu");
		Debug.Log (infoPanel);
		infoDisplayed = false; 
		menuDisplayed = false; 
		menu.SetActive (menuDisplayed);
		//colour = GameObject.Find ("Colour Palette");

        if (ButtonManager.isPreview)
        {
			GameObject instructions = GameObject.Find("InstructionsUI");
            instructions.SetActive(false);
			infoPanel.SetActive (false);
        } else
        {
            GameObject colourPicker = GameObject.Find("ColourUI");
            colourPicker.SetActive(false);
			GameObject colourButton = GameObject.Find("Colour Palette");
			colourButton.SetActive (false);
			GameObject infoButton = GameObject.Find("Info Button");
			infoButton.SetActive (false);
			GameObject disjointButton = GameObject.Find("DisjointButton");
			disjointButton.SetActive (false); 
			GameObject undoButton = GameObject.Find("Remove Button");
			undoButton.SetActive (false);
			GameObject addButton = GameObject.Find("Add Corner Button");
			addButton.SetActive (false); 


			GameObject recorder = GameObject.Find("Recorder");
			recorder.SetActive(false); 
			GameObject slider = GameObject.Find("Slider");
			slider.SetActive(false); 

			infoPanel.SetActive (false);
//			GameObject width = GameObject.Find("MeasurementWidth");
//			width.SetActive(false);
//			GameObject height = GameObject.Find("MeasurementHeight");
//			height.SetActive(false);
//			GameObject area = GameObject.Find("MeasurementArea");
//			area.SetActive(false);
//			GameObject paint = GameObject.Find("MeasurementPaint");
//			paint.SetActive(false);
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

	public void Info_OnClick()
	{
		infoPanel.SetActive (!infoDisplayed);
		infoDisplayed = !infoDisplayed;
	}

	public void Menu_OnClick()
	{
		menu.SetActive (!menuDisplayed);
		menuDisplayed = !menuDisplayed;
	}
 }
