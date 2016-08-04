using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class MenuChanger : MonoBehaviour {

	public Color initialBackgroundColor;
	public Color finalBackgroundColor;
	public float speed = 10;
	private float startTime;

	void Start(){
		startTime = Time.time;
	}
	void Update(){
		changeColor ();
	}

	private void changeColor(){

		transform.GetComponent<Image> ().color = Color.Lerp (
			initialBackgroundColor,
			finalBackgroundColor,
			(Time.time - startTime) *  speed );

	}
}
