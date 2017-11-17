using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CutoutManager : MonoBehaviour {

  public GameObject cutoutPrefab;

  public MeasurementManager measurementManager;

  List<GameObject> cutouts = new List<GameObject>();

  bool firstCornerPlaced = false;
  bool secondCornerPlaced = false;

  Vector3 firstCorner;
  Vector3 secondCorner;

  GameObject selectedWall;
  LineRenderer selectedLineRenderer;

  Vector3 otherCornerA;
  Vector3 otherCornerB;

  GameObject cube;

  void Start () {


  }

  // Update is called once per frame
  void Update () {

    //if (Input.GetMouseButton(0)) {
    if (firstCornerPlaced) {
      RaycastHit hit;
      Ray ray = Camera.main.ScreenPointToRay (new Vector3 (Screen.width / 2, Screen.height / 2, 0.0f));
      //Ray ray = Camera.main.ScreenPointToRay (Input.mousePosition);

      // if the mouse ray has intersected with anything
      if (Physics.Raycast (ray, out hit, 100.0f)) {

        // check you have hit a wall and not another object
        if (hit.transform.gameObject.GetComponent<Wall> () != null) {

          GameObject currentWall = hit.transform.gameObject;

          Vector3 hitPoint = hit.point;

          // we are placing the other corner
          // check it's the same wall as the first point
          if (currentWall.Equals (selectedWall)) {

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
  }

  public void OnClick () {
    if (!firstCornerPlaced) {
      RaycastHit hit;
      Ray ray = Camera.main.ScreenPointToRay (new Vector3 (Screen.width / 2, Screen.height / 2, 0.0f));
      //Ray ray = Camera.main.ScreenPointToRay (Input.mousePosition);

      // if the mouse ray has intersected with anything
      if (Physics.Raycast (ray, out hit, 100.0f)) {

        // check you have hit a wall and not another object
        if (hit.transform.gameObject.GetComponent<Wall> () != null) {

          GameObject currentWall = hit.transform.gameObject;

          Vector3 hitPoint = hit.point;

          selectedWall = currentWall;
          selectedLineRenderer = currentWall.transform.GetChild (0).GetComponent<LineRenderer> ();

          firstCorner = hitPoint;
          firstCornerPlaced = true;
        }
      }
    }

    if (secondCornerPlaced) {
      Cutout (selectedWall, firstCorner, otherCornerA, secondCorner, otherCornerB);
      firstCornerPlaced = false;
      secondCornerPlaced = false;
      selectedLineRenderer.positionCount = 0;
    }
  }

  public void Cutout (GameObject wall, Vector3 corner1, Vector3 otherCorner1, Vector3 corner2, Vector3 otherCorner2) {

    GameObject cutout = Instantiate (cutoutPrefab, wall.transform);
    cutouts.Add (cutout);
    MeshFilter meshFilter = cutout.GetComponent (typeof(MeshFilter)) as MeshFilter;
    Mesh cutoutMesh = meshFilter.mesh;

    Vector3 localCorner1 = wall.transform.InverseTransformPoint (corner1);
    Vector3 localOtherCorner1 = wall.transform.InverseTransformPoint (otherCorner1);
    Vector3 localCorner2 = wall.transform.InverseTransformPoint (corner2);
    Vector3 localOtherCorner2 = wall.transform.InverseTransformPoint (otherCorner2);

    float width = Vector3.Distance (localCorner1, localOtherCorner1);
    float height = Vector3.Distance (localCorner1, localOtherCorner2);

    measurementManager.updateCutoutsArea (width, height);

    cutoutMesh.SetVertices (
      new List<Vector3> () {
        localCorner1,
        localOtherCorner1,
        localCorner2,
        localOtherCorner2
      });
    cutoutMesh.triangles = new int[] { 0, 1, 2, 0, 2, 3, 2, 1, 0, 3, 2, 0};
    cutoutMesh.RecalculateBounds ();
  }
}