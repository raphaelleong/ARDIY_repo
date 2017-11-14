using System;

public class PaintType
{
	private static readonly int totalPaintTypes = 4; 
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

	private void initialisePaintPerSqM() {
		instance.paintPerSqM[0] = 0.8;
		instance.paintPerSqM[1] = 2;
		instance.paintPerSqM[2] = 0.5;
		instance.paintPerSqM[3] = 1.2;
	}

	private void initialisePaintNames() {
		instance.paintNames[0] = "Oil Based";
		instance.paintNames[1] = "Emulsion";
		instance.paintNames[2] = "Gloss";
		instance.paintNames[3] = "Something Else";
	}
}