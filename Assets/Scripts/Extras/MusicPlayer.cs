using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MusicPlayer : MonoBehaviour {

	public static MusicPlayer instance = null;

	[HideInInspector]
	public AudioSource music;

	private AudioClip backgroundMusic;

	void Awake () {

		backgroundMusic = Resources.Load ("Sounds/background") as AudioClip;

		if (instance != null) {
			Destroy (this.gameObject);
			print ("Duplicate music player self-destructing"); 
		} else {
			instance = this;
			GameObject.DontDestroyOnLoad (gameObject);
			music = GetComponent<AudioSource> ();
			music.clip = backgroundMusic;
			music.loop = true;
			music.Play ();
		}
	}
}
