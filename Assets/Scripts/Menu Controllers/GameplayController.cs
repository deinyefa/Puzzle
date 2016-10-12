using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class GameplayController : MonoBehaviour {

	public void LoadSelectPuzzleScene () {
		SceneManager.LoadScene ("SelectPuzzle");
	}
}
