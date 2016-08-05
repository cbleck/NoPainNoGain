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

	// Use this for initialization
	void Awake () {
		instance = this;
		LoadData();
	}

	public void LoadData() {
		
		if (File.Exists(fileName)){
			StreamReader sr = new StreamReader(Application.dataPath + fileName);
			//StreamReader sr = new StreamReader(fileName);
			string stringLine;

			while ((stringLine = sr.ReadLine()) != null) {
				tmpString = stringLine.Split(delimeterCharacteres);
				score = int.Parse(tmpString[0]);
				points = int.Parse(tmpString[1]);
			}
			sr.Close();
		}
		else {
			score = 0;
			points = 0;
		}
	}
	public void SaveData() {
		StreamWriter sw = new StreamWriter(fileName);
		string tmpData = score + "|" + points;
		sw.WriteLine(tmpData);
		sw.Close();
	}
}
