using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CutoutMesh : MonoBehaviour {

  Mesh mesh;

  public GameObject cutoutPrefab;

	// Use this for initialization
	void Start () {
    mesh = GetComponent<MeshFilter> ().mesh;
	}
	/*
  public void Cutout (Vector3[] cutoutVertices) {
    /* to simulate what would happen in the real program */
    /*
    Vector3[] temp_vertices = mesh.vertices;
    Vector3 temp = temp_vertices [1];
    temp_vertices [1] = temp_vertices [2];
    temp_vertices [2] = temp;
    mesh.vertices = temp_vertices;
    
    Vector3[] vertices = mesh.vertices;
    int closestPointIdx = getClosestPointIdx (cutoutVertices, vertices [0]);
    Vector3[] newVertices = new Vector3[8];
    int[] newTriangles = new int[8 * 3];
    for (int i = 0; i < 4; i++) {
      newVertices [i] = vertices [i];
    }
    for (int i = 0; i < 4; i++) {
      newVertices[4 + i] = transform.InverseTransformPoint(cutoutVertices[(closestPointIdx + i) % 4]);
      //if (i == 0) {
        newTriangles [i * 6] = i;
        newTriangles [i * 6 + 2] = (i + 1) % 4;
        newTriangles [i * 6 + 1] = 4 + ((closestPointIdx + i) % 4);

        newTriangles [i * 6 + 3] = i;
        newTriangles [i * 6 + 4] = 4 + ((closestPointIdx + i - 1) % 4);
        newTriangles [i * 6 + 5] = 4 + ((closestPointIdx + i) % 4);
      //}
    }
    mesh.vertices = newVertices;
    mesh.triangles = newTriangles;

    mesh.RecalculateNormals();
  }
  */
  public void Cutout (Vector3 corner1, Vector3 corner2) {
  
    Vector3 otherCorner1 = new Vector3 (corner1.x, corner2.y, corner1.z);
    Vector3 otherCorner2 = new Vector3 (corner2.x, corner1.y, corner2.z);

    GameObject cutout = Instantiate (cutoutPrefab, this.transform);
    float width = Vector3.Distance(corner1, otherCorner2);
    float height = Vector3.Distance(corner1, otherCorner1);
    cutout.transform.localScale = new Vector3 (width, height, 1);
    cutout.transform.position = corner1 + (corner2 - corner1) / 2;
  }
  
  void CreateCube (Vector3 pos, Color col) {
    GameObject cube = GameObject.CreatePrimitive (PrimitiveType.Cube);
    cube.transform.position = pos;
    cube.transform.localScale = Vector3.one * 0.05f;
    cube.GetComponent<MeshRenderer> ().material.color = col;
  }

  // assumes points.length > 0
  int getClosestPointIdx (Vector3[] points, Vector3 target) {
    int closestPointIdx = 0;
    float leastDis = Mathf.Infinity;
    for (int i = 1; i < points.Length; i++) {
      float dis = Vector3.Distance (points [i], target);
      if (dis < leastDis) {
        closestPointIdx = i;
        leastDis = dis;
      }
    }
    return closestPointIdx;
  }
}
