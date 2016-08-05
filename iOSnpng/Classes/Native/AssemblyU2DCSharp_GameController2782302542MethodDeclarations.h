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

// GameController
struct GameController_t2782302542;
// GameController/PauseBeatSynchronizer
struct PauseBeatSynchronizer_t810409965;
// GameController/RestartBeatSynchronizer
struct RestartBeatSynchronizer_t1486424646;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GameController_PauseBeatSynchroni810409965.h"
#include "AssemblyU2DCSharp_GameController_RestartBeatSynchr1486424646.h"

// System.Void GameController::.ctor()
extern "C"  void GameController__ctor_m4168274701 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::add_PauseBeatSync(GameController/PauseBeatSynchronizer)
extern "C"  void GameController_add_PauseBeatSync_m1023446919 (Il2CppObject * __this /* static, unused */, PauseBeatSynchronizer_t810409965 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::remove_PauseBeatSync(GameController/PauseBeatSynchronizer)
extern "C"  void GameController_remove_PauseBeatSync_m2042165526 (Il2CppObject * __this /* static, unused */, PauseBeatSynchronizer_t810409965 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::add_RestartBeatSync(GameController/RestartBeatSynchronizer)
extern "C"  void GameController_add_RestartBeatSync_m3066020007 (Il2CppObject * __this /* static, unused */, RestartBeatSynchronizer_t1486424646 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::remove_RestartBeatSync(GameController/RestartBeatSynchronizer)
extern "C"  void GameController_remove_RestartBeatSync_m2801453750 (Il2CppObject * __this /* static, unused */, RestartBeatSynchronizer_t1486424646 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::Start()
extern "C"  void GameController_Start_m3115412493 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::Update()
extern "C"  void GameController_Update_m2094358944 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameController::RunCurrentAccuracy()
extern "C"  Il2CppObject * GameController_RunCurrentAccuracy_m1681424934 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameController::ShowAccuracyText()
extern "C"  Il2CppObject * GameController_ShowAccuracyText_m2241338498 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameController::ShowMissText()
extern "C"  Il2CppObject * GameController_ShowMissText_m192745413 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
