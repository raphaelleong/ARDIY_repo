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

	public static float findDistance(Vector3 x, Vector3 y) {
		return Vector3.Distance(x, y);
	}

	public static float findArea(float height, float width) {
		return height * width;
	}

  public static double paintPerMSq(PaintType type, float area) {
    switch(type) {
    case PaintType.OilBased:
      return 4.2123;
    case PaintType.HighGloss:
      return 3.3123;
    case PaintType.Emulsion:
      return 1.2334;
    case PaintType.Satin:
      return 4.1205;
    }

    return 0;
  }
}
