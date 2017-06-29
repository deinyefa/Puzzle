using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WinScript : MonoBehaviour {

	public GameObject panel;

	public Timer timerScript;

	void Awake () {
		timerScript = GameObject.FindObjectOfType<Timer> ();
		if (panel.activeInHierarchy)
			panel.gameObject.SetActive (false);
	}

	public void PuzzleComplete () {
		panel.SetActive (true);
		timerScript.scoreText.text = timerScript.FinalScore ().ToString ();
	}
}
