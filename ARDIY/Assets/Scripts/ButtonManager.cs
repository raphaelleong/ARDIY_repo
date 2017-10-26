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

	public void ComingSoonFeature() {

	}

	/*public void nextInstructionClick() {
		if (instrNo < 15) {
			//next instruction
			instrNo++;
			displayInstr.text = instructions[instrNo];
		} else {
			//end of instructions
		}

	}

	public void backInstructionClick() {
		if (instrNo > 0) {
			//next instruction
			instrNo--;
			displayInstr.text = instructions[instrNo];
		} else {
			//beginning of instructions
		}

	}*/
}
