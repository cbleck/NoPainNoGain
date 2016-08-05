using UnityEngine;
using System.Collections;

public class CirclesController : MonoBehaviour {

	public void StartCircleAnimation(){
		GetComponent<Animator>().SetBool("entertwotouch", true);
	}

	public void StopCircleAnimation(){
		GetComponent<Animator>().SetBool("entertwotouch", false);
	}
}
