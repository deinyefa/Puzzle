using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class ToggleSprite : MonoBehaviour {

	private Image image;

	public Sprite sound;
	public Sprite noSound;


	void Awake () {
		image = GetComponent<Image> ();
	}

	void Start () {
		if (MusicPlayer.instance.music.isPlaying && image.sprite == noSound) {
			image.sprite = sound;
		} else if (!MusicPlayer.instance.music.isPlaying && image.sprite == sound) {
			image.sprite = noSound;
		}
	}
	
	public void ToggleSoundSetting () {
		
		if (MusicPlayer.instance.music.isPlaying) 
		{
			if (image.sprite == sound) {
				MusicPlayer.instance.music.Pause ();
				image.sprite = noSound;
			}
			else if (image.sprite == noSound) {
				image.sprite = sound;
			}
		}
		else if (!MusicPlayer.instance.music.isPlaying)
		{
			if (image.sprite == noSound) {
				MusicPlayer.instance.music.UnPause ();
				image.sprite = sound;
			}
			else if (image.sprite == sound) {
				image.sprite = noSound;
			}
		}
		
	}
}
