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
// UnityEngine.GameObject
struct GameObject_t3674682005;
// BeatObserver
struct BeatObserver_t2441021644;
// System.String[]
struct StringU5BU5D_t4054002952;
// GameController/PauseBeatSynchronizer
struct PauseBeatSynchronizer_t810409965;
// GameController/RestartBeatSynchronizer
struct RestartBeatSynchronizer_t1486424646;

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
	Text_t9039225 * ___accuracyText_2;
	// UnityEngine.GameObject GameController::quarter_beat
	GameObject_t3674682005 * ___quarter_beat_3;
	// UnityEngine.GameObject GameController::off_beat
	GameObject_t3674682005 * ___off_beat_4;
	// UnityEngine.GameObject GameController::on_beat
	GameObject_t3674682005 * ___on_beat_5;
	// GameController/AccuracyState GameController::current_tempstate
	int32_t ___current_tempstate_6;
	// GameController/AccuracyState GameController::current_hit
	int32_t ___current_hit_7;
	// GameController/PlayerPosition GameController::player_position
	int32_t ___player_position_8;
	// BeatObserver GameController::beatObserver
	BeatObserver_t2441021644 * ___beatObserver_9;
	// System.Boolean GameController::blockCurrentHit
	bool ___blockCurrentHit_10;
	// System.String[] GameController::accuracyArray
	StringU5BU5D_t4054002952* ___accuracyArray_11;
	// System.Single GameController::treshold_sit
	float ___treshold_sit_12;
	// System.Single GameController::treshold_liedown
	float ___treshold_liedown_13;
	// UnityEngine.Vector3 GameController::accel
	Vector3_t4282066566  ___accel_14;
	// UnityEngine.Touch GameController::finger1
	Touch_t4210255029  ___finger1_15;
	// UnityEngine.Touch GameController::finger2
	Touch_t4210255029  ___finger2_16;

