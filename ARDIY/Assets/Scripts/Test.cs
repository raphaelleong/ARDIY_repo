using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Test : MonoBehaviour {

	public GameObject cube;

	public GameObject[] instantiatedCubes = new GameObject[10];

	// Use this for initialization
	void Start () {
		for (int i = 0; i < 10; i++) {
			instantiatedCubes[i] = Instantiate (cube);
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
