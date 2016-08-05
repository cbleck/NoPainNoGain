using UnityEngine;
using System.Collections;
using System;
using System.IO;

public class DataManager : MonoBehaviour {

	private String fileName = Application.persistentDataPath +"/npngprefs.txt";
	public static DataManager instance;
	string[] tmpString;
	char[] delimeterCharacteres = {'|', ','};
	public int score;
	public int points;
	[HideInInspector]
	public string user;
	public string[] recordLines;

	// Use this for initialization
	void Awake () {
		instance = this;
		GetAllRecords();
	}

	public string[] GetAllRecords(){

		if (File.Exists (fileName)) {
			recordLines = new string[100];
			StreamReader sr = new StreamReader(fileName);
			string stringLine, tmpuser;
			int i = 0;
			while ((stringLine = sr.ReadLine()) != null) {
				recordLines [i] = stringLine;
				i++;
			}
			sr.Close();
			return recordLines;
		}
		else {
			recordLines = new string[1];
			recordLines[0] = "No hay records";
			return recordLines;
		}
	}

	public void LoadData(string usr) {
		
		if (File.Exists(fileName)){
			StreamReader sr = new StreamReader(fileName);
			//StreamReader sr = new StreamReader(fileName);
			string stringLine, tmpuser;

			while ((stringLine = sr.ReadLine()) != null) {
				tmpString = stringLine.Split(delimeterCharacteres);
				tmpuser = tmpString[0];

				if ( string.Equals(usr, tmpuser) ) {
					user = usr;
					score = int.Parse (tmpString [1]);
					points = int.Parse (tmpString [2]);
				}
			}
			sr.Close();
		}
		else {
			user = usr;
			score = 0;
			points = 0;
		}
	}
	public void SaveData() {

		int find_user_index=-1, i=0;

		if (File.Exists (fileName)) {
			StreamReader sr = new StreamReader (fileName);
			//StreamReader sr = new StreamReader(fileName);
			string stringLine, tmpuser;

			while ((stringLine = sr.ReadLine ()) != null) {
				tmpString = stringLine.Split (delimeterCharacteres);
				tmpuser = tmpString [0];

				if ( string.Equals(user, tmpuser) )
					find_user_index = i;
				i++;
			}
			sr.Close ();

			if (find_user_index != -1) {

				string[] lines = System.IO.File.ReadAllLines (fileName);
				lines [find_user_index] = user + "|" + score + "|" + points;
				System.IO.File.WriteAllLines (fileName, lines);

			} else {
				StreamWriter sw = new StreamWriter (fileName);
				string tmpData = user + "|" + score + "|" + points;
				sw.WriteLine (tmpData);
				sw.Close ();
			}
		} else {
			StreamWriter sw = new StreamWriter (fileName);
			string tmpData = user + "|" + score + "|" + points;
			sw.WriteLine (tmpData);
			sw.Close ();
		}
	}
}
