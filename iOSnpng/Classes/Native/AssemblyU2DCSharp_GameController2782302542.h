#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.UI.Button
struct Button_t3896396478;
// UnityEngine.ParticleSystem
struct ParticleSystem_t381473177;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// UnityEngine.AudioClip
struct AudioClip_t794140988;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.UI.Image
struct Image_t538875265;
// UnityEngine.Canvas
struct Canvas_t2727140764;
// BeatObserver
struct BeatObserver_t2441021644;
// System.String[]
struct StringU5BU5D_t4054002952;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_GameController_AccuracyState1160197111.h"
#include "AssemblyU2DCSharp_GameController_PlayerPosition581787179.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Touch4210255029.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t2782302542  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Text GameController::accuracyText
	Text_t9039225 * ___accuracyText_3;
	// UnityEngine.UI.Text GameController::scoreText
	Text_t9039225 * ___scoreText_4;
	// UnityEngine.UI.Text GameController::caloriesText
	Text_t9039225 * ___caloriesText_5;
	// UnityEngine.UI.Text GameController::numberText
	Text_t9039225 * ___numberText_6;
	// UnityEngine.UI.Text GameController::congratulationTitleText
	Text_t9039225 * ___congratulationTitleText_7;
	// UnityEngine.UI.Text GameController::congratulationDescText
	Text_t9039225 * ___congratulationDescText_8;
	// UnityEngine.UI.Text GameController::menuButtonText
	Text_t9039225 * ___menuButtonText_9;
	// UnityEngine.UI.Button GameController::menuButton
	Button_t3896396478 * ___menuButton_10;
	// UnityEngine.ParticleSystem GameController::particleSystem
	ParticleSystem_t381473177 * ___particleSystem_11;
	// UnityEngine.AudioSource GameController::musicBackground
	AudioSource_t1740077639 * ___musicBackground_12;
	// UnityEngine.AudioSource GameController::fxSound
	AudioSource_t1740077639 * ___fxSound_13;
	// UnityEngine.AudioClip GameController::winMusic
	AudioClip_t794140988 * ___winMusic_14;
	// UnityEngine.AudioClip GameController::looseMusic
	AudioClip_t794140988 * ___looseMusic_15;
	// UnityEngine.AudioClip GameController::greatFxClip
	AudioClip_t794140988 * ___greatFxClip_16;
	// UnityEngine.AudioClip GameController::badFxClip
	AudioClip_t794140988 * ___badFxClip_17;
	// UnityEngine.GameObject GameController::playerCharacter
	GameObject_t3674682005 * ___playerCharacter_18;
	// UnityEngine.UI.Image GameController::leftCircle
	Image_t538875265 * ___leftCircle_19;
	// UnityEngine.UI.Image GameController::rightCircle
	Image_t538875265 * ___rightCircle_20;
	// UnityEngine.Canvas GameController::fingerCanvas
	Canvas_t2727140764 * ___fingerCanvas_21;
	// GameController/AccuracyState GameController::current_tempstate
	int32_t ___current_tempstate_22;
	// GameController/AccuracyState GameController::current_hit
	int32_t ___current_hit_23;
	// GameController/PlayerPosition GameController::player_position
	int32_t ___player_position_24;
	// BeatObserver GameController::beatObserver
	BeatObserver_t2441021644 * ___beatObserver_25;
	// System.Boolean GameController::blockCurrentHit
	bool ___blockCurrentHit_26;
	// System.String[] GameController::accuracyArray
	StringU5BU5D_t4054002952* ___accuracyArray_27;
	// System.Single GameController::treshold_sit
	float ___treshold_sit_28;
	// System.Single GameController::treshold_liedown
	float ___treshold_liedown_29;
	// System.Boolean GameController::isStartedLevelSequence
	bool ___isStartedLevelSequence_30;
	// System.Boolean GameController::firstDismiss
	bool ___firstDismiss_31;
	// System.Boolean GameController::isFinished
	bool ___isFinished_32;
	// System.Int32 GameController::points
	int32_t ___points_33;
	// System.Int32 GameController::score
	int32_t ___score_34;
	// System.Int32 GameController::cicle
	int32_t ___cicle_35;
	// UnityEngine.Vector3 GameController::accel
	Vector3_t4282066566  ___accel_36;
	// UnityEngine.Touch GameController::finger1
	Touch_t4210255029  ___finger1_37;
	// UnityEngine.Touch GameController::finger2
	Touch_t4210255029  ___finger2_38;

