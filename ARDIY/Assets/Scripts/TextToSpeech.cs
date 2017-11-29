using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TextToSpeech : MonoBehaviour {
    /* Plugin used from github.com/eralpkaraduman */
    public TTSPlugin tts;

  private string utterance = "If the adjacent walls or surfaces are not being painted, place masking tape along the touching corner so as not to get paint on these walls.";

    // Use this for initialization
	void Start () {
    tts = new TTSPlugin ();
  }
	
	// Update is called once per frame
	void Update () {
		
	}

    public void setUtterance(string text) {
        utterance = text;
    }

    public string getUtterance() {
        return utterance;
    }

    public void beginSpeechSynthesize() {
        tts.Begin(utterance);
    }
}
