using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIManager : MonoBehaviour {
	// Use this for initialization
	bool palette; 
	CUIColorPicker picker;
	void Start () {
		palette = false; 
		picker = this.gameObject.GetComponentInChildren<CUIColorPicker> (true);
        if (ButtonManager.isPreview)
        {
            GameObject instructions = GameObject.Find("InstructionsUI");
            instructions.SetActive(false);
        } else
        {
            GameObject colourPicker = GameObject.Find("ColourUI");
            colourPicker.SetActive(false);
        }
	}

	// Update is called once per frame
	void Update () {

	}
 }