public:
	inline static int32_t get_offset_of_accuracyText_3() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___accuracyText_3)); }
	inline Text_t9039225 * get_accuracyText_3() const { return ___accuracyText_3; }
	inline Text_t9039225 ** get_address_of_accuracyText_3() { return &___accuracyText_3; }
	inline void set_accuracyText_3(Text_t9039225 * value)
	{
		___accuracyText_3 = value;
		Il2CppCodeGenWriteBarrier(&___accuracyText_3, value);
	}

	inline static int32_t get_offset_of_scoreText_4() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___scoreText_4)); }
	inline Text_t9039225 * get_scoreText_4() const { return ___scoreText_4; }
	inline Text_t9039225 ** get_address_of_scoreText_4() { return &___scoreText_4; }
	inline void set_scoreText_4(Text_t9039225 * value)
	{
		___scoreText_4 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_4, value);
	}

	inline static int32_t get_offset_of_caloriesText_5() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___caloriesText_5)); }
	inline Text_t9039225 * get_caloriesText_5() const { return ___caloriesText_5; }
	inline Text_t9039225 ** get_address_of_caloriesText_5() { return &___caloriesText_5; }
	inline void set_caloriesText_5(Text_t9039225 * value)
	{
		___caloriesText_5 = value;
		Il2CppCodeGenWriteBarrier(&___caloriesText_5, value);
	}

	inline static int32_t get_offset_of_numberText_6() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___numberText_6)); }
	inline Text_t9039225 * get_numberText_6() const { return ___numberText_6; }
	inline Text_t9039225 ** get_address_of_numberText_6() { return &___numberText_6; }
	inline void set_numberText_6(Text_t9039225 * value)
	{
		___numberText_6 = value;
		Il2CppCodeGenWriteBarrier(&___numberText_6, value);
	}

	inline static int32_t get_offset_of_congratulationTitleText_7() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___congratulationTitleText_7)); }
	inline Text_t9039225 * get_congratulationTitleText_7() const { return ___congratulationTitleText_7; }
	inline Text_t9039225 ** get_address_of_congratulationTitleText_7() { return &___congratulationTitleText_7; }
	inline void set_congratulationTitleText_7(Text_t9039225 * value)
	{
		___congratulationTitleText_7 = value;
		Il2CppCodeGenWriteBarrier(&___congratulationTitleText_7, value);
	}

	inline static int32_t get_offset_of_congratulationDescText_8() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___congratulationDescText_8)); }
	inline Text_t9039225 * get_congratulationDescText_8() const { return ___congratulationDescText_8; }
	inline Text_t9039225 ** get_address_of_congratulationDescText_8() { return &___congratulationDescText_8; }
	inline void set_congratulationDescText_8(Text_t9039225 * value)
	{
		___congratulationDescText_8 = value;
		Il2CppCodeGenWriteBarrier(&___congratulationDescText_8, value);
	}

	inline static int32_t get_offset_of_menuButtonText_9() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___menuButtonText_9)); }
	inline Text_t9039225 * get_menuButtonText_9() const { return ___menuButtonText_9; }
	inline Text_t9039225 ** get_address_of_menuButtonText_9() { return &___menuButtonText_9; }
	inline void set_menuButtonText_9(Text_t9039225 * value)
	{
		___menuButtonText_9 = value;
		Il2CppCodeGenWriteBarrier(&___menuButtonText_9, value);
	}

	inline static int32_t get_offset_of_menuButton_10() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___menuButton_10)); }
	inline Button_t3896396478 * get_menuButton_10() const { return ___menuButton_10; }
	inline Button_t3896396478 ** get_address_of_menuButton_10() { return &___menuButton_10; }
	inline void set_menuButton_10(Button_t3896396478 * value)
	{
		___menuButton_10 = value;
		Il2CppCodeGenWriteBarrier(&___menuButton_10, value);
	}

	inline static int32_t get_offset_of_particleSystem_11() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___particleSystem_11)); }
	inline ParticleSystem_t381473177 * get_particleSystem_11() const { return ___particleSystem_11; }
	inline ParticleSystem_t381473177 ** get_address_of_particleSystem_11() { return &___particleSystem_11; }
	inline void set_particleSystem_11(ParticleSystem_t381473177 * value)
	{
		___particleSystem_11 = value;
		Il2CppCodeGenWriteBarrier(&___particleSystem_11, value);
	}

	inline static int32_t get_offset_of_musicBackground_12() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___musicBackground_12)); }
	inline AudioSource_t1740077639 * get_musicBackground_12() const { return ___musicBackground_12; }
	inline AudioSource_t1740077639 ** get_address_of_musicBackground_12() { return &___musicBackground_12; }
	inline void set_musicBackground_12(AudioSource_t1740077639 * value)
	{
		___musicBackground_12 = value;
		Il2CppCodeGenWriteBarrier(&___musicBackground_12, value);
	}

	inline static int32_t get_offset_of_fxSound_13() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___fxSound_13)); }
	inline AudioSource_t1740077639 * get_fxSound_13() const { return ___fxSound_13; }
	inline AudioSource_t1740077639 ** get_address_of_fxSound_13() { return &___fxSound_13; }
	inline void set_fxSound_13(AudioSource_t1740077639 * value)
	{
		___fxSound_13 = value;
		Il2CppCodeGenWriteBarrier(&___fxSound_13, value);
	}

	inline static int32_t get_offset_of_winMusic_14() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___winMusic_14)); }
	inline AudioClip_t794140988 * get_winMusic_14() const { return ___winMusic_14; }
	inline AudioClip_t794140988 ** get_address_of_winMusic_14() { return &___winMusic_14; }
	inline void set_winMusic_14(AudioClip_t794140988 * value)
	{
		___winMusic_14 = value;
		Il2CppCodeGenWriteBarrier(&___winMusic_14, value);
	}

	inline static int32_t get_offset_of_looseMusic_15() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___looseMusic_15)); }
	inline AudioClip_t794140988 * get_looseMusic_15() const { return ___looseMusic_15; }
	inline AudioClip_t794140988 ** get_address_of_looseMusic_15() { return &___looseMusic_15; }
	inline void set_looseMusic_15(AudioClip_t794140988 * value)
	{
		___looseMusic_15 = value;
		Il2CppCodeGenWriteBarrier(&___looseMusic_15, value);
	}

	inline static int32_t get_offset_of_greatFxClip_16() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___greatFxClip_16)); }
	inline AudioClip_t794140988 * get_greatFxClip_16() const { return ___greatFxClip_16; }
	inline AudioClip_t794140988 ** get_address_of_greatFxClip_16() { return &___greatFxClip_16; }
	inline void set_greatFxClip_16(AudioClip_t794140988 * value)
	{
		___greatFxClip_16 = value;
		Il2CppCodeGenWriteBarrier(&___greatFxClip_16, value);
	}

	inline static int32_t get_offset_of_badFxClip_17() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___badFxClip_17)); }
	inline AudioClip_t794140988 * get_badFxClip_17() const { return ___badFxClip_17; }
	inline AudioClip_t794140988 ** get_address_of_badFxClip_17() { return &___badFxClip_17; }
	inline void set_badFxClip_17(AudioClip_t794140988 * value)
	{
		___badFxClip_17 = value;
		Il2CppCodeGenWriteBarrier(&___badFxClip_17, value);
	}

	inline static int32_t get_offset_of_playerCharacter_18() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___playerCharacter_18)); }
	inline GameObject_t3674682005 * get_playerCharacter_18() const { return ___playerCharacter_18; }
	inline GameObject_t3674682005 ** get_address_of_playerCharacter_18() { return &___playerCharacter_18; }
	inline void set_playerCharacter_18(GameObject_t3674682005 * value)
	{
		___playerCharacter_18 = value;
		Il2CppCodeGenWriteBarrier(&___playerCharacter_18, value);
	}

	inline static int32_t get_offset_of_leftCircle_19() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___leftCircle_19)); }
	inline Image_t538875265 * get_leftCircle_19() const { return ___leftCircle_19; }
	inline Image_t538875265 ** get_address_of_leftCircle_19() { return &___leftCircle_19; }
	inline void set_leftCircle_19(Image_t538875265 * value)
	{
		___leftCircle_19 = value;
		Il2CppCodeGenWriteBarrier(&___leftCircle_19, value);
	}

	inline static int32_t get_offset_of_rightCircle_20() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___rightCircle_20)); }
	inline Image_t538875265 * get_rightCircle_20() const { return ___rightCircle_20; }
	inline Image_t538875265 ** get_address_of_rightCircle_20() { return &___rightCircle_20; }
	inline void set_rightCircle_20(Image_t538875265 * value)
	{
		___rightCircle_20 = value;
		Il2CppCodeGenWriteBarrier(&___rightCircle_20, value);
	}

	inline static int32_t get_offset_of_fingerCanvas_21() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___fingerCanvas_21)); }
	inline Canvas_t2727140764 * get_fingerCanvas_21() const { return ___fingerCanvas_21; }
	inline Canvas_t2727140764 ** get_address_of_fingerCanvas_21() { return &___fingerCanvas_21; }
	inline void set_fingerCanvas_21(Canvas_t2727140764 * value)
	{
		___fingerCanvas_21 = value;
		Il2CppCodeGenWriteBarrier(&___fingerCanvas_21, value);
	}

	inline static int32_t get_offset_of_current_tempstate_22() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___current_tempstate_22)); }
	inline int32_t get_current_tempstate_22() const { return ___current_tempstate_22; }
	inline int32_t* get_address_of_current_tempstate_22() { return &___current_tempstate_22; }
	inline void set_current_tempstate_22(int32_t value)
	{
		___current_tempstate_22 = value;
	}

	inline static int32_t get_offset_of_current_hit_23() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___current_hit_23)); }
	inline int32_t get_current_hit_23() const { return ___current_hit_23; }
	inline int32_t* get_address_of_current_hit_23() { return &___current_hit_23; }
	inline void set_current_hit_23(int32_t value)
	{
		___current_hit_23 = value;
	}

	inline static int32_t get_offset_of_player_position_24() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___player_position_24)); }
	inline int32_t get_player_position_24() const { return ___player_position_24; }
	inline int32_t* get_address_of_player_position_24() { return &___player_position_24; }
	inline void set_player_position_24(int32_t value)
	{
		___player_position_24 = value;
	}

	inline static int32_t get_offset_of_beatObserver_25() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___beatObserver_25)); }
	inline BeatObserver_t2441021644 * get_beatObserver_25() const { return ___beatObserver_25; }
	inline BeatObserver_t2441021644 ** get_address_of_beatObserver_25() { return &___beatObserver_25; }
	inline void set_beatObserver_25(BeatObserver_t2441021644 * value)
	{
		___beatObserver_25 = value;
		Il2CppCodeGenWriteBarrier(&___beatObserver_25, value);
	}

	inline static int32_t get_offset_of_blockCurrentHit_26() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___blockCurrentHit_26)); }
	inline bool get_blockCurrentHit_26() const { return ___blockCurrentHit_26; }
	inline bool* get_address_of_blockCurrentHit_26() { return &___blockCurrentHit_26; }
	inline void set_blockCurrentHit_26(bool value)
	{
		___blockCurrentHit_26 = value;
	}

	inline static int32_t get_offset_of_accuracyArray_27() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___accuracyArray_27)); }
	inline StringU5BU5D_t4054002952* get_accuracyArray_27() const { return ___accuracyArray_27; }
	inline StringU5BU5D_t4054002952** get_address_of_accuracyArray_27() { return &___accuracyArray_27; }
	inline void set_accuracyArray_27(StringU5BU5D_t4054002952* value)
	{
		___accuracyArray_27 = value;
		Il2CppCodeGenWriteBarrier(&___accuracyArray_27, value);
	}

	inline static int32_t get_offset_of_treshold_sit_28() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___treshold_sit_28)); }
	inline float get_treshold_sit_28() const { return ___treshold_sit_28; }
	inline float* get_address_of_treshold_sit_28() { return &___treshold_sit_28; }
	inline void set_treshold_sit_28(float value)
	{
		___treshold_sit_28 = value;
	}

	inline static int32_t get_offset_of_treshold_liedown_29() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___treshold_liedown_29)); }
	inline float get_treshold_liedown_29() const { return ___treshold_liedown_29; }
	inline float* get_address_of_treshold_liedown_29() { return &___treshold_liedown_29; }
	inline void set_treshold_liedown_29(float value)
	{
		___treshold_liedown_29 = value;
	}

	inline static int32_t get_offset_of_isStartedLevelSequence_30() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___isStartedLevelSequence_30)); }
	inline bool get_isStartedLevelSequence_30() const { return ___isStartedLevelSequence_30; }
	inline bool* get_address_of_isStartedLevelSequence_30() { return &___isStartedLevelSequence_30; }
	inline void set_isStartedLevelSequence_30(bool value)
	{
		___isStartedLevelSequence_30 = value;
	}

	inline static int32_t get_offset_of_firstDismiss_31() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___firstDismiss_31)); }
	inline bool get_firstDismiss_31() const { return ___firstDismiss_31; }
	inline bool* get_address_of_firstDismiss_31() { return &___firstDismiss_31; }
	inline void set_firstDismiss_31(bool value)
	{
		___firstDismiss_31 = value;
	}

	inline static int32_t get_offset_of_isFinished_32() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___isFinished_32)); }
	inline bool get_isFinished_32() const { return ___isFinished_32; }
	inline bool* get_address_of_isFinished_32() { return &___isFinished_32; }
	inline void set_isFinished_32(bool value)
	{
		___isFinished_32 = value;
	}

	inline static int32_t get_offset_of_points_33() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___points_33)); }
	inline int32_t get_points_33() const { return ___points_33; }
	inline int32_t* get_address_of_points_33() { return &___points_33; }
	inline void set_points_33(int32_t value)
	{
		___points_33 = value;
	}

	inline static int32_t get_offset_of_score_34() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___score_34)); }
	inline int32_t get_score_34() const { return ___score_34; }
	inline int32_t* get_address_of_score_34() { return &___score_34; }
	inline void set_score_34(int32_t value)
	{
		___score_34 = value;
	}

	inline static int32_t get_offset_of_cicle_35() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___cicle_35)); }
	inline int32_t get_cicle_35() const { return ___cicle_35; }
	inline int32_t* get_address_of_cicle_35() { return &___cicle_35; }
	inline void set_cicle_35(int32_t value)
	{
		___cicle_35 = value;
	}

	inline static int32_t get_offset_of_accel_36() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___accel_36)); }
	inline Vector3_t4282066566  get_accel_36() const { return ___accel_36; }
	inline Vector3_t4282066566 * get_address_of_accel_36() { return &___accel_36; }
	inline void set_accel_36(Vector3_t4282066566  value)
	{
		___accel_36 = value;
	}

	inline static int32_t get_offset_of_finger1_37() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___finger1_37)); }
	inline Touch_t4210255029  get_finger1_37() const { return ___finger1_37; }
	inline Touch_t4210255029 * get_address_of_finger1_37() { return &___finger1_37; }
	inline void set_finger1_37(Touch_t4210255029  value)
	{
		___finger1_37 = value;
	}

	inline static int32_t get_offset_of_finger2_38() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___finger2_38)); }
	inline Touch_t4210255029  get_finger2_38() const { return ___finger2_38; }
	inline Touch_t4210255029 * get_address_of_finger2_38() { return &___finger2_38; }
	inline void set_finger2_38(Touch_t4210255029  value)
	{
		___finger2_38 = value;
	}
};

struct GameController_t2782302542_StaticFields
{
public:
	// System.Int32 GameController::MAX_CICLE_LOOPS
	int32_t ___MAX_CICLE_LOOPS_2;

public:
	inline static int32_t get_offset_of_MAX_CICLE_LOOPS_2() { return static_cast<int32_t>(offsetof(GameController_t2782302542_StaticFields, ___MAX_CICLE_LOOPS_2)); }
	inline int32_t get_MAX_CICLE_LOOPS_2() const { return ___MAX_CICLE_LOOPS_2; }
	inline int32_t* get_address_of_MAX_CICLE_LOOPS_2() { return &___MAX_CICLE_LOOPS_2; }
	inline void set_MAX_CICLE_LOOPS_2(int32_t value)
	{
		___MAX_CICLE_LOOPS_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
