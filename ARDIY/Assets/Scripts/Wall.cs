using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class Wall : MonoBehaviour {

	MeshRenderer renderer; 
	MeshFilter meshFilter;
//	Mesh mesh;
	Material material;
	//public Text debugText;
	// Use this for initialization
	void Start () {
		renderer = this.GetComponent<MeshRenderer> ();
		material = renderer.material;
		Debug.Log ("material" + material.Equals (null));
    meshFilter = this.GetComponent (typeof(MeshFilter)) as MeshFilter;
//    mesh = meshFilter.mesh;
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void changeColor(Color color) {
		//Debug.Log (color);
		renderer = this.GetComponent<MeshRenderer> ();
		material = renderer.material;
		Debug.Log("color == " + color == null);
		material.color = color; 
		//debugText.text = "color: " + color.ToString ();
		//material.SetColor ("_Color", color);

		//renderer.material = material; 
		//mesh.RecalculateBounds ();
	}

  public void drawWall(Vector3 point1, Vector3 point2, float currentWallHeight) {
    this.transform.position = point1;
	CreateWallMesh (point2 - point1, currentWallHeight);
  }

  public void setHeight(float height) {
	MeshFilter meshFilter = this.GetComponent (typeof(MeshFilter)) as MeshFilter;
	Mesh wallMesh = meshFilter.mesh;
    Vector3[] vertices = wallMesh.vertices;
	CreateWallMesh (vertices [1], height);
  }
		
	void CreateWallMesh(Vector3 point, float height) {
		MeshFilter meshFilter = GetComponent (typeof(MeshFilter)) as MeshFilter;
		Mesh wallMesh = meshFilter.mesh;
		wallMesh.SetVertices (
			new List<Vector3> () {
				Vector3.zero,
				point,
				point + Vector3.up * height,
				Vector3.up * height
			});
		wallMesh.triangles = new int[] { 0, 1, 2, 0, 2, 3, 2, 1, 0, 3, 2, 0};
		wallMesh.RecalculateBounds ();
    MeshCollider meshCollider = GetComponent<MeshCollider> ();
    meshCollider.sharedMesh = wallMesh;
	}
}
