using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Measure : MonoBehaviour {

	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void Update () {

	}

	public float findDistance(Vector3 x, Vector3 y) {
		return Vector3.Distance(x, y);
	}

	public float findArea(float height, float width) {
		return height * width;
	}
}
