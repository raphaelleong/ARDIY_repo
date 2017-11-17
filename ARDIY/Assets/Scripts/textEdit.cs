/*using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class textEdit : MonoBehaviour {

	public GameObject contentObject;
	public GameObject instructionObject;
	private static string[] instructions = new string[16];

	// Use this for initialization
	void Start () {
		foreach (string instr in instructions)
		{
			GameObject newInstr = Instantiate(instructionObject, contentObject.transform);
			//newInstr.SetActive (true);
			//newInstr.transform.SetParent(contentObject.transform);
			Text text = newInstr.transform.GetChild(0).GetComponent<Text>();
			text.text = instr;
			newInstr.transform.localScale = Vector3.one;
		}
	}

	public static void setInstructions(string[] chosenInstr) {

		instructions = chosenInstr;
	}


} */
