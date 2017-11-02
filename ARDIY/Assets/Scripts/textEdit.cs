using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class textEdit : MonoBehaviour {

    public GameObject contentObject;
    public GameObject instructionObject;
  string[] instructions = new string[16];

	// Use this for initialization
	void Start () {
		initialiseWallInstr ();
        foreach (string instr in instructions)
        {
            GameObject newInstr = Instantiate(instructionObject, contentObject.transform.position, Quaternion.identity);
			newInstr.SetActive (true);
			newInstr.transform.SetParent(contentObject.transform);
			Text text = newInstr.transform.GetChild(0).GetComponent<Text>();
            text.text = instr;
      newInstr.transform.localScale = Vector3.one;
        }
    }

	void initialiseWallInstr() {
		instructions [0] = "Welcome; click next to start!";
		instructions [1] = "If the adjacent walls/surfaces are not being painted, place masking tape along the touching corner so as not to get paint on these walls.";
		instructions [2] = "If there is a skirting board at the bottom of the wall, place masking tape on the edge connecting the wall. Do the same for the ceiling connection.";
		instructions [3] = "If the wall contains a window frame, a door frame or a window bay that is not being painted, cover the surface that connects to this wall using a strip of masking tape.";
		instructions [4] = "Begin by painting the furthest edge from your largest natural light source. Place down your carpet cover to ensure that no paint is spilled onto the flooring.";
		instructions [5] = "Start painting from the edge by using a small brush to paint a strip approximately 3 inches in width along the full height, from the connecting surface.";
		instructions [6] = "On the ceiling connection, use the same brush to paint a 3 inch band approximately 2 feet wide.";
		instructions [7] = "After this, use the roller to paint this 2 feet wide strip vertically down the wall (beginning from the top). Leave a gap of around 6 inches above the skirting.";
		instructions [8] = "Paint the gap that you have left from the roller using a larger brush that still provides accuracy.";
		instructions [9] = "Repeat the ceiling lining, rolling and gap-filling steps for the rest of the wall until you are within 6 inches of the edge that is closest to the natural light source. Remember to move the floor protection along!";
		instructions [10] = "For the final strip, use a larger brush to complete the wall painting.";
		instructions [11] = "Leave the masking tape in place and allow to dry according to the paint manufacturer’s instructions, before repeating the painting process at least once more. The process may need to be repeated a third time if the previous colour of the wall can be seen.";
		instructions [12] = "Repeat this process for all the walls that are to be painted the same colour.";
		instructions [13] = "Wash your equipment thoroughly using white spirit to remove any tough paint.";
		instructions [14] = "If a topcoat is required, leave to dry again before carrying out the same painting process. Wash the equipment once more.";
		instructions [15] = "Remove the masking tape when done!";
	}


}
