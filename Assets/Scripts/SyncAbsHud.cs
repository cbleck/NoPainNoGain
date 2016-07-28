using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class SyncAbsHud : MonoBehaviour {

    public Image circleSync;
    [Range(100.0f, 1000.0f)]
    public float speed = 200.0f;

	// Use this for initialization
	void Start () {

        circleSync.fillAmount = 1.0f;
	}
	
	// Update is called once per frame
	void Update () {

        if(circleSync.fillAmount < 1.0f)
            circleSync.fillAmount += 0.005f * speed * Time.deltaTime;
        else
            circleSync.fillAmount = 0.0f;
    }
}
