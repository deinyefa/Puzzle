using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class GameManager : MonoBehaviour {

	public static GameManager instance;

	private GameObject[] puzzlePieces;
	private Sprite[] puzzleImages;

	private PuzzlePiece[,] Matrix = new PuzzlePiece[GameVariables.MaxRows, GameVariables.MaxColumns];

	private Vector3 screenPositionToAnimate;
	private PuzzlePiece PieceToAnimate;
	private int toAnimateRow, toAnimateColumn;

	private float animSpeed = 10f;

	private int puzzleIndex;

	private GameState gameState;

	void Awake () {
		MakeSingleton ();
	}

	void Start () {
		puzzleIndex = -1;
	}
	
	void Update () {
		if (SceneManager.GetActiveScene ().name == "Game") {
			switch (gameState) {
			case GameState.Playing:
				CheckInput ();
				break;

			case GameState.Animating:
				AnimateMovement (PieceToAnimate, Time.deltaTime);
				CheckIfAnimationEnded ();
				break;

			case GameState.End:
				Debug.Log ("Game Over!");
				break;
			}
		}
	}

	void OnEnable () {
		SceneManager.sceneLoaded += CheckLevelName;
	}

	void OnDisable () {
		SceneManager.sceneLoaded -= CheckLevelName;
	}

	void CheckLevelName (Scene scene, LoadSceneMode mode) {
		if (SceneManager.GetActiveScene ().name == "Game") {
			if (puzzleIndex > 0) {
				LoadPuzzle ();
				GameStarted ();
			}
		}

		if (SceneManager.GetActiveScene ().name != "Game") {
			if (puzzleIndex != -1)
				puzzleIndex = -1;

			if (puzzlePieces != null)
				puzzlePieces = null;

			if (gameState != GameState.End)
				gameState = GameState.End;
		}
	}

	void GameStarted () {
		int index = Random.Range (0, GameVariables.MaxSize);
		puzzlePieces [index].SetActive (false);

		for (int row = 0; row < GameVariables.MaxRows; row++) {
			for (int column = 0; column < GameVariables.MaxColumns; column++) {

				if (puzzlePieces[row * GameVariables.MaxColumns + column].activeInHierarchy) {

					Vector3 point = GetScreenCoordinatesFromViewPort (row, column);
					puzzlePieces [row * GameVariables.MaxColumns + column].transform.position = point;

					Matrix [row, column] = new PuzzlePiece ();
					Matrix [row, column].GameObject = puzzlePieces [row * GameVariables.MaxColumns + column];
					Matrix [row, column].OriginalRow = row;
					Matrix [row, column].OriginalColumn = column;

				} else {
					Matrix [row, column] = null;
				}
			}
		}
		Shuffle ();
		gameState = GameState.Playing;
	}

	private void Shuffle () {
		for (int row = 0; row < GameVariables.MaxRows; row++) {
			for (int column = 0; column < GameVariables.MaxColumns; column++) {
				if (Matrix [row, column] == null)
					continue;

				int random_row = Random.Range (0, GameVariables.MaxRows);
				int random_column = Random.Range (0, GameVariables.MaxColumns);

				Swap (row, column, random_row, random_column);
			}
		}
	}

	private void Swap (int row, int column, int random_row, int random_column) {
		PuzzlePiece temp = Matrix [row, column];
		Matrix [row, column] = Matrix [random_row, random_column];
		Matrix [random_row, random_column] = temp;

		if (Matrix [row, column] != null) {
			Matrix [row, column].GameObject.transform.position = GetScreenCoordinatesFromViewPort (row, column);

			Matrix [row, column].CurrentRow = row;
			Matrix [row, column].CurrentColumn = column;
		}
		Matrix [random_row, random_column].GameObject.transform.position = GetScreenCoordinatesFromViewPort (random_row, random_column);
		Matrix [random_row, random_column].CurrentRow = random_row;
		Matrix [random_row, random_column].CurrentColumn = random_column;
	}

	private void CheckInput () {
		if (Input.GetMouseButtonDown (0)) {
			Ray ray = Camera.main.ScreenPointToRay (Input.mousePosition);
			RaycastHit2D hit = Physics2D.Raycast (ray.origin, ray.direction);

			if (hit.collider != null) {
				string[] parts = hit.collider.gameObject.name.Split ('-');
				int rowPart = int.Parse (parts [1]);
				int columnPart = int.Parse (parts [2]);

				int rowFound = -1;
				int columnFound = -1;

				for (int row = 0; row < GameVariables.MaxRows; row++) {
					if (rowFound != -1)
						break;

					for (int column = 0; column < GameVariables.MaxColumns; column++) {
						if (rowFound != -1)
							break;

						if (Matrix [row, column] == null)
							continue;

						if (Matrix[row, column].OriginalRow == rowPart && Matrix[row, column].OriginalColumn == columnPart) {
							rowFound = row;
							columnFound = column;
						} //- if we found row and column
					} //- for column
				} //- for row

				bool pieceFound = false;

				if (rowFound > 0 && Matrix[rowFound - 1, columnFound] == null) {
					pieceFound = true;
					toAnimateRow = rowFound - 1;
					toAnimateColumn = columnFound;
				} else if (columnFound > 0 && Matrix[rowFound, columnFound - 1] == null) {
					pieceFound = true;
					toAnimateRow = rowFound;
					toAnimateColumn = columnFound - 1;
				} else if (rowFound < GameVariables.MaxRows - 1 && Matrix[rowFound + 1, columnFound] == null) {
					pieceFound = true;
					toAnimateRow = rowFound + 1;
					toAnimateColumn = columnFound;
				} else if (columnFound < GameVariables.MaxColumns - 1 && Matrix[rowFound, columnFound + 1] == null) {
					pieceFound = true;
					toAnimateRow = rowFound;
					toAnimateColumn = columnFound + 1;
				}

				if (pieceFound) {
					screenPositionToAnimate = GetScreenCoordinatesFromViewPort (toAnimateRow, toAnimateColumn);
					PieceToAnimate = Matrix [rowFound, columnFound];
					gameState = GameState.Animating;
				}
			}
		}
	}

	private void AnimateMovement (PuzzlePiece toMove, float time) {
		toMove.GameObject.transform.position = Vector2.MoveTowards (toMove.GameObject.transform.position,
			screenPositionToAnimate, animSpeed * time);
	}

	private void CheckIfAnimationEnded () {
		if (Vector2.Distance (PieceToAnimate.GameObject.transform.position,
			screenPositionToAnimate) < 0.1f) {

			Swap (PieceToAnimate.CurrentRow, PieceToAnimate.CurrentColumn, toAnimateRow, toAnimateColumn);
			gameState = GameState.Playing;
			CheckForVictory ();
		}
	}

	private void CheckForVictory () {
		for (int row = 0; row < GameVariables.MaxRows; row++) {
			for (int column = 0; column < GameVariables.MaxColumns; column++) {
				if (Matrix [row, column] == null)
					continue;

				if (Matrix [row, column].CurrentRow != Matrix [row, column].OriginalRow ||
					Matrix [row, column].CurrentColumn != Matrix [row, column].OriginalColumn) {

					return;
				}
			}
		}
		gameState = GameState.End;
	}

	private Vector3 GetScreenCoordinatesFromViewPort (int row, int column) {
		Vector3 point = Camera.main.ViewportToWorldPoint (new Vector3 (0.2225f * row, 1 - 0.22575f * column, 0));
		point.z = 0;
		return point;
	}

	void LoadPuzzle () {
		puzzleImages = Resources.LoadAll<Sprite> ("Sprites/BG " + puzzleIndex);

		puzzlePieces = GameObject.Find ("Puzzle Holder").GetComponent<PuzzleHolder> ().puzzlePieces;

		for (int i = 0; i < puzzlePieces.Length; i++) {
			puzzlePieces [i].GetComponent<SpriteRenderer> ().sprite = puzzleImages [i];
		}
	}

	void MakeSingleton () {
		if (instance != null) {
			Destroy (gameObject);
		} else {
			instance = this;
			DontDestroyOnLoad (gameObject); 
		}
	}

	public void SetPuzzleIndex (int puzzleIndex) {
		this.puzzleIndex = puzzleIndex;
	}

} // GameManager
