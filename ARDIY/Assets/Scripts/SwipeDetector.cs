using UnityEngine;
using UnityEngine.UI;

public class SwipeDetector : MonoBehaviour
{
    private Vector2 fingerDown;
    private Vector2 fingerUp;
    public bool detectSwipeOnlyAfterRelease = false;
    public GameObject Panel_Instructions;
    private Animator instructionsAnimator;
    private bool instructionsShow = false;
    public GameObject indicator;

    public float SWIPE_THRESHOLD = 20f;

    private void Start()
    {
        instructionsAnimator = Panel_Instructions.GetComponent<Animator>();
        instructionsAnimator.enabled = false;
    }

    // Update is called once per frame
    void Update()
    {

        foreach (Touch touch in Input.touches)
        {
            if (touch.phase == TouchPhase.Began)
            {
                fingerUp = touch.position;
                fingerDown = touch.position;
            }

            //Detects Swipe while finger is still moving
            if (touch.phase == TouchPhase.Moved)
            {
                if (!detectSwipeOnlyAfterRelease)
                {
                    fingerDown = touch.position;
                    checkSwipe();
                }
            }

            //Detects swipe after finger is released
            if (touch.phase == TouchPhase.Ended)
            {
                fingerDown = touch.position;
                checkSwipe();
            }
        }
	}

    void checkSwipe()
    {
		
        //Check if Vertical swipe
        if (verticalMove() > SWIPE_THRESHOLD && verticalMove() > horizontalValMove())
        {
            //Debug.Log("Vertical");
            if (fingerDown.y - fingerUp.y > 0)//up swipe
            {
                OnSwipeUp();
            }
            else if (fingerDown.y - fingerUp.y < 0)//Down swipe
            {
                OnSwipeDown();
            }
            fingerUp = fingerDown;
        }

        //Check if Horizontal swipe
        else if (horizontalValMove() > SWIPE_THRESHOLD && horizontalValMove() > verticalMove())
        {
            //Debug.Log("Horizontal");
            if (instructionsShow && fingerDown.x - fingerUp.x > 0)//Right swipe at correct time
            {
                OnSwipeRight();
            }
            else if (!instructionsShow && fingerDown.x - fingerUp.x < 0)//Left swipe at correct time
            {
                OnSwipeLeft();
            } else
            {
                return;
            }
            fingerUp = fingerDown;
        }

        //No Movement at-all
        else
        {
            //Debug.Log("No Swipe!");
        }
    }

    float verticalMove()
    {
        return Mathf.Abs(fingerDown.y - fingerUp.y);
    }

    float horizontalValMove()
    {
        return Mathf.Abs(fingerDown.x - fingerUp.x);
    }

    //////////////////////////////////CALLBACK FUNCTIONS/////////////////////////////
    void OnSwipeUp()
    {
        showPanel();
    indicator.GetComponent<RectTransform> ().rotation = Quaternion.Euler(new Vector3 (0, 0, 0));
        Debug.Log("Swipe UP");
    }

    void OnSwipeDown()
    {
        hidePanel();
        indicator.GetComponent<RectTransform> ().rotation = Quaternion.Euler(new Vector3 (0, 0, 180));
        Debug.Log("Swipe Down");
    }

    void OnSwipeLeft()
    {
        //showPanel();
        Debug.Log("Swipe Left");
    }

    void OnSwipeRight()
    {
        //hidePanel();
        Debug.Log("Swipe Right");
    }

    private void showPanel()
    {
        instructionsAnimator.enabled = true;
        instructionsAnimator.Play("InstructionsSlideIn");
        instructionsShow = true;
        //Panel_Instructions.gameObject.SetActive(true);
    }

    private void hidePanel()
    {
        instructionsAnimator.Play("InstructionsSlideOut");
        instructionsShow = false;
        //Panel_Instructions.gameObject.SetActive(false);
    }
}
