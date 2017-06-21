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

// GameManager
struct GameManager_t2252321495;
// PuzzlePiece
struct PuzzlePiece_t1912707670;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SceneManagement_Scene1684909666.h"
#include "UnityEngine_UnityEngine_SceneManagement_LoadSceneM2981886439.h"
#include "AssemblyU2DCSharp_PuzzlePiece1912707670.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void GameManager::.ctor()
extern "C"  void GameManager__ctor_m293624896 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Awake()
extern "C"  void GameManager_Awake_m99497495 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Start()
extern "C"  void GameManager_Start_m2655388892 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Update()
extern "C"  void GameManager_Update_m969954595 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::OnEnable()
extern "C"  void GameManager_OnEnable_m3732281340 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::OnDisable()
extern "C"  void GameManager_OnDisable_m737045227 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::CheckLevelName(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
extern "C"  void GameManager_CheckLevelName_m1780727734 (GameManager_t2252321495 * __this, Scene_t1684909666  ___scene0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::GameStarted()
extern "C"  void GameManager_GameStarted_m1813784837 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Shuffle()
extern "C"  void GameManager_Shuffle_m353957361 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Swap(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void GameManager_Swap_m3961945059 (GameManager_t2252321495 * __this, int32_t ___row0, int32_t ___column1, int32_t ___random_row2, int32_t ___random_column3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::CheckInput()
extern "C"  void GameManager_CheckInput_m2722772422 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::AnimateMovement(PuzzlePiece,System.Single)
extern "C"  void GameManager_AnimateMovement_m4155149457 (GameManager_t2252321495 * __this, PuzzlePiece_t1912707670 * ___toMove0, float ___time1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::CheckIfAnimationEnded()
extern "C"  void GameManager_CheckIfAnimationEnded_m236892171 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::CheckForVictory()
extern "C"  void GameManager_CheckForVictory_m4072445679 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 GameManager::GetScreenCoordinatesFromViewPort(System.Int32,System.Int32)
extern "C"  Vector3_t2243707580  GameManager_GetScreenCoordinatesFromViewPort_m2312392121 (GameManager_t2252321495 * __this, int32_t ___row0, int32_t ___column1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::LoadPuzzle()
extern "C"  void GameManager_LoadPuzzle_m1375368982 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::MakeSingleton()
extern "C"  void GameManager_MakeSingleton_m634151227 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::SetPuzzleIndex(System.Int32)
extern "C"  void GameManager_SetPuzzleIndex_m2291803211 (GameManager_t2252321495 * __this, int32_t ___puzzleIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
