using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIManager : MonoBehaviour {
	// Use this for initialization
	void Start () {

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
