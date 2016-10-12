using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class SelectPuzzleController : MonoBehaviour {

	public void SelectPuzzle () {
		string[] name = UnityEngine.EventSystems.EventSystem.current.currentSelectedGameObject.name.Split ();
		int index = int.Parse (name [1]);

		if (GameManager.instance != null) {
			GameManager.instance.SetPuzzleIndex (index);
		}

		SceneManager.LoadScene ("Game");
	}

	public void LoadMainMenuScene () {
		SceneManager.LoadScene ("MainMenu"); 
	}
}
