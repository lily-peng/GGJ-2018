using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Scroll : MonoBehaviour {

	public ScrollRect myScrollRect;
	public Scrollbar newScrollBar;

	public void Start()
	{
		//Change the current vertical scroll position.
		myScrollRect.verticalNormalizedPosition = 1f;
	}


}
