using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WallManager : MonoBehaviour {

	private LinkedList<GameObject> wallsCreated = new LinkedList<GameObject>();
	private Color currentColor;
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
		wallsCreated.AddFirst(wall);
		addChild(wall);
	}

	public void removeWall() {
		GameObject prevWall = wallsCreated.First;
		//prevWall.transform.DetachFromParent();
		Destroy(prevWall);
		wallsCreated.RemoveFirst();
	}

	public void addChild(GameObject wall) {
		wall.transform.SetParent (this.transform);
		wall.GetComponent<Wall>().changeColor (currentColor);
	}

	public void adjustWallHeight(float height) {
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
