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

  /*
  Find the touch point on the screen and draw a wall between two consecutive points
  */
  void Update() {
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

        foreach (var resultType in resultTypes) {
          if (/*Input.GetMouseButtonDown(0) &&*/ foundPointInPlane(point, resultType)) {
            return ;
          }
        }
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
    if (corners.Count > 0) {
      foreach (var corner in corners) {
        // Vector3 currentCoordinate = Input.mousePosition;
        // currentCoordinate.z = Camera.main.nearClipPlane;
        // currentCoordinate = Camera.main.ScreenToWorldPoint(currentCoordinate);
        Vector3 currentCoordinate = UnityARMatrixOps.GetPosition (corner.worldTransform);

        if (lastCoordinate != null && Vector3.Distance(currentCoordinate, origin) < 0.1) {
          currentCoordinate = origin;
        } else {
          GameObject cube = GameObject.CreatePrimitive(PrimitiveType.Cube);
          cube.transform.position = currentCoordinate;
          cube.transform.localScale = cube.transform.localScale * 0.01f;
        }

        if (lastCoordinate != null) {
			drawWall(lastCoordinate.Value, currentCoordinate);
        } else {
          origin = currentCoordinate;
          anchorPosition();
        }

        lastCoordinate = currentCoordinate;
      }
      return true;
    }

    return false;
  }

  /* Draw a wall between current point and the last point by specifying a mesh with 4 vertices */
	void drawWall(Vector3 point1, Vector3 point2) {
	GameObject wall = Instantiate (wallPrefab);
	
	MeshFilter meshFilter = wall.GetComponent (typeof(MeshFilter)) as MeshFilter;
	Mesh wallMesh = meshFilter.mesh;
		wallMesh.vertices = new Vector3[] {
            point1, 
            point2,
			new Vector3(point2.x, point2.y + 1, point2.z),
			new Vector3(point1.x, point1.y + 1, point1.z)};
    //point1, point2, point2.xyz, point1.xyz

    wallMesh.triangles = new int[] { 0, 1, 2, 0, 2, 3 };

    debugText.text = "";
    foreach (int vec in wallMesh.triangles) {
      debugText.text += vec.ToString () + " - ";
    }
  }

	/* Anchor the origin to the camera */
	void anchorPosition() {
	  UnityARUserAnchorData anchor = UnityARUserAnchorData.UnityARUserAnchorDataFromGameObject(Camera.main.gameObject);

	  UnityARSessionNativeInterface.GetARSessionNativeInterface ().AddUserAnchor(anchor);

	}
}
