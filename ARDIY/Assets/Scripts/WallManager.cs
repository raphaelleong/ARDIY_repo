using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WallManager : MonoBehaviour
{

  private Color currentColor;
  private List<Wall> walls;

  // Use this for initialization
  void Start ()
  {
    walls = new List<Wall> ();
  }
	
  // Update is called once per frame
  void Update ()
  {
    //walls = this.GetComponentsInChildren<Wall> ();
  }

  public void changeColor (Color color)
  {
    currentColor = color; 
    foreach (Wall w in walls) {
      w.changeColor (color);
    }
  }

  public void addChild (GameObject wall)
  {
    wall.transform.SetParent (this.transform);
    walls.Add (getWall (wall));
    wall.GetComponent<Wall> ().changeColor (currentColor);
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

  public static WallManager getWallManager ()
  {
    return GameObject.Find ("WallManager").GetComponent<WallManager> ();
  }

  public Vector3? removeLastWall ()
  {
    Wall lastWall = walls [walls.Count - 1];
    Vector3 point2 = lastWall.transform.position;


    walls.Remove (lastWall);
    Destroy (lastWall.gameObject);

    //remove the second last wall as well since walls are drawn twice 
    lastWall = walls [walls.Count - 1];
    Vector3 point1 = lastWall.transform.position;
    walls.Remove (lastWall);
    Destroy (lastWall.gameObject);

    if (walls.Count == 0) {
      destroyCube (point1);
      destroyCube (point2);

      return null;
    }

    destroyCube (point2);
    return walls [walls.Count - 1].transform.position;
  }

  private void destroyCube (Vector3 point) {
    float radius = 0.01f;
    // Get the cube sitting at our location
    Collider[] cubes = Physics.OverlapSphere (point, radius);
    foreach (Collider cube in cubes) {
      Destroy (cube.gameObject);
    }
  }

}
