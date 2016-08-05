using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class SceneManager : MonoBehaviour {

	public Text recordText;
	public Text inputNameText;
	public Text errorText;
	public GameObject dataMng;
	char[] delimeterCharacteres = {'|', ','};

	void Start(){
		StartCoroutine ("FillRecordList");
	}

	public void GoToLevel1(){
		//SceneManager.LoadScene (2);
		Application.LoadLevel(2);
	}
	public void GoToRecords(){
		//SceneManager.LoadScene (3);
		Application.LoadLevel(3);
	}
	public void GoToMainMenu(){
		//SceneManager.LoadScene (1);
		Application.LoadLevel(1);
	}


	public void CheckForNameAndStartGame(){

		if (inputNameText.text.Equals (""))
			errorText.enabled = true;
		else {
			string name = inputNameText.text;
			DataManager.instance.user = name;
			GoToMainMenu ();
		}
	}

	IEnumerator FillRecordList(){

		yield return new WaitForSeconds (1f);
		string outputStr = "";
		string[] tmpLineStr;

		foreach (string lineRecord in DataManager.instance.GetAllRecords()){

			tmpLineStr = lineRecord.Split(delimeterCharacteres);
			outputStr += "Usuario: " + tmpLineStr[0];

			outputStr += " pts: " + tmpLineStr [2];
			outputStr += " finalScore: " + tmpLineStr [1] + "\n";
		}

		recordText.text = outputStr;
	}
}
