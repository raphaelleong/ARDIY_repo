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

    MeshFilter meshFilter = this.GetComponent (typeof(MeshFilter)) as MeshFilter;
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

  public void setHeight(float height) {
    MeshFilter meshFilter = this.GetComponent (typeof(MeshFilter)) as MeshFilter;
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
