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
// System.Char[]
struct CharU5BU5D_t3324145743;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneManager
struct  SceneManager_t3124981153  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Text SceneManager::recordText
	Text_t9039225 * ___recordText_2;
	// UnityEngine.UI.Text SceneManager::inputNameText
	Text_t9039225 * ___inputNameText_3;
	// UnityEngine.UI.Text SceneManager::errorText
	Text_t9039225 * ___errorText_4;
	// UnityEngine.GameObject SceneManager::dataMng
	GameObject_t3674682005 * ___dataMng_5;
	// System.Char[] SceneManager::delimeterCharacteres
	CharU5BU5D_t3324145743* ___delimeterCharacteres_6;

public:
	inline static int32_t get_offset_of_recordText_2() { return static_cast<int32_t>(offsetof(SceneManager_t3124981153, ___recordText_2)); }
	inline Text_t9039225 * get_recordText_2() const { return ___recordText_2; }
	inline Text_t9039225 ** get_address_of_recordText_2() { return &___recordText_2; }
	inline void set_recordText_2(Text_t9039225 * value)
	{
		___recordText_2 = value;
		Il2CppCodeGenWriteBarrier(&___recordText_2, value);
	}

	inline static int32_t get_offset_of_inputNameText_3() { return static_cast<int32_t>(offsetof(SceneManager_t3124981153, ___inputNameText_3)); }
	inline Text_t9039225 * get_inputNameText_3() const { return ___inputNameText_3; }
	inline Text_t9039225 ** get_address_of_inputNameText_3() { return &___inputNameText_3; }
	inline void set_inputNameText_3(Text_t9039225 * value)
	{
		___inputNameText_3 = value;
		Il2CppCodeGenWriteBarrier(&___inputNameText_3, value);
	}

	inline static int32_t get_offset_of_errorText_4() { return static_cast<int32_t>(offsetof(SceneManager_t3124981153, ___errorText_4)); }
	inline Text_t9039225 * get_errorText_4() const { return ___errorText_4; }
	inline Text_t9039225 ** get_address_of_errorText_4() { return &___errorText_4; }
	inline void set_errorText_4(Text_t9039225 * value)
	{
		___errorText_4 = value;
		Il2CppCodeGenWriteBarrier(&___errorText_4, value);
	}

	inline static int32_t get_offset_of_dataMng_5() { return static_cast<int32_t>(offsetof(SceneManager_t3124981153, ___dataMng_5)); }
	inline GameObject_t3674682005 * get_dataMng_5() const { return ___dataMng_5; }
	inline GameObject_t3674682005 ** get_address_of_dataMng_5() { return &___dataMng_5; }
	inline void set_dataMng_5(GameObject_t3674682005 * value)
	{
		___dataMng_5 = value;
		Il2CppCodeGenWriteBarrier(&___dataMng_5, value);
	}

	inline static int32_t get_offset_of_delimeterCharacteres_6() { return static_cast<int32_t>(offsetof(SceneManager_t3124981153, ___delimeterCharacteres_6)); }
	inline CharU5BU5D_t3324145743* get_delimeterCharacteres_6() const { return ___delimeterCharacteres_6; }
	inline CharU5BU5D_t3324145743** get_address_of_delimeterCharacteres_6() { return &___delimeterCharacteres_6; }
	inline void set_delimeterCharacteres_6(CharU5BU5D_t3324145743* value)
	{
		___delimeterCharacteres_6 = value;
		Il2CppCodeGenWriteBarrier(&___delimeterCharacteres_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
