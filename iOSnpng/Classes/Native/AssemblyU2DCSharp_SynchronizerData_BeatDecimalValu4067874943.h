#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Single[]
struct SingleU5BU5D_t2316563989;

#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SynchronizerData.BeatDecimalValues
struct  BeatDecimalValues_t4067874943 
{
public:

public:
};

struct BeatDecimalValues_t4067874943_StaticFields
{
public:
	// System.Single SynchronizerData.BeatDecimalValues::dottedBeatModifier
	float ___dottedBeatModifier_0;
	// System.Single[] SynchronizerData.BeatDecimalValues::values
	SingleU5BU5D_t2316563989* ___values_1;

public:
	inline static int32_t get_offset_of_dottedBeatModifier_0() { return static_cast<int32_t>(offsetof(BeatDecimalValues_t4067874943_StaticFields, ___dottedBeatModifier_0)); }
	inline float get_dottedBeatModifier_0() const { return ___dottedBeatModifier_0; }
	inline float* get_address_of_dottedBeatModifier_0() { return &___dottedBeatModifier_0; }
	inline void set_dottedBeatModifier_0(float value)
	{
		___dottedBeatModifier_0 = value;
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(BeatDecimalValues_t4067874943_StaticFields, ___values_1)); }
	inline SingleU5BU5D_t2316563989* get_values_1() const { return ___values_1; }
	inline SingleU5BU5D_t2316563989** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(SingleU5BU5D_t2316563989* value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier(&___values_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: SynchronizerData.BeatDecimalValues
struct BeatDecimalValues_t4067874943_marshaled_pinvoke
{
};
// Native definition for marshalling of: SynchronizerData.BeatDecimalValues
struct BeatDecimalValues_t4067874943_marshaled_com
{
};
