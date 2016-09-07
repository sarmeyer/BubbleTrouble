using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class control : MonoBehaviour {
	public void LoadMainMenu (string scene) {
		SceneManager.LoadScene(scene);
	}
}
