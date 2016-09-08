using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class BubbleBehavior : MonoBehaviour {
	private bool mouseEntered;

	private GameController gameController;

	void Start (){
		GameObject gameControllerObject = GameObject.FindWithTag ("GameController");
		if (gameControllerObject != null) {
			gameController = gameControllerObject.GetComponent <GameController> ();
		}
		if (gameController == null) {
			Debug.Log ("Cannot find 'GameController' script");
		}
	}
	void OnMouseEnter(){
		mouseEntered = true;
	}

	void OnMouseExit(){
		mouseEntered = false;
	}
	void Update() {
		if (mouseEntered && Input.GetMouseButtonDown (0) && Time.timeScale == 1) {
			this.gameObject.SetActive (false);
			gameController.AddScore ();
		}
	}
}