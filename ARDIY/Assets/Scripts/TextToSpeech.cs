using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TextToSpeech {
  /* Plugin used from github.com/eralpkaraduman */
  private TTSPlugin tts;
  private static TextToSpeech instance;

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
    utterance = text;
  }


  public void beginSpeechSynthesize() {
    Debug.Log ("Speeech synthesis");
    tts.Begin(utterance);
  }
}
