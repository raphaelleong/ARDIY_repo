using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SelectCutoutArea : MonoBehaviour {

	// Use this for initialization
	void Start () {
    transform.GetChild (0).rotation = Quaternion.Euler (Vector3.zero);
	}
}
