using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TextToSpeechManager : MonoBehaviour {
  
  private TextToSpeech tts ;

  void Awake() {
    tts = TextToSpeech.Instance;
  }

	// Use this for initialization
	void Start () {
    tts = TextToSpeech.Instance;
	}
	
	// Update is called once per frame
	void Update () {
		
	}

  public void updateCurrentInstruction(bool flag) {
    tts.updateCurrentInstruction(flag);
  }

  public void changeInstructionSet(int index) {
    changeInstructionSet (index);
  }

  public void setUtterance(string utterance) {
    tts.setUtterance(utterance);
  }

  public void speak() {
    Debug.Log ("MANAGER Speech synthesis");

    tts.beginSpeechSynthesize ();
  }

  public int getInstr() {
    return tts.getInstr();
  }

  public int getSet() {
    return tts.getSet();
  }
}
