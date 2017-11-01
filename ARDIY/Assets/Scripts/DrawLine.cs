
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;
using UnityEngine.UI;

public class DrawLine : MonoBehaviour
{
	// determines the previous coordinate that was saved
	Vector3? lastCoordinate;

	// The first coordinate that was saved
	Vector3 origin;

	public GameObject wallPrefab;
	public Text measurement;
	public float cumulativeArea;

	public List<GameObject> wallsCreated;
	float currentWallHeight = 1;

	void Start ()
	{
		//measurement = GameObject.Find("Measurement").GetComponent<Text>();
	}

	/*
	  Find the touch point on the screen and draw a wall between two consecutive points
	*/
	void Update ()
	{
		if (Input.touchCount > 0) {
			var touch = Input.GetTouch (0);
			if (touch.phase == TouchPhase.Began) {
				var screenPosition = Camera.main.ScreenToViewportPoint (new Vector3(Screen.width/2, Screen.height/2, Camera.main.nearClipPlane));
				ARPoint point = new ARPoint {
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
			Vector3 currentCoordinate = getFurthestPoint(corners);
			drawCube (currentCoordinate);
			lastCoordinate = currentCoordinate;
			//			measurement.text = lastCoordinate;
			return true;
		}

		return false;
	}

	/* Get the furthest point from the screen where it is tapped */
	Vector3 getFurthestPoint(List<ARHitTestResult> corners) {
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
	void drawCube (Vector3 currentCoordinate) {
		if (lastCoordinate != null && Vector3.Distance (currentCoordinate, origin) < 0.1) {
			//if close to the first point then take it as the first point
			currentCoordinate = origin;
		} else {
			//otherwise create a new cube in the correct position with correct size
			GameObject cube = GameObject.CreatePrimitive (PrimitiveType.Cube);
			cube.transform.position = currentCoordinate;
			cube.transform.localScale = cube.transform.localScale * 0.01f;
		}

		if (lastCoordinate != null) {
			drawWall (lastCoordinate.Value, currentCoordinate);
			drawWall (currentCoordinate, lastCoordinate.Value);
			//float width = Measure.findDistance(lastCoordinate.Value, currentCoordinate);
			//float height = width;
			//cumulativeArea = Measure.findArea(height, width);

			//measurement.text = width.ToString();
		} else {
			origin = currentCoordinate;
			anchorPosition ();
		}
	}

	/* Draw a wall between current point and the last point by specifying a mesh with 4 vertices */
	void drawWall (Vector3 point1, Vector3 point2)
	{
		GameObject wall = Instantiate (wallPrefab);
		wallsCreated.Add (wall);
		wall.transform.position = point1;

		MeshFilter meshFilter = wall.GetComponent (typeof(MeshFilter)) as MeshFilter;
		Mesh wallMesh = meshFilter.mesh;
		wallMesh.vertices = new Vector3[] {
			Vector3.zero,
			(point2 - point1),
			(point2 - point1) + Vector3.up * currentWallHeight,
			Vector3.up * currentWallHeight
		};
		//point1, point2, point2.xyz, point1.xyz
		wallMesh.triangles = new int[] { 0, 1, 2, 0, 2, 3 };
	}

	/* Anchor the origin to the camera */
	void anchorPosition ()
	{
		UnityARUserAnchorData anchor = UnityARUserAnchorData.UnityARUserAnchorDataFromGameObject (Camera.main.gameObject);

		UnityARSessionNativeInterface.GetARSessionNativeInterface ().AddUserAnchor (anchor);

	}

	public void adjustWallHeight (float height)
	{
		currentWallHeight = height;
		foreach (GameObject wall in wallsCreated) {
			MeshFilter meshFilter = wall.GetComponent (typeof(MeshFilter)) as MeshFilter;
			Mesh wallMesh = meshFilter.mesh;
			Vector3[] vertices = wallMesh.vertices;
			wallMesh.SetVertices (
				new List<Vector3> () {
					Vector3.zero,
					vertices [1],
					vertices [1] + Vector3.up * height,
					Vector3.up * height
				});
		}
	}
}