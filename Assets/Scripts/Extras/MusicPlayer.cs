using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MusicPlayer : MonoBehaviour {

	public static MusicPlayer instance = null;

	private AudioSource music;

	public AudioClip backgroundMusic;
	public AudioClip pieceMoved;

	void Awake () {
		if (instance != null) {
			Destroy (gameObject);
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
