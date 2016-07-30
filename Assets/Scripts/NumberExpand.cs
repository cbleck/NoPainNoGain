using UnityEngine;
using System.Collections;
using SynchronizerData;
using UnityEngine.UI;

public class NumberExpand : MonoBehaviour {
    private Animator anim;
    private BeatObserver beatObserver;

    void Start()
    {
        anim = GetComponent<Animator>();
        beatObserver = GetComponent<BeatObserver>();
    }

    void Update()
    {
        if ((beatObserver.beatMask & BeatType.UpBeat) == BeatType.UpBeat)
        {
            StartCoroutine("ExpandTextNGoNormal");
        }
    }

    IEnumerator ExpandTextNGoNormal() {
        GetComponent<Text>().fontSize = 50;
        yield return new  WaitForSeconds(0.1f);

        GetComponent<Text>().fontSize = 30;
    }
}
