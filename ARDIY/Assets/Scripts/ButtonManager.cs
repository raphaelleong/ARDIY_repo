using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ButtonManager : MonoBehaviour {
	
    static public bool isPreview = false;

	public void OpenPreview() {

		isPreview = true; 
		SceneManager.LoadScene("EditorTestScene");
	}

    public void OpenSteps()
    {
        isPreview = false;
        SceneManager.LoadScene("EditorTestScene");
    }

	public void OpenTools() {
    SceneManager.LoadScene ("ToolsScene");

	}
}
