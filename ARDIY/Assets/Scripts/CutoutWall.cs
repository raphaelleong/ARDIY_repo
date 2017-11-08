using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CutoutWall : MonoBehaviour {

  LineRenderer lineRenderer;
  Mesh mesh; 

  bool firstCornerPlaced = false;
  Vector3 firstCorner;
  Vector3 secondCorner;

	// Use this for initialization
	void Start () {
    lineRenderer = transform.GetChild (0).GetComponent<LineRenderer> ();
    transform.GetChild (0).rotation = Quaternion.Euler (Vector3.zero);
    mesh = GetComponent<MeshFilter> ().mesh;
	}
	
	// Update is called once per frame
	void Update () {
    
    if (Input.GetMouseButtonDown (0)) {
      RaycastHit hit;
      Ray ray = Camera.main.ScreenPointToRay (Input.mousePosition);
      if (Physics.Raycast (ray, out hit, 100.0f)) {
        Vector3 hitPoint = hit.point;
        if (!firstCornerPlaced) {
          firstCorner = hitPoint;
          firstCornerPlaced = true;
          GameObject cube = GameObject.CreatePrimitive (PrimitiveType.Cube);
          cube.transform.position = hitPoint;
          cube.transform.localScale = Vector3.one * 0.05f;
        } else {
          secondCorner = hitPoint;

          // get other corners
          Vector3 otherCornerA = new Vector3 (firstCorner.x, secondCorner.y, firstCorner.z);
          Vector3 otherCornerB = new Vector3 (secondCorner.x, firstCorner.y, secondCorner.z);

          lineRenderer.positionCount = 4;
          lineRenderer.SetPositions(new Vector3[4]{firstCorner, otherCornerA, secondCorner, otherCornerB});
          lineRenderer.loop = true;
        }
      }
    }
  }
}
