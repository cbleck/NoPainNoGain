using UnityEngine;
using System.Collections;
using SynchronizerData;
using UnityEngine.UI;

public class GameController : MonoBehaviour {

	public Text accuracyText;
	public GameObject quarter_beat, off_beat, on_beat;

	public delegate void PauseBeatSynchronizer();
	public delegate void RestartBeatSynchronizer();

	public static event PauseBeatSynchronizer PauseBeatSync;
	public static event RestartBeatSynchronizer RestartBeatSync;

    private AccuracyState current_tempstate, current_hit;
	private PlayerPosition player_position;
    private BeatObserver beatObserver;

	private bool blockCurrentHit;
	private string[] accuracyArray = { "Awesome","Great", "Good", "Not Bad", "Ok", "Miss", "NA" };
	private float treshold_sit, treshold_liedown;
	private bool firstDismiss;

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

		firstDismiss = true;
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
		Debug.Log ("Accel: "+accel.y);

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
#endif
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

		accuracyText.text = accuracyArray[(int)current_tempstate];
		accuracyText.enabled = true;
		yield return new WaitForSeconds (0.1f);
		accuracyText.fontSize = 50;
		yield return new WaitForSeconds (0.1f);
		accuracyText.fontSize = 30;
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
}
