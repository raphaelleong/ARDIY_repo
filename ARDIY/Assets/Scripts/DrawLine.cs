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
        var screenPosition = Camera.main.ScreenToViewportPoint (touch.position);
        ARPoint point = new ARPoint {
          x = screenPosition.x,
          y = screenPosition.y
        };

        UnityARSessionNativeInterface.GetARSessionNativeInterface ().RunWithConfig (new ARKitWorldTrackingSessionConfiguration());
        // prioritize reults types
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
              drawLine(currentCoordinate);
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

  void drawLine(Vector3 currentCoordinate) {
    GameObject plane = Instantiate(line);
    MeshFilter mf = plane.AddComponent<MeshFilter>();
    MeshRenderer mr = plane.AddComponent<MeshRenderer>();

    LineRenderer newLine = Instantiate(line).GetComponent<LineRenderer>();
    newLine.enabled = true;
    newLine.SetPosition(0, lastCoordinate.Value);
    newLine.SetPosition(1, currentCoordinate);
    newLine.startWidth = 0.01f;
    newLine.endWidth = 0.01f;
    var wall = new Mesh();
    wall.vertices = new Vector3[] {lastCoordinate.Value, currentCoordinate,
                      new Vector3(currentCoordinate.x, currentCoordinate.y + 10, currentCoordinate.z),
                      new Vector3(lastCoordinate.Value.x, lastCoordinate.Value.y + 10, lastCoordinate.Value.z)};

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

  void anchorPosition() {
    UnityARUserAnchorData anchor = UnityARUserAnchorData.UnityARUserAnchorDataFromGameObject(Camera.main.gameObject);

    UnityARSessionNativeInterface.GetARSessionNativeInterface ().AddUserAnchor(anchor);

  }
}
