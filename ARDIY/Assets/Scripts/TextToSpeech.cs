using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TextToSpeech : MonoBehaviour {
    /* Plugin used from github.com/eralpkaraduman */
    public TTSPlugin tts;

    private string utterance = "hello world";

    // Use this for initialization
	void Start () {
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
