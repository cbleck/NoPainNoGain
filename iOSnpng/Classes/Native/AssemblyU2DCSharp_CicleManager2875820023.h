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
// BeatObserver
struct BeatObserver_t2441021644;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CicleManager
struct  CicleManager_t2875820023  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Text CicleManager::currentCycleText
	Text_t9039225 * ___currentCycleText_2;
	// UnityEngine.UI.Text CicleManager::currentNumberText
	Text_t9039225 * ___currentNumberText_3;
	// BeatObserver CicleManager::beatObserver
	BeatObserver_t2441021644 * ___beatObserver_4;
	// System.Int32 CicleManager::currentNumber
	int32_t ___currentNumber_5;
	// System.Int32 CicleManager::currentCycle
	int32_t ___currentCycle_6;

public:
	inline static int32_t get_offset_of_currentCycleText_2() { return static_cast<int32_t>(offsetof(CicleManager_t2875820023, ___currentCycleText_2)); }
	inline Text_t9039225 * get_currentCycleText_2() const { return ___currentCycleText_2; }
	inline Text_t9039225 ** get_address_of_currentCycleText_2() { return &___currentCycleText_2; }
	inline void set_currentCycleText_2(Text_t9039225 * value)
	{
		___currentCycleText_2 = value;
		Il2CppCodeGenWriteBarrier(&___currentCycleText_2, value);
	}

	inline static int32_t get_offset_of_currentNumberText_3() { return static_cast<int32_t>(offsetof(CicleManager_t2875820023, ___currentNumberText_3)); }
	inline Text_t9039225 * get_currentNumberText_3() const { return ___currentNumberText_3; }
	inline Text_t9039225 ** get_address_of_currentNumberText_3() { return &___currentNumberText_3; }
	inline void set_currentNumberText_3(Text_t9039225 * value)
	{
		___currentNumberText_3 = value;
		Il2CppCodeGenWriteBarrier(&___currentNumberText_3, value);
	}

	inline static int32_t get_offset_of_beatObserver_4() { return static_cast<int32_t>(offsetof(CicleManager_t2875820023, ___beatObserver_4)); }
	inline BeatObserver_t2441021644 * get_beatObserver_4() const { return ___beatObserver_4; }
	inline BeatObserver_t2441021644 ** get_address_of_beatObserver_4() { return &___beatObserver_4; }
	inline void set_beatObserver_4(BeatObserver_t2441021644 * value)
	{
		___beatObserver_4 = value;
		Il2CppCodeGenWriteBarrier(&___beatObserver_4, value);
	}

	inline static int32_t get_offset_of_currentNumber_5() { return static_cast<int32_t>(offsetof(CicleManager_t2875820023, ___currentNumber_5)); }
	inline int32_t get_currentNumber_5() const { return ___currentNumber_5; }
	inline int32_t* get_address_of_currentNumber_5() { return &___currentNumber_5; }
	inline void set_currentNumber_5(int32_t value)
	{
		___currentNumber_5 = value;
	}

	inline static int32_t get_offset_of_currentCycle_6() { return static_cast<int32_t>(offsetof(CicleManager_t2875820023, ___currentCycle_6)); }
	inline int32_t get_currentCycle_6() const { return ___currentCycle_6; }
	inline int32_t* get_address_of_currentCycle_6() { return &___currentCycle_6; }
	inline void set_currentCycle_6(int32_t value)
	{
		___currentCycle_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
