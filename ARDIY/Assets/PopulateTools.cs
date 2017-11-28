﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PopulateTools : MonoBehaviour {
  
  public GameObject toolText; // This is our prefab object that will be exposed in the inspector

  public int numberToCreate; // number of objects to create. Exposed in inspector

  void Start()
  {
    Populate();
  }

  void Update()
  {

  }

  void Populate()
  {
    GameObject newObj; // Create GameObject instance

    for (int i = 0; i < numberToCreate; i++)
    {
      // Create new instances of our prefab until we've created as many as we specified
      newObj = (GameObject)Instantiate(toolText, transform);
 
    }

  }
}

