using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameTimer : MonoBehaviour {
	public float timeRemaining = 5;
	public Text Timer;

	void Start () {
		Timer = GetComponent<Text> ();
	}
	void Update () {
		timeRemaining -= Time.deltaTime;
		Timer.text = timeRemaining.ToString ("f0");
		if (timeRemaining <= 0) {
			SceneManager.LoadScene("TimeOut");
			timeRemaining = 0;
		}
	}

}
