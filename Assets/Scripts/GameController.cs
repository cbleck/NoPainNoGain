using UnityEngine;
using System.Collections;
using SynchronizerData;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameController : MonoBehaviour {

	private static int MAX_CICLE_LOOPS=30;

	public Text accuracyText, scoreText, caloriesText, numberText;
	public Text congratulationTitleText, congratulationDescText, menuButtonText;
	public Button menuButton;

	public AudioSource musicBackground;
	public GameObject playerCharacter;
	public Image leftCircle, rightCircle;
	public Canvas fingerCanvas;

    private AccuracyState current_tempstate, current_hit;
	private PlayerPosition player_position;
    private BeatObserver beatObserver;

	private bool blockCurrentHit;
	private string[] accuracyArray = { "Awesome","Great", "Good", "Not Bad", "Ok", "Miss", "NA" };
	private float treshold_sit, treshold_liedown;
	private bool isStartedLevelSequence ,firstDismiss, isFinished;

	private int points, score, cicle;

	enum AccuracyState {
        AWESOME,
		GREAT,
        GOOD,
		NOTBAD,
        OK,
		MISS,
		NOTASSIGNED
    }

	enum PlayerPosition{
		SIT,
		LIEDOWN
	}

#if UNITY_IOS || UNITY_ANDROID
    private Vector3 accel;
    private Touch finger1, finger2;
#endif

    void Start() {
        beatObserver = GetComponent<BeatObserver>();
		current_tempstate = AccuracyState.AWESOME;
		current_hit = AccuracyState.NOTASSIGNED;
		blockCurrentHit = false;

		treshold_liedown = -0.8f;
		treshold_sit = -0.5f;

		isStartedLevelSequence = false;
		firstDismiss = true;
		isFinished = false;

		cicle = 1;

		Debug.Log("USER: "+DataManager.instance.user);
		Debug.Log("Score: "+DataManager.instance.score);
		Debug.Log("Points: "+DataManager.instance.points);

		points = 0;
		score = 0;

    }
    // Update is called once per frame
    void Update () {

		if ((beatObserver.beatMask & BeatType.OnBeat) == BeatType.OnBeat) {
			Debug.Log ("VA");
			blockCurrentHit = false;
			StartCoroutine ("RunCurrentAccuracy");
		}
		if ((beatObserver.beatMask & BeatType.OffBeat) == BeatType.OffBeat) {

			if (current_hit == AccuracyState.NOTASSIGNED) {
				current_tempstate = AccuracyState.AWESOME;
				StartCoroutine ("ShowMissText");
				blockCurrentHit = true;
			}
			Debug.Log ("TERMINA_B");
			cicle++;

			if (cicle == MAX_CICLE_LOOPS) {
				isFinished = true;
				EnableWinningState ();
			}
		}
#if UNITY_STANDALONE

		if (Input.GetKeyDown(KeyCode.Space) && !blockCurrentHit) {
			blockCurrentHit = true;
			current_hit = current_tempstate;
			StartCoroutine("ShowAccuracyText");
        }

#endif
#if UNITY_IOS || UNITY_ANDROID

        accel = Input.acceleration;
		//Debug.Log ("Accel: "+accel.y);

		if (Input.touchCount > 1 && !blockCurrentHit &&
			accel.y > treshold_sit && player_position == PlayerPosition.LIEDOWN) {
			player_position = PlayerPosition.SIT;
			blockCurrentHit = true;
			current_hit = current_tempstate;
			StartCoroutine("ShowAccuracyText");
		}

		if(accel.y < treshold_liedown){
			player_position = PlayerPosition.LIEDOWN;
		}

		if(!isStartedLevelSequence && Input.touchCount > 1){
			isStartedLevelSequence = true;
			StartCoroutine("StartLevelSequence");
		}

		if(Input.touchCount > 1)
			DisableTouchHUD();
		else if(!isFinished)
			EnableTouchHUD();
			
#endif
    }

	private void EnableTouchHUD(){

		fingerCanvas.enabled = true;
		leftCircle.GetComponent<CirclesController> ().SendMessage ("StopCircleAnimation");
		rightCircle.GetComponent<CirclesController> ().SendMessage ("StopCircleAnimation");
	}

	private void DisableTouchHUD(){
		fingerCanvas.enabled = false;
		leftCircle.GetComponent<CirclesController> ().SendMessage ("StartCircleAnimation");
		rightCircle.GetComponent<CirclesController> ().SendMessage ("StartCircleAnimation");
	}

	private void EnableWinningState(){

		DataManager.instance.score = score;
		DataManager.instance.points = points;
		DataManager.instance.SaveData();

		musicBackground.Stop ();
		numberText.enabled = false;
		leftCircle.enabled = false;
		rightCircle.enabled = false;
		fingerCanvas.enabled = false;
		congratulationTitleText.enabled = true;
		congratulationDescText.enabled = true;
		menuButton.GetComponent<Image>().enabled = true;
		menuButtonText.enabled = true;
		Camera.main.GetComponent<Animator> ().SetTrigger ("win");
		playerCharacter.GetComponent<PlayerController> ().SendMessage ("StartWinningAnimation");
	}

    IEnumerator RunCurrentAccuracy()
    {
		current_hit = AccuracyState.NOTASSIGNED;
		current_tempstate = AccuracyState.GOOD;
		yield return new WaitForSeconds(0.2f);
		current_tempstate = AccuracyState.GREAT;
		yield return new WaitForSeconds(0.15f);
		current_tempstate = AccuracyState.AWESOME;
		yield return new WaitForSeconds(0.15f);
		current_tempstate = AccuracyState.GREAT;
        yield return new WaitForSeconds(0.1f);
		current_tempstate = AccuracyState.GOOD;
        yield return new WaitForSeconds(0.07f);
		current_tempstate = AccuracyState.NOTBAD;
		yield return new WaitForSeconds(0.07f);
		current_tempstate = AccuracyState.OK;

		Debug.Log ("TERMINA_A");
    }

	IEnumerator ShowAccuracyText(){

		points++;

		if (current_tempstate == AccuracyState.AWESOME)
			score += 100;
		else if (current_tempstate == AccuracyState.GREAT)
			score += 60;
		else if (current_tempstate == AccuracyState.GOOD)
			score += 40;
		else if (current_tempstate == AccuracyState.NOTBAD)
			score += 20;
		else if (current_tempstate == AccuracyState.OK)
			score += 10;

		caloriesText.text = "Calorias: " + points.ToString ();
		scoreText.text = "Score: " + score.ToString ();
		accuracyText.text = accuracyArray[(int)current_tempstate];
		accuracyText.enabled = true;
		yield return new WaitForSeconds (0.1f);
		accuracyText.fontSize = 50;
		caloriesText.fontSize = 50;
		scoreText.fontSize = 50;
		yield return new WaitForSeconds (0.1f);
		accuracyText.fontSize = 30;
		caloriesText.fontSize = 30;
		scoreText.fontSize = 30;
		yield return new WaitForSeconds (0.1f);
		accuracyText.enabled = false;

	}

	IEnumerator ShowMissText(){

		if (!firstDismiss) {

			accuracyText.text = accuracyArray [(int)AccuracyState.MISS];
			accuracyText.enabled = true;
			yield return new WaitForSeconds (0.1f);
			accuracyText.fontSize = 50;
			yield return new WaitForSeconds (0.1f);
			accuracyText.fontSize = 30;
			yield return new WaitForSeconds (0.1f);
			accuracyText.enabled = false;
		}
		firstDismiss = false;
	}

	IEnumerator StartLevelSequence(){

		yield return new WaitForSeconds (1f);

		musicBackground.GetComponent<BeatSynchronizer> ().enabled = true;

	}


	public void RestartScene(){
		//SceneManager.LoadScene (2);
		Application.LoadLevel(2);
	}

	public void GoToMainMenu(){
		//SceneManager.LoadScene (1);
		Application.LoadLevel(1);
	}
}
