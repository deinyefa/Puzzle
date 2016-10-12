using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class MainMenuController : MonoBehaviour {

	public void LoadSelectPuzzleScene () {
		SceneManager.LoadScene ("SelectPuzzle");
	}
}
