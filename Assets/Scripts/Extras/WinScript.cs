using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WinScript : MonoBehaviour {

	public GameObject panel;

	private Timer timerScript;

	void Awake () {
		timerScript = GameObject.FindObjectOfType<Timer> ();
		if (panel.activeInHierarchy)
			panel.gameObject.SetActive (false);
	}

	public void PuzzleComplete () {
		if (!panel.activeInHierarchy) {
			panel.SetActive (true);
		}
		timerScript.scoreText.text = timerScript.FinalScore ().ToString ();
	}
}
