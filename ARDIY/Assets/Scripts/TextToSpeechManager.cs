using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TextToSpeechManager : MonoBehaviour {
  private int currInstr = 0;
  private int currSet = 0;
  private TextToSpeech tts;

	// Use this for initialization
	void Start () {
    tts = TextToSpeech.Instance;
	}
	
	// Update is called once per frame
	void Update () {
		
	}

  public void updateCurrentInstruction(bool flag) {
    currInstr = flag ? currInstr + 1 : currInstr - 1;
  }

  public void changeInstructionSet(int index) {
    currSet = index;
    currInstr = 0;
  }

  public void setUtterance(string utterance) {
    tts.setUtterance(utterance);
  }

  public void speak() {
    tts.beginSpeechSynthesize ();
  }

  public int getInstr() {
    return currInstr;
  }

  public int getSet() {
    return currSet;
  }
}
