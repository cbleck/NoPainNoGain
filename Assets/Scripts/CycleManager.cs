using UnityEngine;
using System.Collections;
using SynchronizerData;
using UnityEngine.UI;

public class CycleManager : MonoBehaviour {
    private Animator anim;
    private BeatObserver beatObserver;
	private int currentNumber;
	private int currentCycle;

    void Start()
    {
        anim = GetComponent<Animator>();
        beatObserver = GetComponent<BeatObserver>();

		currentNumber = 1;
		currentCycle = 1;
    }

    void Update()
    {
		if ((beatObserver.beatMask & BeatType.DownBeat) == BeatType.DownBeat)
        {
            StartCoroutine("ExpandTextNGoNormal");
        }
    }

    IEnumerator ExpandTextNGoNormal() {

		currentNumber = (currentNumber % 4);

		if (currentNumber == 0) {
			GetComponent<Text> ().text = currentCycle.ToString ();
			GetComponent<Text> ().color = Color.green;
			currentCycle++;
		} else {
			GetComponent<Text> ().text = currentNumber.ToString ();
			GetComponent<Text> ().color = Color.white;
		}
        GetComponent<Text>().fontSize = 50;
        yield return new  WaitForSeconds(0.2f);

        GetComponent<Text>().fontSize = 30;

		currentNumber++;

    }
}
