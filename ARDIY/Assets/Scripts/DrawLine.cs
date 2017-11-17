using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class DrawLine : MonoBehaviour
{
  public GameObject wallPrefab;
  public CutoutButton cutoutButton;
  
  private Vector3? lastCoordinate;
  /* determines the previous coordinate that was saved */
  private Vector3 origin;
  /* The first coordinate that was saved */
  public WallManager wallManager;
  public MeasurementManager measurer;
	ARPoint point; 

  void Start ()
  {
  }

	public void addPoint() {
    if (!cutoutButton.cutoutMode) {
      var screenPosition = Camera.main.ScreenToViewportPoint (new Vector3 (Screen.width / 2, Screen.height / 2, Camera.main.nearClipPlane));
      point = new ARPoint {
        x = screenPosition.x,
        y = screenPosition.y
      };

      UnityARSessionNativeInterface.GetARSessionNativeInterface ().RunWithConfig (new ARKitWorldTrackingSessionConfiguration ());
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
    }
	}
//	  Find the touch point on the screen and draw a wall between two consecutive points
  void Update ()
  {
  }

  /*
	  Find coordinates of the touch point on screen relative to the plane and place the cube there.
	  If lastCoordinate is null, this point is the first cube that is placed.
	  Otherwise, connect the previous cube with the current cube
	  If the currentCube is close to the origin cube, user has gone back to the original position -> connect the line from the current cube the origin cube
	*/
  bool foundPointInPlane (ARPoint point, ARHitTestResultType resultType)
  {
    List<ARHitTestResult> corners = UnityARSessionNativeInterface.GetARSessionNativeInterface ().HitTest (point, resultType);

    if (corners.Count > 0) {
      Vector3 currentCoordinate = getFurthestPoint (corners);
      drawCube (currentCoordinate);
      lastCoordinate = currentCoordinate;
      return true;
    }

    return false;
  }

  /* Get the furthest point from the screen where it is tapped */
  Vector3 getFurthestPoint (List<ARHitTestResult> corners)
  {
    Vector3 furthestPoint = Camera.main.transform.position;

    foreach (ARHitTestResult corner in corners) {
      Vector3 realWorldPoint = UnityARMatrixOps.GetPosition (corner.worldTransform);
      if (Vector3.Distance (Camera.main.transform.position, realWorldPoint) >
          Vector3.Distance (Camera.main.transform.position, furthestPoint)) {
        furthestPoint = realWorldPoint;
      }
    }

    return furthestPoint;
  }

  /* Place a cube in the specify coordinate and draw a wall if cube is not the first cube placed */
  void drawCube (Vector3 currentCoordinate)
  {
//    Vector3 origin = wallManager.getOrigin ();
    //Vector3? lastCoordinate = wallManager.getLastWallCoordinate ();

    if (lastCoordinate != null && Vector3.Distance (currentCoordinate, origin) < 0.1) {
      //if close to the first point then take it as the first point
      currentCoordinate = origin;
    } else {
      //otherwise create a new cube in the correct position with correct size
      GameObject cube = GameObject.CreatePrimitive (PrimitiveType.Cube);
      cube.transform.position = currentCoordinate;
      cube.transform.localScale = cube.transform.localScale * 0.01f;
      anchorPosition (cube);
    }

    if (lastCoordinate != null) {
      drawWall (lastCoordinate.Value, currentCoordinate);

      /* Update width. */
      measurer.updateWidth (lastCoordinate.Value, currentCoordinate);
    } else {     
      origin = currentCoordinate;
      wallManager.addOrigin (origin);
    }
  }

  /* Draw a wall between current point and the last point by specifying a mesh with 4 vertices */
  void drawWall (Vector3 point1, Vector3 point2)
  {
    GameObject wall = Instantiate (wallPrefab);
    wallManager.addChild (wall);
		
    WallManager.getWall (wall).drawWall (point1, point2, measurer.getWallHeight ());
  }

  /* Anchor the origin to the camera */
  void anchorPosition (GameObject cube)
  {
    UnityARUserAnchorData anchor = UnityARUserAnchorData.UnityARUserAnchorDataFromGameObject (cube);
    UnityARSessionNativeInterface.GetARSessionNativeInterface ().AddUserAnchor (anchor);
  }

  public void adjustWallHeight (float height)
  {
    wallManager.setWallHeights (height);
    measurer.setHeight(height);
  }

  public void removeLastWall () {
    lastCoordinate = wallManager.removeLastWall ();
  }

  public void clickDisjointWall()
  {
		measurer.setCurrentWidth (0);
		lastCoordinate = null;    
  }
}
