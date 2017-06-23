using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Timer : MonoBehaviour {

	private Text timeText;
	[HideInInspector]
	public Text scoreText;

	private float seconds;
	private int minutes;
	private int score;

	void Awake () {
		timeText = GetComponent<Text> ();
	}

	void Update () {
		Clock ();
	}

	void Clock () {
		seconds += Time.deltaTime;
		timeText.text = minutes + ":" + Mathf.Round(seconds * 100f) / 100f;

		if (seconds >= 60.0f) {
			minutes++;
			seconds = 0;
		}
	}

	public int FinalScore () {
		if (seconds >= 60) 
			score = (minutes + 60) * 10;
		 else 
			score = (int)seconds * 10;
		return score;
	}
}
