#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GoogleAnalyticsV3
struct GoogleAnalyticsV3_t1063221386;
// System.String
struct String_t;
// Field
struct Field_t67875034;
// System.Object
struct Il2CppObject;
// AppViewHitBuilder
struct AppViewHitBuilder_t1985207662;
// EventHitBuilder
struct EventHitBuilder_t1002727074;
// TransactionHitBuilder
struct TransactionHitBuilder_t2771704294;
// ItemHitBuilder
struct ItemHitBuilder_t4057071643;
// ExceptionHitBuilder
struct ExceptionHitBuilder_t2547054103;
// SocialHitBuilder
struct SocialHitBuilder_t125430773;
// TimingHitBuilder
struct TimingHitBuilder_t471798930;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_LogType4286006228.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Field67875034.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharpU2Dfirstpass_AppViewHitBuilder1985207662.h"
#include "AssemblyU2DCSharpU2Dfirstpass_EventHitBuilder1002727074.h"
#include "AssemblyU2DCSharpU2Dfirstpass_TransactionHitBuilde2771704294.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ItemHitBuilder4057071643.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExceptionHitBuilder2547054103.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SocialHitBuilder125430773.h"
#include "AssemblyU2DCSharpU2Dfirstpass_TimingHitBuilder471798930.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GoogleAnalyticsV3_De2429262641.h"

