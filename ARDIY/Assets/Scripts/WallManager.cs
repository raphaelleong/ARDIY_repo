using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WallManager : MonoBehaviour {
	//TODO unsure of behaviour of DrawLine, probably needs modifying
	private DrawLine drawline;
	private Color currentColor;
	private int numOfWalls = 0;

	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void Update () {

	}

	public void changeColor(Color color) {
		currentColor = color;

		Wall[] walls = this.GetComponentsInChildren<Wall> ();
		Debug.Log ("1");
		foreach (Wall w in walls) {
		Debug.Log ("wall" + w == null);
			w.changeColor (color);
		}
		Debug.Log ("2");
	}

	public void addWall(GameObject wall) {
		wall.transform.SetParent (this.transform);
		wall.GetComponent<Wall>().changeColor (currentColor);	
		numOfWalls++;
	}

	public void removeWall() {
		Wall[] walls = this.GetComponentsInChildren<Wall> ();

		Wall prevWall = walls[numOfWalls - 1];
		Wall prevWall2 = walls[numOfWalls - 2];
		//prevWall.transform.DetachFromParent();
		Destroy(prevWall);
		Destroy (prevWall2);
		drawline.removeLastWallCoordinates();
		numOfWalls--;
	}

	public void adjustWallHeight(float height) {
		Wall[] walls = this.GetComponentsInChildren<Wall> ();

		foreach (Wall wall in walls) {
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
