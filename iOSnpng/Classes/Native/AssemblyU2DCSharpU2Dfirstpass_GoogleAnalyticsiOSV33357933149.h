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
// GAIHandler
struct GAIHandler_t2440579483;

#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GoogleAnalyticsV3_De2429262641.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleAnalyticsiOSV3
struct  GoogleAnalyticsiOSV3_t3357933149  : public Il2CppObject
{
public:
	// System.String GoogleAnalyticsiOSV3::trackingCode
	String_t* ___trackingCode_0;
	// System.String GoogleAnalyticsiOSV3::appName
	String_t* ___appName_1;
	// System.String GoogleAnalyticsiOSV3::bundleIdentifier
	String_t* ___bundleIdentifier_2;
	// System.String GoogleAnalyticsiOSV3::appVersion
	String_t* ___appVersion_3;
	// System.Int32 GoogleAnalyticsiOSV3::dispatchPeriod
	int32_t ___dispatchPeriod_4;
	// System.Int32 GoogleAnalyticsiOSV3::sampleFrequency
	int32_t ___sampleFrequency_5;
	// GoogleAnalyticsV3/DebugMode GoogleAnalyticsiOSV3::logLevel
	int32_t ___logLevel_6;
	// System.Boolean GoogleAnalyticsiOSV3::anonymizeIP
	bool ___anonymizeIP_7;
	// System.Boolean GoogleAnalyticsiOSV3::dryRun
	bool ___dryRun_8;
	// GAIHandler GoogleAnalyticsiOSV3::handler
	GAIHandler_t2440579483 * ___handler_9;

public:
	inline static int32_t get_offset_of_trackingCode_0() { return static_cast<int32_t>(offsetof(GoogleAnalyticsiOSV3_t3357933149, ___trackingCode_0)); }
	inline String_t* get_trackingCode_0() const { return ___trackingCode_0; }
	inline String_t** get_address_of_trackingCode_0() { return &___trackingCode_0; }
	inline void set_trackingCode_0(String_t* value)
	{
		___trackingCode_0 = value;
		Il2CppCodeGenWriteBarrier(&___trackingCode_0, value);
	}

	inline static int32_t get_offset_of_appName_1() { return static_cast<int32_t>(offsetof(GoogleAnalyticsiOSV3_t3357933149, ___appName_1)); }
	inline String_t* get_appName_1() const { return ___appName_1; }
	inline String_t** get_address_of_appName_1() { return &___appName_1; }
	inline void set_appName_1(String_t* value)
	{
		___appName_1 = value;
		Il2CppCodeGenWriteBarrier(&___appName_1, value);
	}

	inline static int32_t get_offset_of_bundleIdentifier_2() { return static_cast<int32_t>(offsetof(GoogleAnalyticsiOSV3_t3357933149, ___bundleIdentifier_2)); }
	inline String_t* get_bundleIdentifier_2() const { return ___bundleIdentifier_2; }
	inline String_t** get_address_of_bundleIdentifier_2() { return &___bundleIdentifier_2; }
	inline void set_bundleIdentifier_2(String_t* value)
	{
		___bundleIdentifier_2 = value;
		Il2CppCodeGenWriteBarrier(&___bundleIdentifier_2, value);
	}

	inline static int32_t get_offset_of_appVersion_3() { return static_cast<int32_t>(offsetof(GoogleAnalyticsiOSV3_t3357933149, ___appVersion_3)); }
	inline String_t* get_appVersion_3() const { return ___appVersion_3; }
	inline String_t** get_address_of_appVersion_3() { return &___appVersion_3; }
	inline void set_appVersion_3(String_t* value)
	{
		___appVersion_3 = value;
		Il2CppCodeGenWriteBarrier(&___appVersion_3, value);
	}

	inline static int32_t get_offset_of_dispatchPeriod_4() { return static_cast<int32_t>(offsetof(GoogleAnalyticsiOSV3_t3357933149, ___dispatchPeriod_4)); }
	inline int32_t get_dispatchPeriod_4() const { return ___dispatchPeriod_4; }
	inline int32_t* get_address_of_dispatchPeriod_4() { return &___dispatchPeriod_4; }
	inline void set_dispatchPeriod_4(int32_t value)
	{
		___dispatchPeriod_4 = value;
	}

	inline static int32_t get_offset_of_sampleFrequency_5() { return static_cast<int32_t>(offsetof(GoogleAnalyticsiOSV3_t3357933149, ___sampleFrequency_5)); }
	inline int32_t get_sampleFrequency_5() const { return ___sampleFrequency_5; }
	inline int32_t* get_address_of_sampleFrequency_5() { return &___sampleFrequency_5; }
	inline void set_sampleFrequency_5(int32_t value)
	{
		___sampleFrequency_5 = value;
	}

	inline static int32_t get_offset_of_logLevel_6() { return static_cast<int32_t>(offsetof(GoogleAnalyticsiOSV3_t3357933149, ___logLevel_6)); }
	inline int32_t get_logLevel_6() const { return ___logLevel_6; }
	inline int32_t* get_address_of_logLevel_6() { return &___logLevel_6; }
	inline void set_logLevel_6(int32_t value)
	{
		___logLevel_6 = value;
	}

	inline static int32_t get_offset_of_anonymizeIP_7() { return static_cast<int32_t>(offsetof(GoogleAnalyticsiOSV3_t3357933149, ___anonymizeIP_7)); }
	inline bool get_anonymizeIP_7() const { return ___anonymizeIP_7; }
	inline bool* get_address_of_anonymizeIP_7() { return &___anonymizeIP_7; }
	inline void set_anonymizeIP_7(bool value)
	{
		___anonymizeIP_7 = value;
	}

	inline static int32_t get_offset_of_dryRun_8() { return static_cast<int32_t>(offsetof(GoogleAnalyticsiOSV3_t3357933149, ___dryRun_8)); }
	inline bool get_dryRun_8() const { return ___dryRun_8; }
	inline bool* get_address_of_dryRun_8() { return &___dryRun_8; }
	inline void set_dryRun_8(bool value)
	{
		___dryRun_8 = value;
	}

	inline static int32_t get_offset_of_handler_9() { return static_cast<int32_t>(offsetof(GoogleAnalyticsiOSV3_t3357933149, ___handler_9)); }
	inline GAIHandler_t2440579483 * get_handler_9() const { return ___handler_9; }
	inline GAIHandler_t2440579483 ** get_address_of_handler_9() { return &___handler_9; }
	inline void set_handler_9(GAIHandler_t2440579483 * value)
	{
		___handler_9 = value;
		Il2CppCodeGenWriteBarrier(&___handler_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
