#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// DataManager
struct DataManager_t1021922435;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Char[]
struct CharU5BU5D_t3324145743;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DataManager
struct  DataManager_t1021922435  : public MonoBehaviour_t667441552
{
public:
	// System.String DataManager::fileName
	String_t* ___fileName_2;
	// System.String[] DataManager::tmpString
	StringU5BU5D_t4054002952* ___tmpString_4;
	// System.Char[] DataManager::delimeterCharacteres
	CharU5BU5D_t3324145743* ___delimeterCharacteres_5;
	// System.Int32 DataManager::score
	int32_t ___score_6;
	// System.Int32 DataManager::points
	int32_t ___points_7;
	// System.String DataManager::user
	String_t* ___user_8;
	// System.String[] DataManager::recordLines
	StringU5BU5D_t4054002952* ___recordLines_9;

public:
	inline static int32_t get_offset_of_fileName_2() { return static_cast<int32_t>(offsetof(DataManager_t1021922435, ___fileName_2)); }
	inline String_t* get_fileName_2() const { return ___fileName_2; }
	inline String_t** get_address_of_fileName_2() { return &___fileName_2; }
	inline void set_fileName_2(String_t* value)
	{
		___fileName_2 = value;
		Il2CppCodeGenWriteBarrier(&___fileName_2, value);
	}

	inline static int32_t get_offset_of_tmpString_4() { return static_cast<int32_t>(offsetof(DataManager_t1021922435, ___tmpString_4)); }
	inline StringU5BU5D_t4054002952* get_tmpString_4() const { return ___tmpString_4; }
	inline StringU5BU5D_t4054002952** get_address_of_tmpString_4() { return &___tmpString_4; }
	inline void set_tmpString_4(StringU5BU5D_t4054002952* value)
	{
		___tmpString_4 = value;
		Il2CppCodeGenWriteBarrier(&___tmpString_4, value);
	}

	inline static int32_t get_offset_of_delimeterCharacteres_5() { return static_cast<int32_t>(offsetof(DataManager_t1021922435, ___delimeterCharacteres_5)); }
	inline CharU5BU5D_t3324145743* get_delimeterCharacteres_5() const { return ___delimeterCharacteres_5; }
	inline CharU5BU5D_t3324145743** get_address_of_delimeterCharacteres_5() { return &___delimeterCharacteres_5; }
	inline void set_delimeterCharacteres_5(CharU5BU5D_t3324145743* value)
	{
		___delimeterCharacteres_5 = value;
		Il2CppCodeGenWriteBarrier(&___delimeterCharacteres_5, value);
	}

	inline static int32_t get_offset_of_score_6() { return static_cast<int32_t>(offsetof(DataManager_t1021922435, ___score_6)); }
	inline int32_t get_score_6() const { return ___score_6; }
	inline int32_t* get_address_of_score_6() { return &___score_6; }
	inline void set_score_6(int32_t value)
	{
		___score_6 = value;
	}

	inline static int32_t get_offset_of_points_7() { return static_cast<int32_t>(offsetof(DataManager_t1021922435, ___points_7)); }
	inline int32_t get_points_7() const { return ___points_7; }
	inline int32_t* get_address_of_points_7() { return &___points_7; }
	inline void set_points_7(int32_t value)
	{
		___points_7 = value;
	}

	inline static int32_t get_offset_of_user_8() { return static_cast<int32_t>(offsetof(DataManager_t1021922435, ___user_8)); }
	inline String_t* get_user_8() const { return ___user_8; }
	inline String_t** get_address_of_user_8() { return &___user_8; }
	inline void set_user_8(String_t* value)
	{
		___user_8 = value;
		Il2CppCodeGenWriteBarrier(&___user_8, value);
	}

	inline static int32_t get_offset_of_recordLines_9() { return static_cast<int32_t>(offsetof(DataManager_t1021922435, ___recordLines_9)); }
	inline StringU5BU5D_t4054002952* get_recordLines_9() const { return ___recordLines_9; }
	inline StringU5BU5D_t4054002952** get_address_of_recordLines_9() { return &___recordLines_9; }
	inline void set_recordLines_9(StringU5BU5D_t4054002952* value)
	{
		___recordLines_9 = value;
		Il2CppCodeGenWriteBarrier(&___recordLines_9, value);
	}
};

struct DataManager_t1021922435_StaticFields
{
public:
	// DataManager DataManager::instance
	DataManager_t1021922435 * ___instance_3;

public:
	inline static int32_t get_offset_of_instance_3() { return static_cast<int32_t>(offsetof(DataManager_t1021922435_StaticFields, ___instance_3)); }
	inline DataManager_t1021922435 * get_instance_3() const { return ___instance_3; }
	inline DataManager_t1021922435 ** get_address_of_instance_3() { return &___instance_3; }
	inline void set_instance_3(DataManager_t1021922435 * value)
	{
		___instance_3 = value;
		Il2CppCodeGenWriteBarrier(&___instance_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
