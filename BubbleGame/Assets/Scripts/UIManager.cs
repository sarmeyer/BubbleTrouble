using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class UIManager : MonoBehaviour {
	GameObject[] pauseObjects;
	GameObject[] playObjects;
	public bool paused = false;

	// Use this for initialization
	void Start () {
		Time.timeScale = 1;
		pauseObjects = GameObject.FindGameObjectsWithTag ("ShowOnPause");
		playObjects = GameObject.FindGameObjectsWithTag ("HideOnPause");
		hidePaused ();
	}
	
	// Update is called once per frame
	void Update () {
	}

	public void pause() {
		Time.timeScale = 0;
		paused = !paused;
		showPaused ();
	}

	public void resume() {
		Time.timeScale = 1;
		paused = !paused;
		hidePaused ();
	}

	//shows objects with ShowOnPause
	public void showPaused() {
		foreach (GameObject g in pauseObjects) {
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
		foreach (GameObject g in playObjects) {
			g.SetActive (true);
		}
	}

	//loads inputted level
	public void LoadLevel(string level) {
		SceneManager.LoadScene (level);
	}
}
