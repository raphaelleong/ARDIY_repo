using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;

public class DrawLine : MonoBehaviour {
  Vector3? lastCoordinate;
  Vector3 origin;
  List<Vector3> positions;
  GameObject line;

  void Start() {
    positions = new List<Vector3>();
    line = new GameObject();
    LineRenderer renderedLine = line.AddComponent<LineRenderer>();
    renderedLine.enabled = false;
  }

  void Update() {
    if (Input.touchCount > 0) {
      var touch = Input.GetTouch(0);
      if (touch.phase == TouchPhase.Began) {
        // positions.Add(Camera.main.ScreenToWorldPoint(touch.position));
        var screenPosition = Camera.main.ScreenToViewportPoint (touch.position);
        ARPoint point = new ARPoint {
          x = screenPosition.x,
          y = screenPosition.y
        };

        // UnityARSessionNativeInterface.GetARSessionNativeInterface ().RunWithConfig (new ARKitWorldTrackingSessionConfiguration());
        // prioritize reults types
        ARHitTestResultType[] resultTypes = {
            ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingExtent,
            // if you want to use infinite planes use this:
            ARHitTestResultType.ARHitTestResultTypeExistingPlane,
            ARHitTestResultType.ARHitTestResultTypeHorizontalPlane,
            ARHitTestResultType.ARHitTestResultTypeFeaturePoint
        };

        foreach (var resultType in resultTypes) {
          if (foundPointInPlane(point, resultType)) {
            return ;
          }
        }
      }

    }

  }

  bool foundPointInPlane(ARPoint point, ARHitTestResultType resultType) {
    List<ARHitTestResult> corners = UnityARSessionNativeInterface.GetARSessionNativeInterface ().HitTest (point, resultType);
    if (corners.Count > 0) {
        foreach (var corner in corners) {
          Vector3 currentCoordinate = UnityARMatrixOps.GetPosition (corner.worldTransform);

          // if (Vector3.Distance(currentCoordinate, origin) < 1) {
          //   currentCoordinate = origin;
          // } else {
            GameObject cube = GameObject.CreatePrimitive(PrimitiveType.Cube);
            cube.transform.position = currentCoordinate;
            cube.transform.localScale = cube.transform.position*0.3f;
          // }

            if(lastCoordinate != null) {
              drawLine(currentCoordinate);
            } else {
              origin = currentCoordinate;
            }

            lastCoordinate = currentCoordinate;
        }
        return true;
    }

    return false;
  }

  void drawLine(Vector3 currentCoordinate) {
    GameObject plane = new GameObject();
    MeshFilter mf = plane.AddComponent<MeshFilter>();
    SkinnedMeshRenderer mr = plane.AddComponent<SkinnedMeshRenderer>();
    mr.updateWhenOffscreen = true;

    // LineRenderer newLine = Instantiate(line).GetComponent<LineRenderer>();
    // newLine.enabled = true;
    // newLine.SetPosition(0, lastCoordinate.Value);
    // newLine.SetPosition(1, currentCoordinate);
    // newLine.startWidth = 0.01f;
    // newLine.endWidth = 0.01f;
    var wall = new Mesh();
    wall.vertices = new Vector3[] {lastCoordinate.Value, currentCoordinate,
                      new Vector3(currentCoordinate.x, currentCoordinate.y + 100, currentCoordinate.z),
                      new Vector3(lastCoordinate.Value.x, lastCoordinate.Value.y + 100, lastCoordinate.Value.z)};

    wall.triangles = new int[] {0, 1, 2, 0, 2, 3};

    wall.uv = new Vector2[] {
      new Vector2(0, 0),
      new Vector2(1, 0),
      new Vector2(0, 1),
      new Vector2(1, 1)
    };

    mf.mesh = wall;
    wall.RecalculateBounds();
    wall.RecalculateNormals();
  }
}
