using UnityEngine;
using System.Collections;
using System;
using System.IO;

public class DataManager : MonoBehaviour {

	public String fileName;
	public static DataManager instance;
	string[] tmpString;
	char[] delimeterCharacteres = {'|', ','};
	public int score;
	public int points;
	public string user;

	// Use this for initialization
	void Awake () {
		instance = this;
		LoadDataForUser(user);
	}

	public void LoadDataForUser(string usr) {
		
		if (File.Exists(Application.dataPath + fileName)){
			StreamReader sr = new StreamReader(Application.dataPath + fileName);
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
	public void SaveDataForUser(string usr) {

		int find_user_index=-1, i=0;

		if (File.Exists (Application.dataPath + fileName)) {
			StreamReader sr = new StreamReader (Application.dataPath + fileName);
			//StreamReader sr = new StreamReader(fileName);
			string stringLine, tmpuser;

			while ((stringLine = sr.ReadLine ()) != null) {
				tmpString = stringLine.Split (delimeterCharacteres);
				tmpuser = tmpString [0];

				if ( string.Equals(usr, tmpuser) )
					find_user_index = i;
				i++;
			}
			sr.Close ();

			if (find_user_index != -1) {

				string[] lines = System.IO.File.ReadAllLines (Application.dataPath + fileName);
				lines [find_user_index] = usr + "|" + score + "|" + points;
				System.IO.File.WriteAllLines (Application.dataPath + fileName, lines);

			} else {
				StreamWriter sw = new StreamWriter (Application.dataPath + fileName);
				string tmpData = usr + "|" + score + "|" + points;
				sw.WriteLine (tmpData);
				sw.Close ();
			}
		} else {
			StreamWriter sw = new StreamWriter (Application.dataPath + fileName);
			string tmpData = usr + "|" + score + "|" + points;
			sw.WriteLine (tmpData);
			sw.Close ();
		}
	}
}
