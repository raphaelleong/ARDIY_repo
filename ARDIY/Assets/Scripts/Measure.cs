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

  public static float paintPerMSq(PaintType type) {
    switch(type) {
    case PaintType.OilBased:
      return 4.23f;
    case PaintType.HighGloss:
      return 3.33f;
    case PaintType.Emulsion:
      return 1.24f;
    case PaintType.Satin:
      return 4.12f;
    }

    return 0f;
  }

  public static float findPaintRequired(PaintType type, float area) {
    return paintPerMSq(type) * area;
  }
}
