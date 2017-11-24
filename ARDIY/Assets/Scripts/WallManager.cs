using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;

public class WallManager : MonoBehaviour
{

  private Color currentColor;
  private List<Wall> walls;
	private List<Vector3> disjointOrigins;

  // Use this for initialization
  void Start ()
  {
    walls = new List<Wall> ();
		disjointOrigins = new List<Vector3> ();
	

  }
	
  // Update is called once per frame
  void Update ()
  {
    //walls = this.GetComponentsInChildren<Wall> ();
  }

  public void changeColor (Color color)
  {
    currentColor = color; 
    if (walls != null) {
      foreach (Wall w in walls) {
        w.changeColor (color);
      }
    }
  }

  public void addChild (GameObject wall)
  {
    wall.transform.SetParent (this.transform);
    walls.Add (getWall (wall));
    getWall(wall).changeColor (currentColor);
  }

  public void setWallHeights (float height)
  {
    foreach (Wall w in walls) {
      w.setHeight (height);
    }
  }

  public static Wall getWall (GameObject wall)
  {
    return wall.GetComponent<Wall> ();
  }

  public Vector3? removeLastWall ()
  {
    Wall lastWall = walls [walls.Count - 1];
    Vector3 lastCoordinate = lastWall.transform.position;
    Vector3 currentCoordinate = lastCoordinate + lastWall.GetComponent<MeshFilter> ().mesh.vertices[1];

    walls.Remove (lastWall);
    Destroy (lastWall.gameObject);

	Vector3 mostRecentOrigin = disjointOrigins.Last();

	if (lastCoordinate.Equals (mostRecentOrigin)) {

	  destroyCube (lastCoordinate);
      destroyCube (currentCoordinate);
		
	  disjointOrigins.Remove (mostRecentOrigin);

      return null;
    }

	if (!currentCoordinate.Equals (mostRecentOrigin)) {
		destroyCube (currentCoordinate);
	}
    
    return lastCoordinate;
  }

  private void destroyCube (Vector3 point) {
    float radius = 0.01f;
    // Get the cube sitting at our location
    Collider[] cubes = Physics.OverlapSphere (point, radius);
    foreach (Collider cube in cubes) {
      Destroy (cube.gameObject);
    }
  }

  public void addOrigin(Vector3 newOrigin) {
	disjointOrigins.Add (newOrigin);
  }
}