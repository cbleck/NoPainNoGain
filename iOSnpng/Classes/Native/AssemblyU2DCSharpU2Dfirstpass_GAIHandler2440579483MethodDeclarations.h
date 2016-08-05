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

// GAIHandler
struct GAIHandler_t2440579483;
// System.String
struct String_t;
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
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharpU2Dfirstpass_AppViewHitBuilder1985207662.h"
#include "AssemblyU2DCSharpU2Dfirstpass_EventHitBuilder1002727074.h"
#include "AssemblyU2DCSharpU2Dfirstpass_TransactionHitBuilde2771704294.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ItemHitBuilder4057071643.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExceptionHitBuilder2547054103.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SocialHitBuilder125430773.h"
#include "AssemblyU2DCSharpU2Dfirstpass_TimingHitBuilder471798930.h"

// System.Void GAIHandler::.ctor()
extern "C"  void GAIHandler__ctor_m1727425300 (GAIHandler_t2440579483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::setOptOut(System.Boolean)
extern "C"  void GAIHandler_setOptOut_m554723942 (Il2CppObject * __this /* static, unused */, bool ___optOut0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_setOptOut(System.Boolean)
extern "C"  void GAIHandler__setOptOut_m1723572965 (GAIHandler_t2440579483 * __this, bool ___optOut0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::setDispatchInterval(System.Int32)
extern "C"  void GAIHandler_setDispatchInterval_m4142568196 (Il2CppObject * __this /* static, unused */, int32_t ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_setDispatchInterval(System.Int32)
extern "C"  void GAIHandler__setDispatchInterval_m3889224835 (GAIHandler_t2440579483 * __this, int32_t ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::anonymizeIP()
extern "C"  void GAIHandler_anonymizeIP_m1278351213 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_anonymizeIP()
extern "C"  void GAIHandler__anonymizeIP_m2626082412 (GAIHandler_t2440579483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::setTrackUncaughtExceptions(System.Boolean)
extern "C"  void GAIHandler_setTrackUncaughtExceptions_m370857449 (Il2CppObject * __this /* static, unused */, bool ___trackUncaughtExceptions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_setTrackUncaughtExceptions(System.Boolean)
extern "C"  void GAIHandler__setTrackUncaughtExceptions_m3919956810 (GAIHandler_t2440579483 * __this, bool ___trackUncaughtExceptions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::setDryRun(System.Boolean)
extern "C"  void GAIHandler_setDryRun_m2108715435 (Il2CppObject * __this /* static, unused */, bool ___dryRun0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_setDryRun(System.Boolean)
extern "C"  void GAIHandler__setDryRun_m3277564458 (GAIHandler_t2440579483 * __this, bool ___dryRun0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::setSampleFrequency(System.Int32)
extern "C"  void GAIHandler_setSampleFrequency_m2641574065 (Il2CppObject * __this /* static, unused */, int32_t ___sampleFrequency0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_setSampleFrequency(System.Int32)
extern "C"  void GAIHandler__setSampleFrequency_m2079212370 (GAIHandler_t2440579483 * __this, int32_t ___sampleFrequency0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::setLogLevel(System.Int32)
extern "C"  void GAIHandler_setLogLevel_m2195591045 (Il2CppObject * __this /* static, unused */, int32_t ___logLevel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_setLogLevel(System.Int32)
extern "C"  void GAIHandler__setLogLevel_m3364440068 (GAIHandler_t2440579483 * __this, int32_t ___logLevel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::startSession()
extern "C"  void GAIHandler_startSession_m3457811300 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_startSession()
extern "C"  void GAIHandler__startSession_m2287805509 (GAIHandler_t2440579483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::stopSession()
extern "C"  void GAIHandler_stopSession_m3964266182 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_stopSession()
extern "C"  void GAIHandler__stopSession_m1017030085 (GAIHandler_t2440579483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GAIHandler::trackerWithName(System.String,System.String)
extern "C"  IntPtr_t GAIHandler_trackerWithName_m2820809656 (Il2CppObject * __this /* static, unused */, String_t* ___name0, String_t* ___trackingId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GAIHandler::_getTrackerWithName(System.String,System.String)
extern "C"  IntPtr_t GAIHandler__getTrackerWithName_m84897263 (GAIHandler_t2440579483 * __this, String_t* ___name0, String_t* ___trackingId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GAIHandler::trackerWithTrackingId(System.String)
extern "C"  IntPtr_t GAIHandler_trackerWithTrackingId_m1296914805 (Il2CppObject * __this /* static, unused */, String_t* ___trackingId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GAIHandler::_getTrackerWithTrackingId(System.String)
extern "C"  IntPtr_t GAIHandler__getTrackerWithTrackingId_m1955056300 (GAIHandler_t2440579483 * __this, String_t* ___trackingId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::set(System.String,System.String)
extern "C"  void GAIHandler_set_m1441279690 (Il2CppObject * __this /* static, unused */, String_t* ___parameterName0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_set(System.String,System.Object)
extern "C"  void GAIHandler__set_m1101028349 (GAIHandler_t2440579483 * __this, String_t* ___parameterName0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::setBool(System.String,System.Boolean)
extern "C"  void GAIHandler_setBool_m414953145 (Il2CppObject * __this /* static, unused */, String_t* ___parameterName0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_setBool(System.String,System.Boolean)
extern "C"  void GAIHandler__setBool_m844308664 (GAIHandler_t2440579483 * __this, String_t* ___parameterName0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GAIHandler::get(System.String)
extern "C"  String_t* GAIHandler_get_m3302569341 (Il2CppObject * __this /* static, unused */, String_t* ___parameterName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GAIHandler::_get(System.String)
extern "C"  String_t* GAIHandler__get_m3803269752 (GAIHandler_t2440579483 * __this, String_t* ___parameterName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::dispatch()
extern "C"  void GAIHandler_dispatch_m2472333834 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_dispatchHits()
extern "C"  void GAIHandler__dispatchHits_m164315595 (GAIHandler_t2440579483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::sendAppView(System.String)
extern "C"  void GAIHandler_sendAppView_m2176131378 (Il2CppObject * __this /* static, unused */, String_t* ___screenName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_sendAppView(AppViewHitBuilder)
extern "C"  void GAIHandler__sendAppView_m3263218325 (GAIHandler_t2440579483 * __this, AppViewHitBuilder_t1985207662 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::sendEvent(System.String,System.String,System.String,System.Int64)
extern "C"  void GAIHandler_sendEvent_m1794309986 (Il2CppObject * __this /* static, unused */, String_t* ___category0, String_t* ___action1, String_t* ___label2, int64_t ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_sendEvent(EventHitBuilder)
extern "C"  void GAIHandler__sendEvent_m968372397 (GAIHandler_t2440579483 * __this, EventHitBuilder_t1002727074 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::sendTransaction(System.String,System.String,System.Double,System.Double,System.Double,System.String)
extern "C"  void GAIHandler_sendTransaction_m2437246118 (Il2CppObject * __this /* static, unused */, String_t* ___transactionID0, String_t* ___affiliation1, double ___revenue2, double ___tax3, double ___shipping4, String_t* ___currencyCode5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_sendTransaction(TransactionHitBuilder)
extern "C"  void GAIHandler__sendTransaction_m1617298085 (GAIHandler_t2440579483 * __this, TransactionHitBuilder_t2771704294 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::sendItemWithTransaction(System.String,System.String,System.String,System.String,System.Double,System.Int64,System.String)
extern "C"  void GAIHandler_sendItemWithTransaction_m895457265 (Il2CppObject * __this /* static, unused */, String_t* ___transactionID0, String_t* ___name1, String_t* ___sku2, String_t* ___category3, double ___price4, int64_t ___quantity5, String_t* ___currencyCode6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_sendItemWithTransaction(ItemHitBuilder)
extern "C"  void GAIHandler__sendItemWithTransaction_m2603299795 (GAIHandler_t2440579483 * __this, ItemHitBuilder_t4057071643 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::sendException(System.String,System.Boolean)
extern "C"  void GAIHandler_sendException_m2056688628 (Il2CppObject * __this /* static, unused */, String_t* ___exceptionDescription0, bool ___isFatal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_sendException(ExceptionHitBuilder)
extern "C"  void GAIHandler__sendException_m57579075 (GAIHandler_t2440579483 * __this, ExceptionHitBuilder_t2547054103 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::sendSocial(System.String,System.String,System.String)
extern "C"  void GAIHandler_sendSocial_m4293817589 (Il2CppObject * __this /* static, unused */, String_t* ___socialNetwork0, String_t* ___socialAction1, String_t* ___targetUrl2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_sendSocial(SocialHitBuilder)
extern "C"  void GAIHandler__sendSocial_m59438577 (GAIHandler_t2440579483 * __this, SocialHitBuilder_t125430773 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::sendTiming(System.String,System.Int64,System.String,System.String)
extern "C"  void GAIHandler_sendTiming_m210820944 (Il2CppObject * __this /* static, unused */, String_t* ___timingCategory0, int64_t ___timingInterval1, String_t* ___timingName2, String_t* ___timingLabel3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_sendTiming(TimingHitBuilder)
extern "C"  void GAIHandler__sendTiming_m3263175825 (GAIHandler_t2440579483 * __this, TimingHitBuilder_t471798930 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::addCustomDimensionToDictionary(System.Int32,System.String)
extern "C"  void GAIHandler_addCustomDimensionToDictionary_m3190213314 (Il2CppObject * __this /* static, unused */, int32_t ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::addCustomMetricToDictionary(System.Int32,System.String)
extern "C"  void GAIHandler_addCustomMetricToDictionary_m1308838578 (Il2CppObject * __this /* static, unused */, int32_t ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::buildCampaignParametersDictionary(System.String,System.String,System.String,System.String,System.String)
extern "C"  void GAIHandler_buildCampaignParametersDictionary_m2862549954 (Il2CppObject * __this /* static, unused */, String_t* ___source0, String_t* ___medium1, String_t* ___name2, String_t* ___content3, String_t* ___keyword4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
