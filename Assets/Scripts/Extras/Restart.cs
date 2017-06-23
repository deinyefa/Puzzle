﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Restart : MonoBehaviour {

	public void LoadNewScene () {
		SceneManager.LoadScene ("MainMenu");

		if (!MusicPlayer.instance.music.isPlaying)
			MusicPlayer.instance.music.Play ();
	}
}
