using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WallManager : MonoBehaviour {

 public GameObject wallPrefab;
	private Color currentColor;
  private Wall[] walls;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
    walls = this.GetComponentsInChildren<Wall> ();
	}

	public void changeColor(Color color) {
			currentColor = color; 

			foreach (Wall w in walls) {
			
				w.changeColor (color);
			}
	}

	public void addChild(GameObject wall) {
		wall.transform.SetParent (this.transform);
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
    t.text = walls.Length.ToString();

    Wall lastWall = walls [walls.Length - 1];
    Vector3 point2 = lastWall.transform.position;

    float radius = 0.1f;
    // Get the cube sitting at our location
    Collider[] cubes = Physics.OverlapSphere (point2, radius);
    foreach (Collider cube in cubes) {
      Destroy (cube);
    }

    Destroy (lastWall.gameObject);
    Destroy (walls [walls.Length - 2].gameObject);
  }

}
