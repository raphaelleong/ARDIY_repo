using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InstructionPicker : MonoBehaviour {

	private int pickedInstr;
	public GameObject instrDropdown;
  private List<string[]> allInstr = new List<string[]>();


  public GameObject contentObject;
  public GameObject instructionObject;
  public GameObject[] instructionSets = new GameObject[5];


	// Use this for initialization
	void Start () {

    Debug.Log ("Start");
    pickedInstr = 0;

		initialiseWallInstr (); //        0
		initialiseDoorInstr (); //        1
		initialiseDoorFrameInstr (); //   2
		initialiseWindowFrameInstr (); // 3
		initialiseCeilingInstr (); //     4

    int count = 0;
    foreach (string[] ss in allInstr) {
      foreach (string instr in ss) {
        GameObject newInstr = Instantiate(instructionObject, instructionSets[count].transform);
        Text text = newInstr.transform.GetChild(0).GetComponent<Text>();
        text.text = instr;
        newInstr.transform.localScale = Vector3.one;
      }
      if (count != pickedInstr) {
        instructionSets[count].SetActive(false);
        //newInstr.transform.SetParent(contentObject.transform);
      }
      count++;
    }

		this.GetComponent<CanvasScaler>().referenceResolution = new Vector2(1335,750);

	}
	
	// Update is called once per frame
	void Update () {
		
	}

	private void initialiseWallInstr() {
		string[] instructions = new string[14];
		instructions [0] = "If the adjacent walls/surfaces are not being painted, place masking tape along the touching corner so as not to get paint on these walls.";
		instructions [1] = "If there is a skirting board at the bottom of the wall, place masking tape on the edge connecting the wall. Do the same for the ceiling connection.";
		instructions [2] = "If the wall contains a window frame, a door frame or a window bay that is not being painted, cover the surface that connects to this wall using a strip of masking tape.";
		instructions [3] = "Begin by painting the furthest edge from your largest natural light source. Place down your carpet cover to ensure that no paint is spilled onto the flooring.";
		instructions [4] = "Start painting from the edge by using a small brush to paint a strip approximately 3 inches in width along the full height, from the connecting surface.";
		instructions [5] = "On the ceiling connection, use the same brush to paint a 3 inch band approximately 2 feet wide.";
		instructions [6] = "After this, use the roller to paint this 2 feet wide strip vertically down the wall (beginning from the top). Leave a gap of around 6 inches above the skirting.";
		instructions [7] = "Paint the gap that you have left from the roller using a larger brush that still provides accuracy.";
		instructions [8] = "Repeat the ceiling lining, rolling and gap-filling steps for the rest of the wall until you are within 6 inches of the edge that is closest to the natural light source. Remember to move the floor protection along!";
		instructions [9] = "For the final strip, use a larger brush to complete the wall painting.";
		instructions [10] = "Leave the masking tape in place and allow to dry according to the paint manufacturer’s instructions, before repeating the painting process at least once more. The process may need to be repeated a third time if the previous colour of the wall can be seen.";
		instructions [11] = "Repeat this process for all the walls that are to be painted the same colour.";
		instructions [12] = "Wash your equipment thoroughly using white spirit to remove any tough paint.";
		instructions [13] = "If a topcoat is required, leave to dry again before carrying out the same painting process. Wash the equipment once more.";
		allInstr.Add (instructions);
	}

	private void initialiseDoorInstr() {
		string[] instructions = new string[13];
		instructions [0] = "Set up a horizontal space to place the door - either on the floor or across two workbenches.";
		instructions [1] = "Remove the door by wedging underneath it first whilst open. You may need an assistant to hold the door upright whilst you remove the screws from the door frame side of the hinges, beginning from the bottom hinge.";
		instructions [2] = "Place the door onto the horizontal space you have set up.";
		instructions [3] = "Remove any handles and locks that exist on the door’s surface, to ensure that you have a clean surface.";
		instructions [4] = "On both sides of the door, use sandpaper to gently smooth the current surface down.";
		instructions [5] = "If the existing paint is oil-based, or a darker colour than that you are painting, apply at least one coat of primer before adding your chosen paint. Follow the next set of instructions on how to prime & paint.";
		instructions [6] = "To begin, paint the recessed panels using a paintbrush small enough to allow you to cover the smaller crevices in the panels. Paint with the grain of the wood in a clockwise direction around any corners.";
		instructions [7] = "Next, use a paint roller to paint the rest of the door, going with the grain of the wood when you can.";
		instructions [8] = "Wait for this coat of paint to dry according to the manufacturer’s instructions. Then, if a second coat is needed, use fine sandpaper to lightly sand the first coat. Clean the dust from the door using a soft brush or vacuum.";
		instructions [9] = "Follow the previous steps to apply the second coat of paint, as well as any more that are deemed necessary.";
		instructions [10] = "Clean your equipment, using white spirit to remove any tough paint from the brushes and rollers.";
		instructions [11] = "Ensure you put the door correctly back on the frame using the existing hinges only if they are still of adequate quality. Follow the next step once you’ve painted the door frame, if needed.";
		instructions [12] = "Wedge underneath the door to lift it up correctly, and screw the hinges from the top down. Be sure that the hinges are as tight as possible on the door frame.";
		allInstr.Add (instructions);
	}

	private void initialiseDoorFrameInstr() {
		string[] instructions = new string[10];
		instructions [0] = "Remove the door by wedging underneath it first whilst open. You may need an assistant to hold the door upright whilst you remove the screws from the door frame side of the hinges, beginning from the bottom hinge.";
		instructions [1] = "Place a protective sheet in the area below the window, to stop marking the flooring whilst painting. If necessary, place masking tape on the flooring adjacent to the bottom of the door frame.";
		instructions [2] = "Once the surrounding walls have dried sufficiently, place masking tape adjacent to the door frame on the walls. If you are only painting one side of the frame, place the masking tape at a point that you want to stop the new colour.";
		instructions [3] = "Follow the next 3 steps from the top of the frame to the bottom - carry out each step at each of your chosen height strips before moving down.";
		instructions [4] = "Use a small paintbrush (around 2cm) to begin painting on the inside of the door frame, ensuring that your brush’s point is small enough to cover the interior corners of the frame. Also cover the angled face pointing slightly outward towards the room. ";
		instructions [5] = "Next, using a wide paintbrush or paint roller, cover the part of the frame that faces into the room. ";
		instructions [6] = "Finish by taking a small paintbrush (around 4cm wide) and painting the parts of the frame adjacent to the walls.";
		instructions [7] = "Once the paint has dried thoroughly, lightly sand and brush down before applying a second coat of paint if necessary.";
		instructions [8] = "Peel off the masking tape surrounding the door frame as the paint dries.";
		instructions [9] = "Once the paint is completely dry, you can reattach the door: Wedge underneath the door to lift it up correctly, and screw the hinges from the top down. Be sure that the hinges are as tight as possible on the door frame.";
		allInstr.Add (instructions);
	}

	private void initialiseWindowFrameInstr() {
		string[] instructions = new string[13];
		instructions [0] = "Place a protective sheet in the area below the window, to stop marking the flooring whilst painting. If possible, also cover the wall below the frame to stop paint dripping onto here.";
		instructions [1] = "Remove any catches and stays from the window frame - the parts that help it stay open.";
		instructions [2] = "Make a temporary stay (to hold the window open whilst you paint) using anything you deem suitable. A bent metal hanger is always useful.";
		instructions [3] = "Lightly sand over the old paintwork on the frame using a medium sandpaper.";
		instructions [4] = "Brush away any debris made from sanding. Pay attention to corners to ensure these are clean.";
		instructions [5] = "Place some masking tape on the edge of each glass pane, adjacent to the parts of the frame you are painting. There should be approximately a 2mm gap between frame and tape, to allow for a seal against water.";
		instructions [6] = "Place tape on the adjacent walls too, as close as possible, including the underside of the window frame if this is being painted (if you are not painting it, ensure you place tape on this adjacent to the window frame.";
		instructions [7] = "If you are painting a new window, or over boldly coloured paintwork, follow the instructions to paint a primer first, then use the top coat of your choice. If you don’t use a primer, paint 2 top coats. ";
		instructions [8] = "Painting in the direction of the grain of the wood in long strokes, start at the middle of the pane (if there are bars in the centre) from the top.";
		instructions [9] = "Paint close to the glass using a small brush (around 2cm), being sure that the brush is not overloaded with paint (otherwise it will run).";
		instructions [10] = "Paint the window sill last, working from the wall outwards. Paint the underneath in the final step, joining the upper and lower surfaces at the front corner.";
		instructions [11] = "Remove the masking tape as the paint dries. Follow the same steps for the outside frame, working when there is little to no wind (drying paint can lose particles in the air when windy).";
		instructions [12] = "Remember to clean your tools, following the instructions at the end of wall painting.";
		allInstr.Add (instructions);
	}

	private void initialiseCeilingInstr() {
		string[] instructions = new string[1];
		instructions [0] = "Ceiling; start!";
		instructions [0] = "Ceiling; start!";
		instructions [0] = "Ceiling; start!";
		instructions [0] = "Ceiling; start!";
		instructions [0] = "Ceiling; start!";
		instructions [0] = "Ceiling; start!";
		instructions [0] = "Ceiling; start!";
		instructions [0] = "Ceiling; start!";
		allInstr.Add (instructions);
	}


	public void changedDropdown(int newVal) {

	    instructionSets [pickedInstr].SetActive(false);

	    instructionSets [newVal].SetActive (true);

	    pickedInstr = newVal;

	}
}
