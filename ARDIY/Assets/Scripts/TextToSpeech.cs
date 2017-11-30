using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TextToSpeech {
  /* Plugin used from github.com/eralpkaraduman */
  private TTSPlugin tts;
  private static TextToSpeech instance;

  private int currInstr = 0;
  private int currSet = 0;

  private string utterance = "Hello user, prepare for your termination";
  // Use this for initialization

  private TextToSpeech() {
    tts = new TTSPlugin ();
  }

  public static TextToSpeech Instance {
    get {
      if (instance == null) {
        instance = new TextToSpeech ();
      }
      return instance;
    }
  }
    
  public void setUtterance(string text) {
    Debug.Log ("utterance set");
    utterance = text;
  }

  public void beginSpeechSynthesize() {
    Debug.Log ("Speech synthesis : " + utterance);
    tts.Begin(utterance);
  }

  public void changeInstructionSet(int index) {
    currSet = index;
    currInstr = 0;
  }

  public int getInstr() {
    return currInstr;
  }

  public int getSet() {
    return currSet;
  }

  public void updateCurrentInstruction(bool flag) {
    currInstr = flag ? currInstr + 1 : currInstr - 1;
  }
}
