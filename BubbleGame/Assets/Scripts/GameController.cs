using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class GameController : MonoBehaviour {

	public GUIText scoreText;
	public int score;

	// Use this for initialization
	void Start () {
		score = 0;
		UpdateScore ();
	}
	
	public void AddScore () {
		score += 1;
		UpdateScore ();
	}

	void UpdateScore () {
		scoreText.text = "Score: " + score;
		PlayerPrefs.SetInt ("score", score);
	}
}
