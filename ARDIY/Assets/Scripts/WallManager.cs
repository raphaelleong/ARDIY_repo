using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WallManager : MonoBehaviour {

	private Color currentColor; 
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void changeColor(Color color) {
		
			currentColor = color; 

			Wall[] walls = this.GetComponentsInChildren<Wall> ();
		Debug.Log ("1");
			foreach (Wall w in walls) {
			Debug.Log ("wall" + w == null);
				w.changeColor (color);
			}
		Debug.Log ("2");

	}

	public void addChild(GameObject wall) {
		wall.transform.SetParent (this.transform);
		wall.GetComponent<Wall>().changeColor (currentColor);
	}
		
}
