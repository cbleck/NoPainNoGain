using UnityEngine;
using System.Collections;
using SynchronizerData;
using UnityEngine.UI;

public class CicleManager : MonoBehaviour {

	public Text currentCycleText, currentNumberText;

    private BeatObserver beatObserver;
	private int currentNumber;
	private int currentCycle;

    void Start()
    {
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
			currentNumberText.text = currentCycle.ToString ();
			currentNumberText.color = Color.green;
			currentCycle++;
			currentCycleText.text = "Ciclo: " + currentCycle.ToString() + "/ 15";
		} else {
			currentNumberText.text = currentNumber.ToString ();
			currentNumberText.color = Color.white;
		}
		currentNumberText.fontSize = 80;
        yield return new  WaitForSeconds(0.2f);

		currentNumberText.fontSize = 50;

		currentNumber++;

    }
}
