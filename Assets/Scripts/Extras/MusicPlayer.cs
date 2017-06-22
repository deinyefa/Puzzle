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

	void Update() {
		music.clip = backgroundMusic;
		if (music.clip == backgroundMusic)
			music.loop = true;
		else {
			music.loop = false;
		}
	}

	//- toggles sound to go on and off
	public void ToggleSound () {
		if (music.isPlaying) {
			music.Pause ();
		} else if (!music.isPlaying){
			music.UnPause ();
		}
	}
}
