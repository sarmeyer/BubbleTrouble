using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class BubbleBehavior : MonoBehaviour {
	private bool mouseEntered;

	void Start (){
	}
	void OnMouseEnter(){
		mouseEntered = true;
	}

	void OnMouseExit(){
		mouseEntered = false;
	}
	void Update() {
		if (mouseEntered && Input.GetMouseButtonDown (0)) {
			this.gameObject.SetActive (false);
		}
	}
}