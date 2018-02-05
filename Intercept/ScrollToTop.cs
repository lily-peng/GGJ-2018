using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScrollToTop : MonoBehaviour {

	// my unity Scrollbars name inside unity is Scrollbar
	// variable for assigning GameObjects to
	//private GameObject scrollViewObject;
	// create variable to hold Script
	//private Scrollbar ScrollbarScript;

	// my unity Scrollbars name inside unity is Scrollbar
	// variable for assigning GameObjects to
	private GameObject thisGameObject;
	// create variable to hold Script
	private Scrollbar ScrollbarScript;

	/* Use this for initialization
	void Start () {
		Canvas.ForceUpdateCanvases();
		scrollViewObject.GetComponent().verticalNormalizedPosition = 1f;
		Canvas.ForceUpdateCanvases();
	}*/

	void Start() {
		print ("Starting ScrollToTop");
		// call function to find game object and script attached to it ( object name in unity, script name attached to object)
		getGameObject("Scrollbar", "Scrollbar");
		// call to set Scrollbar to top -- will change depending on scroll option (bottom to top or top to bottom) -- range 0.0 to 1.0
		if (ScrollbarScript != null) {
			print ("Scrollbar object found.");
			ScrollbarScript.value = 1f;
		} else {
			print ("no Scrollbar object found ");
		}
	}

	private void getGameObject(string s, string objectClass) {
		// find GameObject
		thisGameObject = GameObject.Find(s);
		if (thisGameObject != null) {
			// conditional for items with different scripts -- could use switch statement
			if (objectClass == "Scrollbar") {
				// find component Scrollbar (Script) of GameObject Scrollbar (unity GameObject)
				ScrollbarScript = thisGameObject.GetComponent<Scrollbar> ();
			}
		}
		// returns GameObject -- this is not needed for this example, but might be useful
		//return thisGameObject;

	} 


}
