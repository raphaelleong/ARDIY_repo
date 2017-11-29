using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TextToSpeech : MonoBehaviour {
  /* Plugin used from github.com/eralpkaraduman */
  public static TTSPlugin tts;

  private static string utterance = "Hello user, prepare for your termination";
  // Use this for initialization
  void Start() {
    tts = new TTSPlugin();
  }
	
  // Update is called once per frame
  void Update() {
		
  }

  public static void setUtterance(string text) {
    utterance = text;
  }


  public void beginSpeechSynthesize() {
    tts.Begin(utterance);
  }
}
