using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelMusic : MonoBehaviour {

	[HideInInspector]
	public AudioSource audioSource;

	public AudioClip pieceMoved;

	void Awake () {
		audioSource = GetComponent<AudioSource> ();
	}

}
