using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;
using UnityEngine.UI;

public class DrawLine : MonoBehaviour {
  // determines the previous coordinate that was saved
  Vector3? lastCoordinate;
  Vector3 currentCoordinate;
  // The first coordinate that was saved
  Vector3 origin;

  public GameObject wallPrefab;
  public Text debugText;
  public Slider slider;

  GameObject wallParent;

  /*
  Find the touch point on the screen and draw a wall between two consecutive points
  */

  void Start() {
    wallParent = new GameObject ();
  }

  void Update() {
    //wallParent.transform.localScale = new Vector3 (1, slider.value, 1);
    //wallParent.transform.position = new Vector3 (0, slider.value / 4.0f, 0);
    if (Input.touchCount > 0) {
      var touch = Input.GetTouch(0);
      if (touch.phase == TouchPhase.Began) {
        var screenPosition = Camera.main.ScreenToViewportPoint (touch.position);
        ARPoint point = new ARPoint {
          x = screenPosition.x,
          y = screenPosition.y
        };

        UnityARSessionNativeInterface.GetARSessionNativeInterface ().RunWithConfig (new ARKitWorldTrackingSessionConfiguration());
        // prioritize result types
        ARHitTestResultType[] resultTypes = {
          ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingExtent,
          // if you want to use infinite planes use this:
          ARHitTestResultType.ARHitTestResultTypeExistingPlane,
          ARHitTestResultType.ARHitTestResultTypeHorizontalPlane,
        };

        int i = 0;
        while (i < resultTypes.Length && !foundPointInPlane (point, resultTypes [i])) {
          i++;
        }

        /*
        foreach (ARHitTestResultType resultType in resultTypes) {
          if (/*Input.GetMouseButtonDown(0) &&*//* foundPointInPlane(point, resultType)) {
            return ;
          }
        }
        */
      }

    }

  }
  
  /*
  Find coordinates of the touch point on screen relative to the plane and place the cube there.
  If lastCoordinate is null, this point is the first cube that is placed.
  Otherwise, connect the previous cube with the current cube
  If the currentCube is close to the origin cube, user has gone back to the original position -> connect the line from the current cube the origin cube
  */
  bool foundPointInPlane(ARPoint point, ARHitTestResultType resultType) {
    List<ARHitTestResult> corners = UnityARSessionNativeInterface.GetARSessionNativeInterface ().HitTest (point, resultType);
    debugText.text = corners.Count.ToString();

    if (corners.Count > 0) {

      Vector3 furthestPoint = Camera.main.transform.position;
      foreach (ARHitTestResult corner in corners) {
        Vector3 realWorldPoint = UnityARMatrixOps.GetPosition (corner.worldTransform);
        if (Vector3.Distance (Camera.main.transform.position, realWorldPoint) >
          Vector3.Distance (Camera.main.transform.position, furthestPoint)) {
          furthestPoint = realWorldPoint;
        }
      }
      
      // Vector3 currentCoordinate = Input.mousePosition;
      // currentCoordinate.z = Camera.main.nearClipPlane;
      // currentCoordinate = Camera.main.ScreenToWorldPoint(currentCoordinate);
      Vector3 currentCoordinate = furthestPoint;

      if (lastCoordinate != null && Vector3.Distance(currentCoordinate, origin) < 0.1) {
        currentCoordinate = origin;
      } else {
        GameObject cube = GameObject.CreatePrimitive(PrimitiveType.Cube);
        cube.transform.position = currentCoordinate;
        cube.transform.localScale = cube.transform.localScale * 0.01f;
      }

      if (lastCoordinate != null) {
		    drawWall(lastCoordinate.Value, currentCoordinate);
        drawWall(currentCoordinate, lastCoordinate.Value);
      } else {
        origin = currentCoordinate;
        anchorPosition();
      }

      lastCoordinate = currentCoordinate;
      return true;
    }

    return false;
  }

  /* Draw a wall between current point and the last point by specifying a mesh with 4 vertices */
	void drawWall(Vector3 point1, Vector3 point2) {
	GameObject wall = Instantiate (wallPrefab);
  wall.transform.position = point1;
  wall.transform.localScale = new Vector3(1, slider.value, 1);
  //wall.transform.SetParent (wallParent.transform);
	MeshFilter meshFilter = wall.GetComponent (typeof(MeshFilter)) as MeshFilter;
	Mesh wallMesh = meshFilter.mesh;
		wallMesh.vertices = new Vector3[] {
      Vector3.zero, 
      (point2 - point1),
      (point2 - point1) + Vector3.up,
      Vector3.up
    };
    //point1, point2, point2.xyz, point1.xyz

    wallMesh.triangles = new int[] { 0, 1, 2, 0, 2, 3 };
  }

	/* Anchor the origin to the camera */
	void anchorPosition() {
	  UnityARUserAnchorData anchor = UnityARUserAnchorData.UnityARUserAnchorDataFromGameObject(Camera.main.gameObject);

	  UnityARSessionNativeInterface.GetARSessionNativeInterface ().AddUserAnchor(anchor);

	}
}
