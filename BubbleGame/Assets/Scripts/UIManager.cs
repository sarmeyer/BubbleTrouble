using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class UIManager : MonoBehaviour {
	GameObject[] pauseObjects;
	GameObject[] pauseObjects2;
	GameObject[] playObjects;

	// Use this for initialization
	void Start () {
		Time.timeScale = 1;
		pauseObjects = GameObject.FindGameObjectsWithTag ("ShowOnPause");
		pauseObjects2 = GameObject.FindGameObjectsWithTag ("ShowOnPauseAndTimeout");
		playObjects = GameObject.FindGameObjectsWithTag ("HideOnPause");
		hidePaused ();
	}
	
	// Update is called once per frame
	void Update () {
	}

	public void pause() {
		Time.timeScale = 0;
		showPaused ();
	}

	public void resume() {
		Time.timeScale = 1;
		hidePaused ();
	}

	//shows objects with ShowOnPause
	public void showPaused() {
		foreach (GameObject g in pauseObjects) {
			g.SetActive (true);
		}
		foreach (GameObject g in pauseObjects2) {
			g.SetActive (true);
		}
		foreach (GameObject g in playObjects) {
			g.SetActive (false);
		}
	}

	//hides objects with ShowOnPause tag
	public void hidePaused() {
		foreach (GameObject g in pauseObjects) {
			g.SetActive (false);
		}
		foreach (GameObject g in pauseObjects2) {
			g.SetActive (false);
		}
		foreach (GameObject g in playObjects) {
			g.SetActive (true);
		}
	}

	//loads inputted level
	public void LoadLevel(string level) {
		SceneManager.LoadScene (level);
	}
}
