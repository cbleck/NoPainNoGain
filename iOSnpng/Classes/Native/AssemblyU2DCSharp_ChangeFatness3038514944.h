#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_ChangeFatness_Body_Type69495656.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChangeFatness
struct  ChangeFatness_t3038514944  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Material ChangeFatness::skinnyShader
	Material_t3870600107 * ___skinnyShader_2;
	// UnityEngine.Material ChangeFatness::mediumShader
	Material_t3870600107 * ___mediumShader_3;
	// UnityEngine.Material ChangeFatness::fatShader
	Material_t3870600107 * ___fatShader_4;
	// UnityEngine.GameObject ChangeFatness::player
	GameObject_t3674682005 * ___player_5;
	// ChangeFatness/Body_Type ChangeFatness::user_bodytype
	int32_t ___user_bodytype_6;

public:
	inline static int32_t get_offset_of_skinnyShader_2() { return static_cast<int32_t>(offsetof(ChangeFatness_t3038514944, ___skinnyShader_2)); }
	inline Material_t3870600107 * get_skinnyShader_2() const { return ___skinnyShader_2; }
	inline Material_t3870600107 ** get_address_of_skinnyShader_2() { return &___skinnyShader_2; }
	inline void set_skinnyShader_2(Material_t3870600107 * value)
	{
		___skinnyShader_2 = value;
		Il2CppCodeGenWriteBarrier(&___skinnyShader_2, value);
	}

	inline static int32_t get_offset_of_mediumShader_3() { return static_cast<int32_t>(offsetof(ChangeFatness_t3038514944, ___mediumShader_3)); }
	inline Material_t3870600107 * get_mediumShader_3() const { return ___mediumShader_3; }
	inline Material_t3870600107 ** get_address_of_mediumShader_3() { return &___mediumShader_3; }
	inline void set_mediumShader_3(Material_t3870600107 * value)
	{
		___mediumShader_3 = value;
		Il2CppCodeGenWriteBarrier(&___mediumShader_3, value);
	}

	inline static int32_t get_offset_of_fatShader_4() { return static_cast<int32_t>(offsetof(ChangeFatness_t3038514944, ___fatShader_4)); }
	inline Material_t3870600107 * get_fatShader_4() const { return ___fatShader_4; }
	inline Material_t3870600107 ** get_address_of_fatShader_4() { return &___fatShader_4; }
	inline void set_fatShader_4(Material_t3870600107 * value)
	{
		___fatShader_4 = value;
		Il2CppCodeGenWriteBarrier(&___fatShader_4, value);
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(ChangeFatness_t3038514944, ___player_5)); }
	inline GameObject_t3674682005 * get_player_5() const { return ___player_5; }
	inline GameObject_t3674682005 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(GameObject_t3674682005 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier(&___player_5, value);
	}

	inline static int32_t get_offset_of_user_bodytype_6() { return static_cast<int32_t>(offsetof(ChangeFatness_t3038514944, ___user_bodytype_6)); }
	inline int32_t get_user_bodytype_6() const { return ___user_bodytype_6; }
	inline int32_t* get_address_of_user_bodytype_6() { return &___user_bodytype_6; }
	inline void set_user_bodytype_6(int32_t value)
	{
		___user_bodytype_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
