using UnityEngine;
using System.Collections;
using SynchronizerData;
using UnityEngine.UI;

public class GameController : MonoBehaviour {

	public Text accuracyText;

    private ACCURACY_STATE current_state;
    private BeatObserver beatObserver;

	private bool blockCurrentHit;
	private string[] accuracyArray = { "Great", "Good", "Ok", "Miss" };

    enum ACCURACY_STATE {
        GREAT,
        GOOD,
        OK,
        MISS
    }

#if UNITY_IOS || UNITY_ANDROID
    private Vector3 accel;
    private Touch finger1, finger2;
#endif

    void Start() {
        beatObserver = GetComponent<BeatObserver>();
        current_state = ACCURACY_STATE.MISS;
		blockCurrentHit = false;
    }
    // Update is called once per frame
    void Update () {

        if ((beatObserver.beatMask & BeatType.UpBeat) == BeatType.UpBeat) {
            StartCoroutine("RunCurrentAccuracy");
        }
        #if UNITY_STANDALONE

		if (Input.GetKeyDown(KeyCode.Space) && !blockCurrentHit) {
			blockCurrentHit = true;
			StartCoroutine("ShowAccuracyText");
        }

#endif
#if UNITY_IOS || UNITY_ANDROID

        accel = Input.acceleration;

        if (Input.touchCount > 1){
            Debug.Log(accel);
        }
#endif
    }

    IEnumerator RunCurrentAccuracy()
    {
		blockCurrentHit = false;
        current_state = ACCURACY_STATE.GREAT;
        yield return new WaitForSeconds(0.3f);
        current_state = ACCURACY_STATE.GOOD;
        yield return new WaitForSeconds(0.3f);
        current_state = ACCURACY_STATE.OK;
        yield return new WaitForSeconds(0.3f);
        current_state = ACCURACY_STATE.MISS;
    }

	IEnumerator ShowAccuracyText(){

		accuracyText.text = accuracyArray[(int)current_state];
		accuracyText.enabled = true;
		yield return new WaitForSeconds (0.1f);
		accuracyText.fontSize = 50;
		yield return new WaitForSeconds (0.1f);
		accuracyText.fontSize = 30;
		yield return new WaitForSeconds (0.1f);
		accuracyText.enabled = false;

	}
}
