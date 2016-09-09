using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameTimer : MonoBehaviour {
	public float timeRemaining = 5;
	public Text TimerText;

	GameObject[] timeoutObjects;
	GameObject[] timeoutObjects2;
	GameObject[] hideOnTimeout;

	void Start () {
		TimerText = GetComponent<Text> ();
		timeoutObjects = GameObject.FindGameObjectsWithTag ("ShowOnTimeout");
		timeoutObjects2 = GameObject.FindGameObjectsWithTag ("ShowOnPauseAndTimeout");
		hideOnTimeout = GameObject.FindGameObjectsWithTag ("HideOnPause");
		hideTimeout ();
	}

	void Update () {
		timeRemaining -= Time.deltaTime;
		TimerText.text = timeRemaining.ToString (":00");
		if (timeRemaining <= 0) {
//			SceneManager.LoadScene("TimeOut");
			Time.timeScale = 0;
			timeRemaining = 0;
			showTimeout ();
		}
	}

	//hides objects with ShowOnTimeout tag
	public void hideTimeout() {
		foreach (GameObject g in timeoutObjects) {
			g.SetActive (false);
		}
	}

	//shows objects with ShowOnTimeout tag
	public void showTimeout () {
		foreach (GameObject g in timeoutObjects) {
			g.SetActive (true);
		}
		foreach (GameObject g in timeoutObjects2) {
			g.SetActive (true);
		}
		foreach (GameObject g in hideOnTimeout) {
			g.SetActive (false);
		}
	}
}