public:
	inline static int32_t get_offset_of_accuracyText_2() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___accuracyText_2)); }
	inline Text_t9039225 * get_accuracyText_2() const { return ___accuracyText_2; }
	inline Text_t9039225 ** get_address_of_accuracyText_2() { return &___accuracyText_2; }
	inline void set_accuracyText_2(Text_t9039225 * value)
	{
		___accuracyText_2 = value;
		Il2CppCodeGenWriteBarrier(&___accuracyText_2, value);
	}

	inline static int32_t get_offset_of_quarter_beat_3() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___quarter_beat_3)); }
	inline GameObject_t3674682005 * get_quarter_beat_3() const { return ___quarter_beat_3; }
	inline GameObject_t3674682005 ** get_address_of_quarter_beat_3() { return &___quarter_beat_3; }
	inline void set_quarter_beat_3(GameObject_t3674682005 * value)
	{
		___quarter_beat_3 = value;
		Il2CppCodeGenWriteBarrier(&___quarter_beat_3, value);
	}

	inline static int32_t get_offset_of_off_beat_4() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___off_beat_4)); }
	inline GameObject_t3674682005 * get_off_beat_4() const { return ___off_beat_4; }
	inline GameObject_t3674682005 ** get_address_of_off_beat_4() { return &___off_beat_4; }
	inline void set_off_beat_4(GameObject_t3674682005 * value)
	{
		___off_beat_4 = value;
		Il2CppCodeGenWriteBarrier(&___off_beat_4, value);
	}

	inline static int32_t get_offset_of_on_beat_5() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___on_beat_5)); }
	inline GameObject_t3674682005 * get_on_beat_5() const { return ___on_beat_5; }
	inline GameObject_t3674682005 ** get_address_of_on_beat_5() { return &___on_beat_5; }
	inline void set_on_beat_5(GameObject_t3674682005 * value)
	{
		___on_beat_5 = value;
		Il2CppCodeGenWriteBarrier(&___on_beat_5, value);
	}

	inline static int32_t get_offset_of_current_tempstate_6() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___current_tempstate_6)); }
	inline int32_t get_current_tempstate_6() const { return ___current_tempstate_6; }
	inline int32_t* get_address_of_current_tempstate_6() { return &___current_tempstate_6; }
	inline void set_current_tempstate_6(int32_t value)
	{
		___current_tempstate_6 = value;
	}

	inline static int32_t get_offset_of_current_hit_7() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___current_hit_7)); }
	inline int32_t get_current_hit_7() const { return ___current_hit_7; }
	inline int32_t* get_address_of_current_hit_7() { return &___current_hit_7; }
	inline void set_current_hit_7(int32_t value)
	{
		___current_hit_7 = value;
	}

	inline static int32_t get_offset_of_player_position_8() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___player_position_8)); }
	inline int32_t get_player_position_8() const { return ___player_position_8; }
	inline int32_t* get_address_of_player_position_8() { return &___player_position_8; }
	inline void set_player_position_8(int32_t value)
	{
		___player_position_8 = value;
	}

	inline static int32_t get_offset_of_beatObserver_9() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___beatObserver_9)); }
	inline BeatObserver_t2441021644 * get_beatObserver_9() const { return ___beatObserver_9; }
	inline BeatObserver_t2441021644 ** get_address_of_beatObserver_9() { return &___beatObserver_9; }
	inline void set_beatObserver_9(BeatObserver_t2441021644 * value)
	{
		___beatObserver_9 = value;
		Il2CppCodeGenWriteBarrier(&___beatObserver_9, value);
	}

	inline static int32_t get_offset_of_blockCurrentHit_10() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___blockCurrentHit_10)); }
	inline bool get_blockCurrentHit_10() const { return ___blockCurrentHit_10; }
	inline bool* get_address_of_blockCurrentHit_10() { return &___blockCurrentHit_10; }
	inline void set_blockCurrentHit_10(bool value)
	{
		___blockCurrentHit_10 = value;
	}

	inline static int32_t get_offset_of_accuracyArray_11() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___accuracyArray_11)); }
	inline StringU5BU5D_t4054002952* get_accuracyArray_11() const { return ___accuracyArray_11; }
	inline StringU5BU5D_t4054002952** get_address_of_accuracyArray_11() { return &___accuracyArray_11; }
	inline void set_accuracyArray_11(StringU5BU5D_t4054002952* value)
	{
		___accuracyArray_11 = value;
		Il2CppCodeGenWriteBarrier(&___accuracyArray_11, value);
	}

	inline static int32_t get_offset_of_treshold_sit_12() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___treshold_sit_12)); }
	inline float get_treshold_sit_12() const { return ___treshold_sit_12; }
	inline float* get_address_of_treshold_sit_12() { return &___treshold_sit_12; }
	inline void set_treshold_sit_12(float value)
	{
		___treshold_sit_12 = value;
	}

	inline static int32_t get_offset_of_treshold_liedown_13() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___treshold_liedown_13)); }
	inline float get_treshold_liedown_13() const { return ___treshold_liedown_13; }
	inline float* get_address_of_treshold_liedown_13() { return &___treshold_liedown_13; }
	inline void set_treshold_liedown_13(float value)
	{
		___treshold_liedown_13 = value;
	}

	inline static int32_t get_offset_of_accel_14() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___accel_14)); }
	inline Vector3_t4282066566  get_accel_14() const { return ___accel_14; }
	inline Vector3_t4282066566 * get_address_of_accel_14() { return &___accel_14; }
	inline void set_accel_14(Vector3_t4282066566  value)
	{
		___accel_14 = value;
	}

	inline static int32_t get_offset_of_finger1_15() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___finger1_15)); }
	inline Touch_t4210255029  get_finger1_15() const { return ___finger1_15; }
	inline Touch_t4210255029 * get_address_of_finger1_15() { return &___finger1_15; }
	inline void set_finger1_15(Touch_t4210255029  value)
	{
		___finger1_15 = value;
	}

	inline static int32_t get_offset_of_finger2_16() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___finger2_16)); }
	inline Touch_t4210255029  get_finger2_16() const { return ___finger2_16; }
	inline Touch_t4210255029 * get_address_of_finger2_16() { return &___finger2_16; }
	inline void set_finger2_16(Touch_t4210255029  value)
	{
		___finger2_16 = value;
	}
};

struct GameController_t2782302542_StaticFields
{
public:
	// GameController/PauseBeatSynchronizer GameController::PauseBeatSync
	PauseBeatSynchronizer_t810409965 * ___PauseBeatSync_17;
	// GameController/RestartBeatSynchronizer GameController::RestartBeatSync
	RestartBeatSynchronizer_t1486424646 * ___RestartBeatSync_18;

public:
	inline static int32_t get_offset_of_PauseBeatSync_17() { return static_cast<int32_t>(offsetof(GameController_t2782302542_StaticFields, ___PauseBeatSync_17)); }
	inline PauseBeatSynchronizer_t810409965 * get_PauseBeatSync_17() const { return ___PauseBeatSync_17; }
	inline PauseBeatSynchronizer_t810409965 ** get_address_of_PauseBeatSync_17() { return &___PauseBeatSync_17; }
	inline void set_PauseBeatSync_17(PauseBeatSynchronizer_t810409965 * value)
	{
		___PauseBeatSync_17 = value;
		Il2CppCodeGenWriteBarrier(&___PauseBeatSync_17, value);
	}

	inline static int32_t get_offset_of_RestartBeatSync_18() { return static_cast<int32_t>(offsetof(GameController_t2782302542_StaticFields, ___RestartBeatSync_18)); }
	inline RestartBeatSynchronizer_t1486424646 * get_RestartBeatSync_18() const { return ___RestartBeatSync_18; }
	inline RestartBeatSynchronizer_t1486424646 ** get_address_of_RestartBeatSync_18() { return &___RestartBeatSync_18; }
	inline void set_RestartBeatSync_18(RestartBeatSynchronizer_t1486424646 * value)
	{
		___RestartBeatSync_18 = value;
		Il2CppCodeGenWriteBarrier(&___RestartBeatSync_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
