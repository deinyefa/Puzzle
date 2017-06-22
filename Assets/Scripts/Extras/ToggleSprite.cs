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
	
	public void ToggleSoundSetting () {
		if (SceneManager.GetActiveScene ().name != "MainMenu")
			MusicPlayer.instance.ToggleSound ();
		if (image.sprite == sound)
			image.sprite = noSound;
		else if (image.sprite == noSound)
			image.sprite = sound;
	}
}
