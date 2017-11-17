using System;
using UnityEngine;

public class PaintType
{
	private static readonly int totalPaintTypes = 3; 
	private static PaintType instance;

	private int paintTypeVal; //value representing the correct indexes
	private string[] paintNames;
	private double[] paintPerSqM;

	private PaintType() {
		paintNames = new string[totalPaintTypes];
		paintPerSqM = new double[totalPaintTypes];
		initialisePaintPerSqM();
		initialisePaintNames();
	}

	public static PaintType Instance {
		get {
			if (instance == null) {
				instance = new PaintType ();
			}

			return instance;
		}
	}

	public void setPaintType(int paint) {
		instance.paintTypeVal = paint;
	}

	public string currentPaintStr() {
		return instance.paintNames[paintTypeVal];
	}

	public double getPaintPerSqM() {
		return instance.paintPerSqM[paintTypeVal];
	}

  /*The following numbers are from DIY book
   * litre of paint needed to cover 1 sqm*/
	private void initialisePaintPerSqM() {
		paintPerSqM[0] = 0.0714;
		paintPerSqM[1] = 0.1000;
		paintPerSqM[2] = 0.0833;
	}

	private void initialisePaintNames() {
		paintNames[0] = "Oil Based";
		paintNames[1] = "Emulsion";
		paintNames[2] = "Non-Drip Gloss";
	}
    
}