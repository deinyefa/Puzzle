using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Timer : MonoBehaviour {

	private Text timeText;

	private float seconds;
	private int minutes;

	void Awake () {
		timeText = GetComponent<Text> ();
	}

	void Update () {
		Clock ();
	}

	void Clock () {
		seconds += Time.deltaTime;
		timeText.text = minutes + "m:" + Mathf.Round(seconds * 100f) / 100f + "s";

		if (seconds >= 60.0f) {
			minutes++;
			seconds = 0;
		}
	}
}
