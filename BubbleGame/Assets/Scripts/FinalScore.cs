using UnityEngine;
using System.Collections;

public class FinalScore : MonoBehaviour {
	private int score;
	public GUIText finalScore;
	
	// Update is called once per frame
	void Update () {
		score = PlayerPrefs.GetInt ("score");
		finalScore.text = "Your Score: " + score;
	}
}
