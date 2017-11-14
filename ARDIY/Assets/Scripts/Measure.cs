using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Measure : MonoBehaviour {
	private static PaintType paintType;
	// Use this for initialization
	void Start () {
		paintType = PaintType.Instance;
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
		
  public static float findPaintRequired(float area) {
    return ((float) paintType.getPaintPerSqM()) * area;
  }
}
