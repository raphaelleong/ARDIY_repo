using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class Wall : MonoBehaviour {

	MeshRenderer renderer; 
	MeshFilter meshFilter;
	Mesh mesh;
	Material material;
	//public Text debugText;
	// Use this for initialization
	void Start () {
		renderer = this.GetComponent<MeshRenderer> ();
		material = renderer.material;
		Debug.Log ("material" + material.Equals (null));

	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void changeColor(Color color) {
		//Debug.Log (color);
		renderer = this.GetComponent<MeshRenderer> ();
		material = renderer.material;
		Debug.Log("color == " + color == null);
		material.color = color; 
		//debugText.text = "color: " + color.ToString ();
		//material.SetColor ("_Color", color);

		//renderer.material = material; 
		//mesh.RecalculateBounds ();
	}
}
