using UnityEngine;
using System.Collections;

public class PlayerController : MonoBehaviour {

	public void StartExercisePlayerAnimation(){
		GetComponent<Animator>().SetTrigger("triggerexercise");
		GetComponent<Animator>().SetBool("playexercise", true);
	}

	public void StopExercisePlayerAnimation(){
		GetComponent<Animator>().SetBool("playexercise", false);
	}

	public void StartWinningAnimation(){
		GetComponent<Animator>().SetTrigger("win");
	}

}