// System.Void GoogleAnalyticsV3::.ctor()
extern "C"  void GoogleAnalyticsV3__ctor_m1764073453 (GoogleAnalyticsV3_t1063221386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV3::.cctor()
extern "C"  void GoogleAnalyticsV3__cctor_m2664573280 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV3::Awake()
extern "C"  void GoogleAnalyticsV3_Awake_m2001678672 (GoogleAnalyticsV3_t1063221386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV3::Update()
extern "C"  void GoogleAnalyticsV3_Update_m578564288 (GoogleAnalyticsV3_t1063221386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV3::HandleException(System.String,System.String,UnityEngine.LogType)
extern "C"  void GoogleAnalyticsV3_HandleException_m3698549425 (GoogleAnalyticsV3_t1063221386 * __this, String_t* ___condition0, String_t* ___stackTrace1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV3::InitializeTracker()
extern "C"  void GoogleAnalyticsV3_InitializeTracker_m3431564691 (GoogleAnalyticsV3_t1063221386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV3::SetAppLevelOptOut(System.Boolean)
extern "C"  void GoogleAnalyticsV3_SetAppLevelOptOut_m1019198626 (GoogleAnalyticsV3_t1063221386 * __this, bool ___optOut0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV3::SetUserIDOverride(System.String)
extern "C"  void GoogleAnalyticsV3_SetUserIDOverride_m2641238851 (GoogleAnalyticsV3_t1063221386 * __this, String_t* ___userID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV3::ClearUserIDOverride()
extern "C"  void GoogleAnalyticsV3_ClearUserIDOverride_m2586728330 (GoogleAnalyticsV3_t1063221386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV3::DispatchHits()
extern "C"  void GoogleAnalyticsV3_DispatchHits_m3652993553 (GoogleAnalyticsV3_t1063221386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV3::StartSession()
extern "C"  void GoogleAnalyticsV3_StartSession_m1481516171 (GoogleAnalyticsV3_t1063221386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV3::StopSession()
extern "C"  void GoogleAnalyticsV3_StopSession_m436831423 (GoogleAnalyticsV3_t1063221386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV3::SetOnTracker(Field,System.Object)
extern "C"  void GoogleAnalyticsV3_SetOnTracker_m1895795992 (GoogleAnalyticsV3_t1063221386 * __this, Field_t67875034 * ___fieldName0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV3::LogScreen(System.String)
extern "C"  void GoogleAnalyticsV3_LogScreen_m2295222791 (GoogleAnalyticsV3_t1063221386 * __this, String_t* ___title0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV3::LogScreen(AppViewHitBuilder)
extern "C"  void GoogleAnalyticsV3_LogScreen_m1340883465 (GoogleAnalyticsV3_t1063221386 * __this, AppViewHitBuilder_t1985207662 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV3::LogEvent(System.String,System.String,System.String,System.Int64)
extern "C"  void GoogleAnalyticsV3_LogEvent_m111849547 (GoogleAnalyticsV3_t1063221386 * __this, String_t* ___eventCategory0, String_t* ___eventAction1, String_t* ___eventLabel2, int64_t ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV3::LogEvent(EventHitBuilder)
extern "C"  void GoogleAnalyticsV3_LogEvent_m3068954755 (GoogleAnalyticsV3_t1063221386 * __this, EventHitBuilder_t1002727074 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV3::LogTransaction(System.String,System.String,System.Double,System.Double,System.Double)
extern "C"  void GoogleAnalyticsV3_LogTransaction_m3734966433 (GoogleAnalyticsV3_t1063221386 * __this, String_t* ___transID0, String_t* ___affiliation1, double ___revenue2, double ___tax3, double ___shipping4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV3::LogTransaction(System.String,System.String,System.Double,System.Double,System.Double,System.String)
extern "C"  void GoogleAnalyticsV3_LogTransaction_m2793016093 (GoogleAnalyticsV3_t1063221386 * __this, String_t* ___transID0, String_t* ___affiliation1, double ___revenue2, double ___tax3, double ___shipping4, String_t* ___currencyCode5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV3::LogTransaction(TransactionHitBuilder)
extern "C"  void GoogleAnalyticsV3_LogTransaction_m2555857275 (GoogleAnalyticsV3_t1063221386 * __this, TransactionHitBuilder_t2771704294 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV3::LogItem(System.String,System.String,System.String,System.String,System.Double,System.Int64)
extern "C"  void GoogleAnalyticsV3_LogItem_m3336998440 (GoogleAnalyticsV3_t1063221386 * __this, String_t* ___transID0, String_t* ___name1, String_t* ___sku2, String_t* ___category3, double ___price4, int64_t ___quantity5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV3::LogItem(System.String,System.String,System.String,System.String,System.Double,System.Int64,System.String)
extern "C"  void GoogleAnalyticsV3_LogItem_m2350370916 (GoogleAnalyticsV3_t1063221386 * __this, String_t* ___transID0, String_t* ___name1, String_t* ___sku2, String_t* ___category3, double ___price4, int64_t ___quantity5, String_t* ___currencyCode6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV3::LogItem(ItemHitBuilder)
extern "C"  void GoogleAnalyticsV3_LogItem_m235134151 (GoogleAnalyticsV3_t1063221386 * __this, ItemHitBuilder_t4057071643 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV3::LogException(System.String,System.Boolean)
extern "C"  void GoogleAnalyticsV3_LogException_m260168093 (GoogleAnalyticsV3_t1063221386 * __this, String_t* ___exceptionDescription0, bool ___isFatal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV3::LogException(ExceptionHitBuilder)
extern "C"  void GoogleAnalyticsV3_LogException_m1066448921 (GoogleAnalyticsV3_t1063221386 * __this, ExceptionHitBuilder_t2547054103 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV3::LogSocial(System.String,System.String,System.String)
extern "C"  void GoogleAnalyticsV3_LogSocial_m2587982686 (GoogleAnalyticsV3_t1063221386 * __this, String_t* ___socialNetwork0, String_t* ___socialAction1, String_t* ___socialTarget2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV3::LogSocial(SocialHitBuilder)
extern "C"  void GoogleAnalyticsV3_LogSocial_m84455495 (GoogleAnalyticsV3_t1063221386 * __this, SocialHitBuilder_t125430773 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV3::LogTiming(System.String,System.Int64,System.String,System.String)
extern "C"  void GoogleAnalyticsV3_LogTiming_m3889122183 (GoogleAnalyticsV3_t1063221386 * __this, String_t* ___timingCategory0, int64_t ___timingInterval1, String_t* ___timingName2, String_t* ___timingLabel3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV3::LogTiming(TimingHitBuilder)
extern "C"  void GoogleAnalyticsV3_LogTiming_m3288192743 (GoogleAnalyticsV3_t1063221386 * __this, TimingHitBuilder_t471798930 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV3::Dispose()
extern "C"  void GoogleAnalyticsV3_Dispose_m2955756778 (GoogleAnalyticsV3_t1063221386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GoogleAnalyticsV3::belowThreshold(GoogleAnalyticsV3/DebugMode,GoogleAnalyticsV3/DebugMode)
extern "C"  bool GoogleAnalyticsV3_belowThreshold_m2783903911 (Il2CppObject * __this /* static, unused */, int32_t ___userLogLevel0, int32_t ___comparelogLevel1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleAnalyticsV3 GoogleAnalyticsV3::getInstance()
extern "C"  GoogleAnalyticsV3_t1063221386 * GoogleAnalyticsV3_getInstance_m3028293631 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
