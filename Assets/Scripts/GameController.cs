using UnityEngine;
using System.Collections;
using SynchronizerData;

public class GameController : MonoBehaviour {

    private ACCURACY_STATE current_state;
    private BeatObserver beatObserver;

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
    }
    // Update is called once per frame
    void Update () {

        if ((beatObserver.beatMask & BeatType.UpBeat) == BeatType.UpBeat) {
            StartCoroutine("RunCurrentAccuracy");
        }
        #if UNITY_STANDALONE

        if (Input.GetKeyDown(KeyCode.Space)) {
            Debug.Log(current_state);
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
        current_state = ACCURACY_STATE.GREAT;
        yield return new WaitForSeconds(0.3f);
        current_state = ACCURACY_STATE.GOOD;
        yield return new WaitForSeconds(0.3f);
        current_state = ACCURACY_STATE.OK;
        yield return new WaitForSeconds(0.3f);
        current_state = ACCURACY_STATE.MISS;
    }
}
