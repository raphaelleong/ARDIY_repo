using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CutoutManager : MonoBehaviour {

  public GameObject cutoutPrefab;

  bool firstCornerPlaced = false;
  bool secondCornerPlaced = false;

  Vector3 firstCorner;
  Vector3 secondCorner;

  GameObject selectedWall;
  LineRenderer selectedLineRenderer;

  Vector3 otherCornerA;
  Vector3 otherCornerB;

  GameObject cube;
	
	// Update is called once per frame
	void Update () {
      
    RaycastHit hit;
    Ray ray = Camera.main.ScreenPointToRay (new Vector3 (Screen.width / 2, Screen.height / 2, 0.0f));

    // if the mouse ray has intersected with anything
    if (Physics.Raycast (ray, out hit, 100.0f)) {
     
      // check you have hit a wall and not another object
      if (hit.transform.gameObject.GetComponent<Wall> () != null) {

        GameObject currentWall = hit.transform.gameObject;

        Vector3 hitPoint = hit.point;

        if (!firstCornerPlaced) {

          selectedWall = currentWall;
          selectedLineRenderer = currentWall.transform.GetChild (0).GetComponent<LineRenderer> ();

          firstCorner = hitPoint;
          firstCornerPlaced = true;

        } else {
          // we are placing the other corner
          // check it's the same wall as the first point
          if (currentWall.Equals(selectedWall)) {

            secondCorner = hitPoint;

            // get other corners
            otherCornerA = new Vector3 (firstCorner.x, secondCorner.y, firstCorner.z);
            otherCornerB = new Vector3 (secondCorner.x, firstCorner.y, secondCorner.z);

            selectedLineRenderer.positionCount = 4;
            Vector3[] relativePositions = new Vector3[4]{ firstCorner, otherCornerA, secondCorner, otherCornerB };
            Vector3[] worldPositions = new Vector3[4];
            for (int i = 0; i < 4; i++) {
              worldPositions [i] = relativePositions [i] - hit.transform.position;
            }
            selectedLineRenderer.SetPositions (worldPositions);
            selectedLineRenderer.loop = true;
            secondCornerPlaced = true;
          }
        }
      }
    }

    if (Input.GetKeyDown (KeyCode.Space)) {
      if (secondCornerPlaced) {
        Cutout (selectedWall, firstCorner, secondCorner);
        firstCornerPlaced = false;
        secondCornerPlaced = false;
        selectedLineRenderer.positionCount = 0;
      } else {
        Debug.Log ("points not selected");
      }
    }
  }

  public void Cutout (GameObject wall, Vector3 corner1, Vector3 corner2) {

    Vector3 otherCorner1 = new Vector3 (corner1.x, corner2.y, corner1.z);
    Vector3 otherCorner2 = new Vector3 (corner2.x, corner1.y, corner2.z);

    GameObject cutout = Instantiate (cutoutPrefab, wall.transform);
    float width = Vector3.Distance(corner1, otherCorner2);
    float height = Vector3.Distance(corner1, otherCorner1);
    cutout.transform.localScale = new Vector3 (width, height, 1);
    cutout.transform.position = corner1 + (corner2 - corner1) / 2;
  }
}
