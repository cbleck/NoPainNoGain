using UnityEngine;
using System.Collections;
using SynchronizerData;
using UnityEngine.UI;

public class NumberExpand : MonoBehaviour {
    private Animator anim;
    private BeatObserver beatObserver;
	private int currentNumber;

    void Start()
    {
        anim = GetComponent<Animator>();
        beatObserver = GetComponent<BeatObserver>();

		currentNumber = 1;
    }

    void Update()
    {
        if ((beatObserver.beatMask & BeatType.UpBeat) == BeatType.UpBeat)
        {
            StartCoroutine("ExpandTextNGoNormal");
        }
    }

    IEnumerator ExpandTextNGoNormal() {

		currentNumber = (currentNumber % 4);
		GetComponent<Text> ().text = currentNumber.ToString();
        GetComponent<Text>().fontSize = 50;
        yield return new  WaitForSeconds(0.2f);

        GetComponent<Text>().fontSize = 30;

		currentNumber++;

    }
}
