using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WallManager : MonoBehaviour {

	private Color currentColor;
  private List<Wall> walls;

	// Use this for initialization
	void Start () {
    walls = new List<Wall> ();
	}
	
	// Update is called once per frame
	void Update () {
    //walls = this.GetComponentsInChildren<Wall> ();
	}

	public void changeColor(Color color) {
			currentColor = color; 
    Text t = GameObject.Find ("Text").GetComponent<Text> ();
    t.text = walls.Count.ToString ();

			foreach (Wall w in walls) {
			
				w.changeColor (color);
			}
	}

	public void addChild(GameObject wall) {
		wall.transform.SetParent (this.transform);
    walls.Add (getWall(wall));
		wall.GetComponent<Wall>().changeColor (currentColor);
	}
		
  public void setWallHeights(float height) {
    foreach (Wall w in walls) {
      w.setHeight (height);
    }
  }

  public static Wall getWall(GameObject wall) {
    return wall.GetComponent<Wall> ();
  }

  public static WallManager getWallManager() {
    return GameObject.Find ("WallManager").GetComponent<WallManager> ();
  }

  public void removeLastWall() {
    Text t = GameObject.Find ("Text").GetComponent<Text> ();

    Wall lastWall =  walls[walls.Count - 1];
    Vector3 point2 = lastWall.transform.position;
    t.text = point2.ToString ();

    float radius = 0.1f;
    // Get the cube sitting at our location
    Collider[] cubes = Physics.OverlapSphere (point2, radius);
    foreach (Collider cube in cubes) {
      t.text += cube.transform.position.ToString();
      Destroy (cube.gameObject);
    }

    walls.Remove (lastWall);
    Destroy (lastWall.gameObject);

    //remove the second last wall as well since walls are drawn twice 
    lastWall = walls[walls.Count - 1];
    walls.Remove (lastWall);
    Destroy (lastWall.gameObject);
  
  }

}
