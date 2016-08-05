using UnityEngine;
using System.Collections;

public class ChangeFatness : MonoBehaviour {

	public Material skinnyShader, mediumShader, fatShader;
	public GameObject player;
	private Body_Type user_bodytype;

	private enum Body_Type{
		ECTOMORPH,
		MESOMORPH,
		ENDOMORPH
	};

	void Start(){
		user_bodytype = Body_Type.MESOMORPH;
	}
	
	// Update is called once per frame
	void Update () {

		if (user_bodytype == Body_Type.ECTOMORPH)
			player.transform.GetComponent<Renderer> ().material = skinnyShader;
		else if (user_bodytype == Body_Type.MESOMORPH)
			player.transform.GetComponent<Renderer> ().material = mediumShader;
		else if (user_bodytype == Body_Type.ENDOMORPH)
			player.transform.GetComponent<Renderer> ().material = fatShader;
	}

	public void SelectEctomorph(){
		user_bodytype = Body_Type.ECTOMORPH;
	}

	public void SelectEndomorph(){
		user_bodytype = Body_Type.ENDOMORPH;
	}

	public void SelectMesomorph(){
		user_bodytype = Body_Type.MESOMORPH;
	}
}

