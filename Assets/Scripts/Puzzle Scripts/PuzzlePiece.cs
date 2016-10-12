using UnityEngine;
using System.Collections;

public class PuzzlePiece {

	public int CurrentRow { get; set;}
	public int CurrentColumn { get; set;}

	public int OriginalRow { get; set;}
	public int OriginalColumn {get; set;}

	public GameObject GameObject { get; set;}
}
