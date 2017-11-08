using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SelectCutoutArea : MonoBehaviour {

  LineRenderer lineRenderer;
  Mesh mesh; 

  bool firstCornerPlaced = false;
  Vector3 firstCorner;
  bool secondCornerPlaced = false;
  Vector3 secondCorner;

  Vector3 otherCornerA;
  Vector3 otherCornerB;

  GameObject cube;

  CutoutMesh cutoutMesh;

	// Use this for initialization
	void Start () {
    lineRenderer = transform.GetChild (0).GetComponent<LineRenderer> ();
    transform.GetChild (0).rotation = Quaternion.Euler (Vector3.zero);
    mesh = GetComponent<MeshFilter> ().mesh;
    cutoutMesh = GetComponent<CutoutMesh> ();
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
          cube = GameObject.CreatePrimitive (PrimitiveType.Cube);
          cube.transform.position = hitPoint;
          cube.transform.localScale = Vector3.one * 0.05f;
        } else {
          secondCorner = hitPoint;

          // get other corners
          otherCornerA = new Vector3 (firstCorner.x, secondCorner.y, firstCorner.z);
          otherCornerB = new Vector3 (secondCorner.x, firstCorner.y, secondCorner.z);

          lineRenderer.positionCount = 4;
          lineRenderer.SetPositions(new Vector3[4]{firstCorner, otherCornerA, secondCorner, otherCornerB});
          lineRenderer.loop = true;
          secondCornerPlaced = true;
        }
      }
    }

    if (Input.GetKeyDown (KeyCode.Space)) {
      if (secondCornerPlaced) {
        //cutoutMesh.Cutout (new Vector3[4]{ firstCorner, otherCornerA, secondCorner, otherCornerB });
        cutoutMesh.Cutout (firstCorner, secondCorner);
        firstCornerPlaced = false;
        secondCornerPlaced = false;
        lineRenderer.positionCount = 0;
        Destroy (cube);
      } else {
        Debug.Log ("points not selected");
      }
    }
  }
}
