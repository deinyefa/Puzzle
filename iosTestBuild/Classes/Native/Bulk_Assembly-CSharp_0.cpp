#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// GameManager
struct GameManager_t2252321495;
// PuzzlePiece
struct PuzzlePiece_t1912707670;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// PuzzleHolder
struct PuzzleHolder_t1926481978;
// System.Object
struct Il2CppObject;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// GameplayController
struct GameplayController_t3794343528;
// GameVariables
struct GameVariables_t2018661765;
// MainMenuController
struct MainMenuController_t2486335374;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// SelectPuzzleController
struct SelectPuzzleController_t1613127816;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DCSharp_GameManager2252321495.h"
#include "AssemblyU2DCSharp_GameManager2252321495MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "AssemblyU2DCSharp_GameVariables2018661765.h"
#include "AssemblyU2DCSharp_GameVariables2018661765MethodDeclarations.h"
#include "mscorlib_System_Int322071877448.h"
#include "Assembly-CSharp_ArrayTypes.h"
#include "AssemblyU2DCSharp_PuzzlePiece1912707670.h"
#include "mscorlib_System_Single2076509932.h"
#include "UnityEngine_UnityEngine_SceneManagement_SceneManager90660965MethodDeclarations.h"
#include "mscorlib_System_String2029220233MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time31991979MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Debug1368543263MethodDeclarations.h"
#include "UnityEngine_UnityEngine_SceneManagement_Scene1684909666.h"
#include "AssemblyU2DCSharp_GameState1561012519.h"
#include "UnityEngine_UnityEngine_SceneManagement_Scene1684909666MethodDeclarations.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Events_UnityAction_2_gen1903595547MethodDeclarations.h"
#include "UnityEngine_UnityEngine_SceneManagement_LoadSceneM2981886439.h"
#include "UnityEngine_UnityEngine_Events_UnityAction_2_gen1903595547.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_ArrayTypes.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Random1170710517MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject1756533147MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform3275118058MethodDeclarations.h"
#include "AssemblyU2DCSharp_PuzzlePiece1912707670MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Input1785128008MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera189460977MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector22243707579MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Physics2D2540166467MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object1021602117MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3819376471MethodDeclarations.h"
#include "mscorlib_System_Int322071877448MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"
#include "UnityEngine_UnityEngine_RaycastHit2D4063908774.h"
#include "mscorlib_ArrayTypes.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_Ray2469606224MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_RaycastHit2D4063908774MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "mscorlib_System_Char3454481338.h"
#include "UnityEngine_UnityEngine_Vector32243707580MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Resources339470017MethodDeclarations.h"
#include "UnityEngine_UnityEngine_SpriteRenderer1209076198MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Sprite309593783.h"
#include "UnityEngine_UnityEngine_Resources339470017.h"
#include "AssemblyU2DCSharp_PuzzleHolder1926481978.h"
#include "UnityEngine_UnityEngine_SpriteRenderer1209076198.h"
#include "AssemblyU2DCSharp_GameplayController3794343528.h"
#include "AssemblyU2DCSharp_GameplayController3794343528MethodDeclarations.h"
#include "AssemblyU2DCSharp_GameState1561012519MethodDeclarations.h"
#include "mscorlib_System_Object2689449295MethodDeclarations.h"
#include "AssemblyU2DCSharp_MainMenuController2486335374.h"
#include "AssemblyU2DCSharp_MainMenuController2486335374MethodDeclarations.h"
#include "AssemblyU2DCSharp_PuzzleHolder1926481978MethodDeclarations.h"
#include "AssemblyU2DCSharp_SelectPuzzleController1613127816.h"
#include "AssemblyU2DCSharp_SelectPuzzleController1613127816MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_EventSyste3466835263MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_EventSyste3466835263.h"

// !!0[] UnityEngine.Resources::LoadAll<System.Object>(System.String)
extern "C"  ObjectU5BU5D_t3614634134* Resources_LoadAll_TisIl2CppObject_m579936881_gshared (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method);
#define Resources_LoadAll_TisIl2CppObject_m579936881(__this /* static, unused */, p0, method) ((  ObjectU5BU5D_t3614634134* (*) (Il2CppObject * /* static, unused */, String_t*, const MethodInfo*))Resources_LoadAll_TisIl2CppObject_m579936881_gshared)(__this /* static, unused */, p0, method)
// !!0[] UnityEngine.Resources::LoadAll<UnityEngine.Sprite>(System.String)
#define Resources_LoadAll_TisSprite_t309593783_m2824615481(__this /* static, unused */, p0, method) ((  SpriteU5BU5D_t3359083662* (*) (Il2CppObject * /* static, unused */, String_t*, const MethodInfo*))Resources_LoadAll_TisIl2CppObject_m579936881_gshared)(__this /* static, unused */, p0, method)
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared (GameObject_t1756533147 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisIl2CppObject_m2812611596(__this, method) ((  Il2CppObject * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<PuzzleHolder>()
#define GameObject_GetComponent_TisPuzzleHolder_t1926481978_m2237790219(__this, method) ((  PuzzleHolder_t1926481978 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
#define GameObject_GetComponent_TisSpriteRenderer_t1209076198_m1184556631(__this, method) ((  SpriteRenderer_t1209076198 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager::.ctor()
extern Il2CppClass* GameVariables_t2018661765_il2cpp_TypeInfo_var;
extern Il2CppClass* PuzzlePieceU5BU2CU5D_t2869261204_il2cpp_TypeInfo_var;
extern const uint32_t GameManager__ctor_m293624896_MetadataUsageId;
extern "C"  void GameManager__ctor_m293624896 (GameManager_t2252321495 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager__ctor_m293624896_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameVariables_t2018661765_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GameVariables_t2018661765_StaticFields*)GameVariables_t2018661765_il2cpp_TypeInfo_var->static_fields)->get_MaxRows_0();
		int32_t L_1 = ((GameVariables_t2018661765_StaticFields*)GameVariables_t2018661765_il2cpp_TypeInfo_var->static_fields)->get_MaxColumns_1();
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)L_0, (il2cpp_array_size_t)L_1 };
		PuzzlePieceU5BU2CU5D_t2869261204* L_2 = (PuzzlePieceU5BU2CU5D_t2869261204*)GenArrayNew(PuzzlePieceU5BU2CU5D_t2869261204_il2cpp_TypeInfo_var, L_3);
		__this->set_Matrix_5((PuzzlePieceU5BU2CU5D_t2869261204*)L_2);
		__this->set_animSpeed_10((10.0f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::Awake()
extern "C"  void GameManager_Awake_m99497495 (GameManager_t2252321495 * __this, const MethodInfo* method)
{
	{
		GameManager_MakeSingleton_m634151227(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::Start()
extern "C"  void GameManager_Start_m2655388892 (GameManager_t2252321495 * __this, const MethodInfo* method)
{
	{
		__this->set_puzzleIndex_11((-1));
		return;
	}
}
// System.Void GameManager::Update()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2328219732;
extern Il2CppCodeGenString* _stringLiteral2574498909;
extern const uint32_t GameManager_Update_m969954595_MetadataUsageId;
extern "C"  void GameManager_Update_m969954595 (GameManager_t2252321495 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_Update_m969954595_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t1684909666  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		Scene_t1684909666  L_0 = SceneManager_GetActiveScene_m2964039490(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = Scene_get_name_m745914591((&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_1, _stringLiteral2328219732, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_3 = __this->get_gameState_12();
		V_1 = L_3;
		int32_t L_4 = V_1;
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_0065;
		}
	}
	{
		goto IL_0074;
	}

IL_003e:
	{
		GameManager_CheckInput_m2722772422(__this, /*hidden argument*/NULL);
		goto IL_0074;
	}

IL_0049:
	{
		PuzzlePiece_t1912707670 * L_7 = __this->get_PieceToAnimate_7();
		float L_8 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameManager_AnimateMovement_m4155149457(__this, L_7, L_8, /*hidden argument*/NULL);
		GameManager_CheckIfAnimationEnded_m236892171(__this, /*hidden argument*/NULL);
		goto IL_0074;
	}

IL_0065:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral2574498909, /*hidden argument*/NULL);
		goto IL_0074;
	}

IL_0074:
	{
	}

IL_0075:
	{
		return;
	}
}
// System.Void GameManager::OnEnable()
extern Il2CppClass* UnityAction_2_t1903595547_il2cpp_TypeInfo_var;
extern const MethodInfo* GameManager_CheckLevelName_m1780727734_MethodInfo_var;
extern const MethodInfo* UnityAction_2__ctor_m1853379185_MethodInfo_var;
extern const uint32_t GameManager_OnEnable_m3732281340_MetadataUsageId;
extern "C"  void GameManager_OnEnable_m3732281340 (GameManager_t2252321495 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_OnEnable_m3732281340_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IntPtr_t L_0;
		L_0.set_m_value_0((void*)(void*)GameManager_CheckLevelName_m1780727734_MethodInfo_var);
		UnityAction_2_t1903595547 * L_1 = (UnityAction_2_t1903595547 *)il2cpp_codegen_object_new(UnityAction_2_t1903595547_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_m1853379185(L_1, __this, L_0, /*hidden argument*/UnityAction_2__ctor_m1853379185_MethodInfo_var);
		SceneManager_add_sceneLoaded_m1191442002(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::OnDisable()
extern Il2CppClass* UnityAction_2_t1903595547_il2cpp_TypeInfo_var;
extern const MethodInfo* GameManager_CheckLevelName_m1780727734_MethodInfo_var;
extern const MethodInfo* UnityAction_2__ctor_m1853379185_MethodInfo_var;
extern const uint32_t GameManager_OnDisable_m737045227_MetadataUsageId;
extern "C"  void GameManager_OnDisable_m737045227 (GameManager_t2252321495 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_OnDisable_m737045227_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IntPtr_t L_0;
		L_0.set_m_value_0((void*)(void*)GameManager_CheckLevelName_m1780727734_MethodInfo_var);
		UnityAction_2_t1903595547 * L_1 = (UnityAction_2_t1903595547 *)il2cpp_codegen_object_new(UnityAction_2_t1903595547_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_m1853379185(L_1, __this, L_0, /*hidden argument*/UnityAction_2__ctor_m1853379185_MethodInfo_var);
		SceneManager_remove_sceneLoaded_m2086364025(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::CheckLevelName(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2328219732;
extern const uint32_t GameManager_CheckLevelName_m1780727734_MetadataUsageId;
extern "C"  void GameManager_CheckLevelName_m1780727734 (GameManager_t2252321495 * __this, Scene_t1684909666  ___scene0, int32_t ___mode1, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_CheckLevelName_m1780727734_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t1684909666  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Scene_t1684909666  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Scene_t1684909666  L_0 = SceneManager_GetActiveScene_m2964039490(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = Scene_get_name_m745914591((&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_1, _stringLiteral2328219732, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_3 = __this->get_puzzleIndex_11();
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		GameManager_LoadPuzzle_m1375368982(__this, /*hidden argument*/NULL);
		GameManager_GameStarted_m1813784837(__this, /*hidden argument*/NULL);
	}

IL_0038:
	{
	}

IL_0039:
	{
		Scene_t1684909666  L_4 = SceneManager_GetActiveScene_m2964039490(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_4;
		String_t* L_5 = Scene_get_name_m745914591((&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Inequality_m304203149(NULL /*static, unused*/, L_5, _stringLiteral2328219732, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_7 = __this->get_puzzleIndex_11();
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_0069;
		}
	}
	{
		__this->set_puzzleIndex_11((-1));
	}

IL_0069:
	{
		GameObjectU5BU5D_t3057952154* L_8 = __this->get_puzzlePieces_3();
		if (!L_8)
		{
			goto IL_007b;
		}
	}
	{
		__this->set_puzzlePieces_3((GameObjectU5BU5D_t3057952154*)NULL);
	}

IL_007b:
	{
		int32_t L_9 = __this->get_gameState_12();
		if ((((int32_t)L_9) == ((int32_t)2)))
		{
			goto IL_008e;
		}
	}
	{
		__this->set_gameState_12(2);
	}

IL_008e:
	{
	}

IL_008f:
	{
		return;
	}
}
// System.Void GameManager::GameStarted()
extern Il2CppClass* GameVariables_t2018661765_il2cpp_TypeInfo_var;
extern Il2CppClass* PuzzlePiece_t1912707670_il2cpp_TypeInfo_var;
extern const uint32_t GameManager_GameStarted_m1813784837_MetadataUsageId;
extern "C"  void GameManager_GameStarted_m1813784837 (GameManager_t2252321495 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_GameStarted_m1813784837_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector3_t2243707580  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameVariables_t2018661765_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GameVariables_t2018661765_StaticFields*)GameVariables_t2018661765_il2cpp_TypeInfo_var->static_fields)->get_MaxSize_2();
		int32_t L_1 = Random_Range_m694320887(NULL /*static, unused*/, 0, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GameObjectU5BU5D_t3057952154* L_2 = __this->get_puzzlePieces_3();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_t1756533147 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		GameObject_SetActive_m2887581199(L_5, (bool)0, /*hidden argument*/NULL);
		V_1 = 0;
		goto IL_00ef;
	}

IL_0022:
	{
		V_2 = 0;
		goto IL_00df;
	}

IL_002a:
	{
		GameObjectU5BU5D_t3057952154* L_6 = __this->get_puzzlePieces_3();
		int32_t L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GameVariables_t2018661765_il2cpp_TypeInfo_var);
		int32_t L_8 = ((GameVariables_t2018661765_StaticFields*)GameVariables_t2018661765_il2cpp_TypeInfo_var->static_fields)->get_MaxColumns_1();
		int32_t L_9 = V_2;
		NullCheck(L_6);
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7*(int32_t)L_8))+(int32_t)L_9));
		GameObject_t1756533147 * L_11 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		bool L_12 = GameObject_get_activeInHierarchy_m4242915935(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00ca;
		}
	}
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_2;
		Vector3_t2243707580  L_15 = GameManager_GetScreenCoordinatesFromViewPort_m2312392121(__this, L_13, L_14, /*hidden argument*/NULL);
		V_3 = L_15;
		GameObjectU5BU5D_t3057952154* L_16 = __this->get_puzzlePieces_3();
		int32_t L_17 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GameVariables_t2018661765_il2cpp_TypeInfo_var);
		int32_t L_18 = ((GameVariables_t2018661765_StaticFields*)GameVariables_t2018661765_il2cpp_TypeInfo_var->static_fields)->get_MaxColumns_1();
		int32_t L_19 = V_2;
		NullCheck(L_16);
		int32_t L_20 = ((int32_t)((int32_t)((int32_t)((int32_t)L_17*(int32_t)L_18))+(int32_t)L_19));
		GameObject_t1756533147 * L_21 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		Transform_t3275118058 * L_22 = GameObject_get_transform_m909382139(L_21, /*hidden argument*/NULL);
		Vector3_t2243707580  L_23 = V_3;
		NullCheck(L_22);
		Transform_set_position_m2469242620(L_22, L_23, /*hidden argument*/NULL);
		PuzzlePieceU5BU2CU5D_t2869261204* L_24 = __this->get_Matrix_5();
		int32_t L_25 = V_1;
		int32_t L_26 = V_2;
		PuzzlePiece_t1912707670 * L_27 = (PuzzlePiece_t1912707670 *)il2cpp_codegen_object_new(PuzzlePiece_t1912707670_il2cpp_TypeInfo_var);
		PuzzlePiece__ctor_m2040418337(L_27, /*hidden argument*/NULL);
		NullCheck((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_24);
		((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_24)->SetAt(L_25, L_26, L_27);
		PuzzlePieceU5BU2CU5D_t2869261204* L_28 = __this->get_Matrix_5();
		int32_t L_29 = V_1;
		int32_t L_30 = V_2;
		NullCheck((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_28);
		PuzzlePiece_t1912707670 * L_31 = ((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_28)->GetAt(L_29, L_30);
		GameObjectU5BU5D_t3057952154* L_32 = __this->get_puzzlePieces_3();
		int32_t L_33 = V_1;
		int32_t L_34 = ((GameVariables_t2018661765_StaticFields*)GameVariables_t2018661765_il2cpp_TypeInfo_var->static_fields)->get_MaxColumns_1();
		int32_t L_35 = V_2;
		NullCheck(L_32);
		int32_t L_36 = ((int32_t)((int32_t)((int32_t)((int32_t)L_33*(int32_t)L_34))+(int32_t)L_35));
		GameObject_t1756533147 * L_37 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_31);
		PuzzlePiece_set_GameObject_m3097227147(L_31, L_37, /*hidden argument*/NULL);
		PuzzlePieceU5BU2CU5D_t2869261204* L_38 = __this->get_Matrix_5();
		int32_t L_39 = V_1;
		int32_t L_40 = V_2;
		NullCheck((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_38);
		PuzzlePiece_t1912707670 * L_41 = ((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_38)->GetAt(L_39, L_40);
		int32_t L_42 = V_1;
		NullCheck(L_41);
		PuzzlePiece_set_OriginalRow_m566162842(L_41, L_42, /*hidden argument*/NULL);
		PuzzlePieceU5BU2CU5D_t2869261204* L_43 = __this->get_Matrix_5();
		int32_t L_44 = V_1;
		int32_t L_45 = V_2;
		NullCheck((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_43);
		PuzzlePiece_t1912707670 * L_46 = ((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_43)->GetAt(L_44, L_45);
		int32_t L_47 = V_2;
		NullCheck(L_46);
		PuzzlePiece_set_OriginalColumn_m2345936084(L_46, L_47, /*hidden argument*/NULL);
		goto IL_00da;
	}

IL_00ca:
	{
		PuzzlePieceU5BU2CU5D_t2869261204* L_48 = __this->get_Matrix_5();
		int32_t L_49 = V_1;
		int32_t L_50 = V_2;
		NullCheck((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_48);
		((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_48)->SetAt(L_49, L_50, (PuzzlePiece_t1912707670 *)NULL);
	}

IL_00da:
	{
		int32_t L_51 = V_2;
		V_2 = ((int32_t)((int32_t)L_51+(int32_t)1));
	}

IL_00df:
	{
		int32_t L_52 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(GameVariables_t2018661765_il2cpp_TypeInfo_var);
		int32_t L_53 = ((GameVariables_t2018661765_StaticFields*)GameVariables_t2018661765_il2cpp_TypeInfo_var->static_fields)->get_MaxColumns_1();
		if ((((int32_t)L_52) < ((int32_t)L_53)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_54 = V_1;
		V_1 = ((int32_t)((int32_t)L_54+(int32_t)1));
	}

IL_00ef:
	{
		int32_t L_55 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GameVariables_t2018661765_il2cpp_TypeInfo_var);
		int32_t L_56 = ((GameVariables_t2018661765_StaticFields*)GameVariables_t2018661765_il2cpp_TypeInfo_var->static_fields)->get_MaxRows_0();
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_0022;
		}
	}
	{
		GameManager_Shuffle_m353957361(__this, /*hidden argument*/NULL);
		__this->set_gameState_12(0);
		return;
	}
}
// System.Void GameManager::Shuffle()
extern Il2CppClass* GameVariables_t2018661765_il2cpp_TypeInfo_var;
extern const uint32_t GameManager_Shuffle_m353957361_MetadataUsageId;
extern "C"  void GameManager_Shuffle_m353957361 (GameManager_t2252321495 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_Shuffle_m353957361_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		goto IL_005f;
	}

IL_0008:
	{
		V_1 = 0;
		goto IL_004f;
	}

IL_0010:
	{
		PuzzlePieceU5BU2CU5D_t2869261204* L_0 = __this->get_Matrix_5();
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_0);
		PuzzlePiece_t1912707670 * L_3 = ((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_0)->GetAt(L_1, L_2);
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		goto IL_004b;
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameVariables_t2018661765_il2cpp_TypeInfo_var);
		int32_t L_4 = ((GameVariables_t2018661765_StaticFields*)GameVariables_t2018661765_il2cpp_TypeInfo_var->static_fields)->get_MaxRows_0();
		int32_t L_5 = Random_Range_m694320887(NULL /*static, unused*/, 0, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = ((GameVariables_t2018661765_StaticFields*)GameVariables_t2018661765_il2cpp_TypeInfo_var->static_fields)->get_MaxColumns_1();
		int32_t L_7 = Random_Range_m694320887(NULL /*static, unused*/, 0, L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = V_2;
		int32_t L_11 = V_3;
		GameManager_Swap_m3961945059(__this, L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
	}

IL_004b:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_004f:
	{
		int32_t L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GameVariables_t2018661765_il2cpp_TypeInfo_var);
		int32_t L_14 = ((GameVariables_t2018661765_StaticFields*)GameVariables_t2018661765_il2cpp_TypeInfo_var->static_fields)->get_MaxColumns_1();
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005f:
	{
		int32_t L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GameVariables_t2018661765_il2cpp_TypeInfo_var);
		int32_t L_17 = ((GameVariables_t2018661765_StaticFields*)GameVariables_t2018661765_il2cpp_TypeInfo_var->static_fields)->get_MaxRows_0();
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}
}
// System.Void GameManager::Swap(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void GameManager_Swap_m3961945059 (GameManager_t2252321495 * __this, int32_t ___row0, int32_t ___column1, int32_t ___random_row2, int32_t ___random_column3, const MethodInfo* method)
{
	PuzzlePiece_t1912707670 * V_0 = NULL;
	{
		PuzzlePieceU5BU2CU5D_t2869261204* L_0 = __this->get_Matrix_5();
		int32_t L_1 = ___row0;
		int32_t L_2 = ___column1;
		NullCheck((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_0);
		PuzzlePiece_t1912707670 * L_3 = ((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_0)->GetAt(L_1, L_2);
		V_0 = L_3;
		PuzzlePieceU5BU2CU5D_t2869261204* L_4 = __this->get_Matrix_5();
		int32_t L_5 = ___row0;
		int32_t L_6 = ___column1;
		PuzzlePieceU5BU2CU5D_t2869261204* L_7 = __this->get_Matrix_5();
		int32_t L_8 = ___random_row2;
		int32_t L_9 = ___random_column3;
		NullCheck((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_7);
		PuzzlePiece_t1912707670 * L_10 = ((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_7)->GetAt(L_8, L_9);
		NullCheck((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_4);
		((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_4)->SetAt(L_5, L_6, L_10);
		PuzzlePieceU5BU2CU5D_t2869261204* L_11 = __this->get_Matrix_5();
		int32_t L_12 = ___random_row2;
		int32_t L_13 = ___random_column3;
		PuzzlePiece_t1912707670 * L_14 = V_0;
		NullCheck((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_11);
		((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_11)->SetAt(L_12, L_13, L_14);
		PuzzlePieceU5BU2CU5D_t2869261204* L_15 = __this->get_Matrix_5();
		int32_t L_16 = ___row0;
		int32_t L_17 = ___column1;
		NullCheck((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_15);
		PuzzlePiece_t1912707670 * L_18 = ((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_15)->GetAt(L_16, L_17);
		if (!L_18)
		{
			goto IL_0097;
		}
	}
	{
		PuzzlePieceU5BU2CU5D_t2869261204* L_19 = __this->get_Matrix_5();
		int32_t L_20 = ___row0;
		int32_t L_21 = ___column1;
		NullCheck((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_19);
		PuzzlePiece_t1912707670 * L_22 = ((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_19)->GetAt(L_20, L_21);
		NullCheck(L_22);
		GameObject_t1756533147 * L_23 = PuzzlePiece_get_GameObject_m1006714766(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_t3275118058 * L_24 = GameObject_get_transform_m909382139(L_23, /*hidden argument*/NULL);
		int32_t L_25 = ___row0;
		int32_t L_26 = ___column1;
		Vector3_t2243707580  L_27 = GameManager_GetScreenCoordinatesFromViewPort_m2312392121(__this, L_25, L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_position_m2469242620(L_24, L_27, /*hidden argument*/NULL);
		PuzzlePieceU5BU2CU5D_t2869261204* L_28 = __this->get_Matrix_5();
		int32_t L_29 = ___row0;
		int32_t L_30 = ___column1;
		NullCheck((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_28);
		PuzzlePiece_t1912707670 * L_31 = ((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_28)->GetAt(L_29, L_30);
		int32_t L_32 = ___row0;
		NullCheck(L_31);
		PuzzlePiece_set_CurrentRow_m2842015666(L_31, L_32, /*hidden argument*/NULL);
		PuzzlePieceU5BU2CU5D_t2869261204* L_33 = __this->get_Matrix_5();
		int32_t L_34 = ___row0;
		int32_t L_35 = ___column1;
		NullCheck((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_33);
		PuzzlePiece_t1912707670 * L_36 = ((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_33)->GetAt(L_34, L_35);
		int32_t L_37 = ___column1;
		NullCheck(L_36);
		PuzzlePiece_set_CurrentColumn_m3659072516(L_36, L_37, /*hidden argument*/NULL);
	}

IL_0097:
	{
		PuzzlePieceU5BU2CU5D_t2869261204* L_38 = __this->get_Matrix_5();
		int32_t L_39 = ___random_row2;
		int32_t L_40 = ___random_column3;
		NullCheck((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_38);
		PuzzlePiece_t1912707670 * L_41 = ((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_38)->GetAt(L_39, L_40);
		NullCheck(L_41);
		GameObject_t1756533147 * L_42 = PuzzlePiece_get_GameObject_m1006714766(L_41, /*hidden argument*/NULL);
		NullCheck(L_42);
		Transform_t3275118058 * L_43 = GameObject_get_transform_m909382139(L_42, /*hidden argument*/NULL);
		int32_t L_44 = ___random_row2;
		int32_t L_45 = ___random_column3;
		Vector3_t2243707580  L_46 = GameManager_GetScreenCoordinatesFromViewPort_m2312392121(__this, L_44, L_45, /*hidden argument*/NULL);
		NullCheck(L_43);
		Transform_set_position_m2469242620(L_43, L_46, /*hidden argument*/NULL);
		PuzzlePieceU5BU2CU5D_t2869261204* L_47 = __this->get_Matrix_5();
		int32_t L_48 = ___random_row2;
		int32_t L_49 = ___random_column3;
		NullCheck((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_47);
		PuzzlePiece_t1912707670 * L_50 = ((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_47)->GetAt(L_48, L_49);
		int32_t L_51 = ___random_row2;
		NullCheck(L_50);
		PuzzlePiece_set_CurrentRow_m2842015666(L_50, L_51, /*hidden argument*/NULL);
		PuzzlePieceU5BU2CU5D_t2869261204* L_52 = __this->get_Matrix_5();
		int32_t L_53 = ___random_row2;
		int32_t L_54 = ___random_column3;
		NullCheck((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_52);
		PuzzlePiece_t1912707670 * L_55 = ((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_52)->GetAt(L_53, L_54);
		int32_t L_56 = ___random_column3;
		NullCheck(L_55);
		PuzzlePiece_set_CurrentColumn_m3659072516(L_55, L_56, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::CheckInput()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppClass* Physics2D_t2540166467_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppClass* CharU5BU5D_t1328083999_il2cpp_TypeInfo_var;
extern Il2CppClass* GameVariables_t2018661765_il2cpp_TypeInfo_var;
extern const uint32_t GameManager_CheckInput_m2722772422_MetadataUsageId;
extern "C"  void GameManager_CheckInput_m2722772422 (GameManager_t2252321495 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_CheckInput_m2722772422_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Ray_t2469606224  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RaycastHit2D_t4063908774  V_1;
	memset(&V_1, 0, sizeof(V_1));
	StringU5BU5D_t1642385972* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m47917805(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0264;
		}
	}
	{
		Camera_t189460977 * L_1 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_2 = Input_get_mousePosition_m146923508(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		Ray_t2469606224  L_3 = Camera_ScreenPointToRay_m614889538(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector3_t2243707580  L_4 = Ray_get_origin_m3339262500((&V_0), /*hidden argument*/NULL);
		Vector2_t2243707579  L_5 = Vector2_op_Implicit_m1064335535(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Vector3_t2243707580  L_6 = Ray_get_direction_m4059191533((&V_0), /*hidden argument*/NULL);
		Vector2_t2243707579  L_7 = Vector2_op_Implicit_m1064335535(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t2540166467_il2cpp_TypeInfo_var);
		RaycastHit2D_t4063908774  L_8 = Physics2D_Raycast_m2560154475(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		Collider2D_t646061738 * L_9 = RaycastHit2D_get_collider_m2568504212((&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Inequality_m2402264703(NULL /*static, unused*/, L_9, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0263;
		}
	}
	{
		Collider2D_t646061738 * L_11 = RaycastHit2D_get_collider_m2568504212((&V_1), /*hidden argument*/NULL);
		NullCheck(L_11);
		GameObject_t1756533147 * L_12 = Component_get_gameObject_m3105766835(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		String_t* L_13 = Object_get_name_m2079638459(L_12, /*hidden argument*/NULL);
		CharU5BU5D_t1328083999* L_14 = ((CharU5BU5D_t1328083999*)SZArrayNew(CharU5BU5D_t1328083999_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)45));
		NullCheck(L_13);
		StringU5BU5D_t1642385972* L_15 = String_Split_m3326265864(L_13, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		StringU5BU5D_t1642385972* L_16 = V_2;
		NullCheck(L_16);
		int32_t L_17 = 1;
		String_t* L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19 = Int32_Parse_m3683414232(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		StringU5BU5D_t1642385972* L_20 = V_2;
		NullCheck(L_20);
		int32_t L_21 = 2;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		int32_t L_23 = Int32_Parse_m3683414232(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		V_4 = L_23;
		V_5 = (-1);
		V_6 = (-1);
		V_7 = 0;
		goto IL_0127;
	}

IL_0091:
	{
		int32_t L_24 = V_5;
		if ((((int32_t)L_24) == ((int32_t)(-1))))
		{
			goto IL_009f;
		}
	}
	{
		goto IL_0133;
	}

IL_009f:
	{
		V_8 = 0;
		goto IL_0114;
	}

IL_00a7:
	{
		int32_t L_25 = V_5;
		if ((((int32_t)L_25) == ((int32_t)(-1))))
		{
			goto IL_00b5;
		}
	}
	{
		goto IL_0120;
	}

IL_00b5:
	{
		PuzzlePieceU5BU2CU5D_t2869261204* L_26 = __this->get_Matrix_5();
		int32_t L_27 = V_7;
		int32_t L_28 = V_8;
		NullCheck((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_26);
		PuzzlePiece_t1912707670 * L_29 = ((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_26)->GetAt(L_27, L_28);
		if (L_29)
		{
			goto IL_00ce;
		}
	}
	{
		goto IL_010e;
	}

IL_00ce:
	{
		PuzzlePieceU5BU2CU5D_t2869261204* L_30 = __this->get_Matrix_5();
		int32_t L_31 = V_7;
		int32_t L_32 = V_8;
		NullCheck((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_30);
		PuzzlePiece_t1912707670 * L_33 = ((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_30)->GetAt(L_31, L_32);
		NullCheck(L_33);
		int32_t L_34 = PuzzlePiece_get_OriginalRow_m3295416517(L_33, /*hidden argument*/NULL);
		int32_t L_35 = V_3;
		if ((!(((uint32_t)L_34) == ((uint32_t)L_35))))
		{
			goto IL_010d;
		}
	}
	{
		PuzzlePieceU5BU2CU5D_t2869261204* L_36 = __this->get_Matrix_5();
		int32_t L_37 = V_7;
		int32_t L_38 = V_8;
		NullCheck((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_36);
		PuzzlePiece_t1912707670 * L_39 = ((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_36)->GetAt(L_37, L_38);
		NullCheck(L_39);
		int32_t L_40 = PuzzlePiece_get_OriginalColumn_m1658019141(L_39, /*hidden argument*/NULL);
		int32_t L_41 = V_4;
		if ((!(((uint32_t)L_40) == ((uint32_t)L_41))))
		{
			goto IL_010d;
		}
	}
	{
		int32_t L_42 = V_7;
		V_5 = L_42;
		int32_t L_43 = V_8;
		V_6 = L_43;
	}

IL_010d:
	{
	}

IL_010e:
	{
		int32_t L_44 = V_8;
		V_8 = ((int32_t)((int32_t)L_44+(int32_t)1));
	}

IL_0114:
	{
		int32_t L_45 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(GameVariables_t2018661765_il2cpp_TypeInfo_var);
		int32_t L_46 = ((GameVariables_t2018661765_StaticFields*)GameVariables_t2018661765_il2cpp_TypeInfo_var->static_fields)->get_MaxColumns_1();
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_00a7;
		}
	}

IL_0120:
	{
		int32_t L_47 = V_7;
		V_7 = ((int32_t)((int32_t)L_47+(int32_t)1));
	}

IL_0127:
	{
		int32_t L_48 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(GameVariables_t2018661765_il2cpp_TypeInfo_var);
		int32_t L_49 = ((GameVariables_t2018661765_StaticFields*)GameVariables_t2018661765_il2cpp_TypeInfo_var->static_fields)->get_MaxRows_0();
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_0091;
		}
	}

IL_0133:
	{
		V_9 = (bool)0;
		int32_t L_50 = V_5;
		if ((((int32_t)L_50) <= ((int32_t)0)))
		{
			goto IL_0170;
		}
	}
	{
		PuzzlePieceU5BU2CU5D_t2869261204* L_51 = __this->get_Matrix_5();
		int32_t L_52 = V_5;
		int32_t L_53 = V_6;
		NullCheck((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_51);
		PuzzlePiece_t1912707670 * L_54 = ((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_51)->GetAt(((int32_t)((int32_t)L_52-(int32_t)1)), L_53);
		if (L_54)
		{
			goto IL_0170;
		}
	}
	{
		V_9 = (bool)1;
		int32_t L_55 = V_5;
		__this->set_toAnimateRow_8(((int32_t)((int32_t)L_55-(int32_t)1)));
		int32_t L_56 = V_6;
		__this->set_toAnimateColumn_9(L_56);
		goto IL_0225;
	}

IL_0170:
	{
		int32_t L_57 = V_6;
		if ((((int32_t)L_57) <= ((int32_t)0)))
		{
			goto IL_01aa;
		}
	}
	{
		PuzzlePieceU5BU2CU5D_t2869261204* L_58 = __this->get_Matrix_5();
		int32_t L_59 = V_5;
		int32_t L_60 = V_6;
		NullCheck((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_58);
		PuzzlePiece_t1912707670 * L_61 = ((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_58)->GetAt(L_59, ((int32_t)((int32_t)L_60-(int32_t)1)));
		if (L_61)
		{
			goto IL_01aa;
		}
	}
	{
		V_9 = (bool)1;
		int32_t L_62 = V_5;
		__this->set_toAnimateRow_8(L_62);
		int32_t L_63 = V_6;
		__this->set_toAnimateColumn_9(((int32_t)((int32_t)L_63-(int32_t)1)));
		goto IL_0225;
	}

IL_01aa:
	{
		int32_t L_64 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(GameVariables_t2018661765_il2cpp_TypeInfo_var);
		int32_t L_65 = ((GameVariables_t2018661765_StaticFields*)GameVariables_t2018661765_il2cpp_TypeInfo_var->static_fields)->get_MaxRows_0();
		if ((((int32_t)L_64) >= ((int32_t)((int32_t)((int32_t)L_65-(int32_t)1)))))
		{
			goto IL_01ea;
		}
	}
	{
		PuzzlePieceU5BU2CU5D_t2869261204* L_66 = __this->get_Matrix_5();
		int32_t L_67 = V_5;
		int32_t L_68 = V_6;
		NullCheck((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_66);
		PuzzlePiece_t1912707670 * L_69 = ((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_66)->GetAt(((int32_t)((int32_t)L_67+(int32_t)1)), L_68);
		if (L_69)
		{
			goto IL_01ea;
		}
	}
	{
		V_9 = (bool)1;
		int32_t L_70 = V_5;
		__this->set_toAnimateRow_8(((int32_t)((int32_t)L_70+(int32_t)1)));
		int32_t L_71 = V_6;
		__this->set_toAnimateColumn_9(L_71);
		goto IL_0225;
	}

IL_01ea:
	{
		int32_t L_72 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(GameVariables_t2018661765_il2cpp_TypeInfo_var);
		int32_t L_73 = ((GameVariables_t2018661765_StaticFields*)GameVariables_t2018661765_il2cpp_TypeInfo_var->static_fields)->get_MaxColumns_1();
		if ((((int32_t)L_72) >= ((int32_t)((int32_t)((int32_t)L_73-(int32_t)1)))))
		{
			goto IL_0225;
		}
	}
	{
		PuzzlePieceU5BU2CU5D_t2869261204* L_74 = __this->get_Matrix_5();
		int32_t L_75 = V_5;
		int32_t L_76 = V_6;
		NullCheck((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_74);
		PuzzlePiece_t1912707670 * L_77 = ((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_74)->GetAt(L_75, ((int32_t)((int32_t)L_76+(int32_t)1)));
		if (L_77)
		{
			goto IL_0225;
		}
	}
	{
		V_9 = (bool)1;
		int32_t L_78 = V_5;
		__this->set_toAnimateRow_8(L_78);
		int32_t L_79 = V_6;
		__this->set_toAnimateColumn_9(((int32_t)((int32_t)L_79+(int32_t)1)));
	}

IL_0225:
	{
		bool L_80 = V_9;
		if (!L_80)
		{
			goto IL_0262;
		}
	}
	{
		int32_t L_81 = __this->get_toAnimateRow_8();
		int32_t L_82 = __this->get_toAnimateColumn_9();
		Vector3_t2243707580  L_83 = GameManager_GetScreenCoordinatesFromViewPort_m2312392121(__this, L_81, L_82, /*hidden argument*/NULL);
		__this->set_screenPositionToAnimate_6(L_83);
		PuzzlePieceU5BU2CU5D_t2869261204* L_84 = __this->get_Matrix_5();
		int32_t L_85 = V_5;
		int32_t L_86 = V_6;
		NullCheck((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_84);
		PuzzlePiece_t1912707670 * L_87 = ((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_84)->GetAt(L_85, L_86);
		__this->set_PieceToAnimate_7(L_87);
		__this->set_gameState_12(1);
	}

IL_0262:
	{
	}

IL_0263:
	{
	}

IL_0264:
	{
		return;
	}
}
// System.Void GameManager::AnimateMovement(PuzzlePiece,System.Single)
extern "C"  void GameManager_AnimateMovement_m4155149457 (GameManager_t2252321495 * __this, PuzzlePiece_t1912707670 * ___toMove0, float ___time1, const MethodInfo* method)
{
	{
		PuzzlePiece_t1912707670 * L_0 = ___toMove0;
		NullCheck(L_0);
		GameObject_t1756533147 * L_1 = PuzzlePiece_get_GameObject_m1006714766(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_t3275118058 * L_2 = GameObject_get_transform_m909382139(L_1, /*hidden argument*/NULL);
		PuzzlePiece_t1912707670 * L_3 = ___toMove0;
		NullCheck(L_3);
		GameObject_t1756533147 * L_4 = PuzzlePiece_get_GameObject_m1006714766(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_t3275118058 * L_5 = GameObject_get_transform_m909382139(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t2243707580  L_6 = Transform_get_position_m1104419803(L_5, /*hidden argument*/NULL);
		Vector2_t2243707579  L_7 = Vector2_op_Implicit_m1064335535(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		Vector3_t2243707580  L_8 = __this->get_screenPositionToAnimate_6();
		Vector2_t2243707579  L_9 = Vector2_op_Implicit_m1064335535(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		float L_10 = __this->get_animSpeed_10();
		float L_11 = ___time1;
		Vector2_t2243707579  L_12 = Vector2_MoveTowards_m2864774657(NULL /*static, unused*/, L_7, L_9, ((float)((float)L_10*(float)L_11)), /*hidden argument*/NULL);
		Vector3_t2243707580  L_13 = Vector2_op_Implicit_m176791411(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_position_m2469242620(L_2, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::CheckIfAnimationEnded()
extern "C"  void GameManager_CheckIfAnimationEnded_m236892171 (GameManager_t2252321495 * __this, const MethodInfo* method)
{
	{
		PuzzlePiece_t1912707670 * L_0 = __this->get_PieceToAnimate_7();
		NullCheck(L_0);
		GameObject_t1756533147 * L_1 = PuzzlePiece_get_GameObject_m1006714766(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_t3275118058 * L_2 = GameObject_get_transform_m909382139(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t2243707580  L_3 = Transform_get_position_m1104419803(L_2, /*hidden argument*/NULL);
		Vector2_t2243707579  L_4 = Vector2_op_Implicit_m1064335535(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		Vector3_t2243707580  L_5 = __this->get_screenPositionToAnimate_6();
		Vector2_t2243707579  L_6 = Vector2_op_Implicit_m1064335535(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		float L_7 = Vector2_Distance_m280750759(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		if ((!(((float)L_7) < ((float)(0.1f)))))
		{
			goto IL_006c;
		}
	}
	{
		PuzzlePiece_t1912707670 * L_8 = __this->get_PieceToAnimate_7();
		NullCheck(L_8);
		int32_t L_9 = PuzzlePiece_get_CurrentRow_m3050382809(L_8, /*hidden argument*/NULL);
		PuzzlePiece_t1912707670 * L_10 = __this->get_PieceToAnimate_7();
		NullCheck(L_10);
		int32_t L_11 = PuzzlePiece_get_CurrentColumn_m257838721(L_10, /*hidden argument*/NULL);
		int32_t L_12 = __this->get_toAnimateRow_8();
		int32_t L_13 = __this->get_toAnimateColumn_9();
		GameManager_Swap_m3961945059(__this, L_9, L_11, L_12, L_13, /*hidden argument*/NULL);
		__this->set_gameState_12(0);
		GameManager_CheckForVictory_m4072445679(__this, /*hidden argument*/NULL);
	}

IL_006c:
	{
		return;
	}
}
// System.Void GameManager::CheckForVictory()
extern Il2CppClass* GameVariables_t2018661765_il2cpp_TypeInfo_var;
extern const uint32_t GameManager_CheckForVictory_m4072445679_MetadataUsageId;
extern "C"  void GameManager_CheckForVictory_m4072445679 (GameManager_t2252321495 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_CheckForVictory_m4072445679_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0095;
	}

IL_0008:
	{
		V_1 = 0;
		goto IL_0085;
	}

IL_0010:
	{
		PuzzlePieceU5BU2CU5D_t2869261204* L_0 = __this->get_Matrix_5();
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_0);
		PuzzlePiece_t1912707670 * L_3 = ((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_0)->GetAt(L_1, L_2);
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		goto IL_0081;
	}

IL_0028:
	{
		PuzzlePieceU5BU2CU5D_t2869261204* L_4 = __this->get_Matrix_5();
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_4);
		PuzzlePiece_t1912707670 * L_7 = ((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_4)->GetAt(L_5, L_6);
		NullCheck(L_7);
		int32_t L_8 = PuzzlePiece_get_CurrentRow_m3050382809(L_7, /*hidden argument*/NULL);
		PuzzlePieceU5BU2CU5D_t2869261204* L_9 = __this->get_Matrix_5();
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_9);
		PuzzlePiece_t1912707670 * L_12 = ((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_9)->GetAt(L_10, L_11);
		NullCheck(L_12);
		int32_t L_13 = PuzzlePiece_get_OriginalRow_m3295416517(L_12, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_13))))
		{
			goto IL_007a;
		}
	}
	{
		PuzzlePieceU5BU2CU5D_t2869261204* L_14 = __this->get_Matrix_5();
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		NullCheck((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_14);
		PuzzlePiece_t1912707670 * L_17 = ((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_14)->GetAt(L_15, L_16);
		NullCheck(L_17);
		int32_t L_18 = PuzzlePiece_get_CurrentColumn_m257838721(L_17, /*hidden argument*/NULL);
		PuzzlePieceU5BU2CU5D_t2869261204* L_19 = __this->get_Matrix_5();
		int32_t L_20 = V_0;
		int32_t L_21 = V_1;
		NullCheck((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_19);
		PuzzlePiece_t1912707670 * L_22 = ((PuzzlePieceU5BU2CU5D_t2869261204*)(PuzzlePieceU5BU2CU5D_t2869261204*)L_19)->GetAt(L_20, L_21);
		NullCheck(L_22);
		int32_t L_23 = PuzzlePiece_get_OriginalColumn_m1658019141(L_22, /*hidden argument*/NULL);
		if ((((int32_t)L_18) == ((int32_t)L_23)))
		{
			goto IL_0080;
		}
	}

IL_007a:
	{
		goto IL_00a7;
	}

IL_0080:
	{
	}

IL_0081:
	{
		int32_t L_24 = V_1;
		V_1 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0085:
	{
		int32_t L_25 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GameVariables_t2018661765_il2cpp_TypeInfo_var);
		int32_t L_26 = ((GameVariables_t2018661765_StaticFields*)GameVariables_t2018661765_il2cpp_TypeInfo_var->static_fields)->get_MaxColumns_1();
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_27 = V_0;
		V_0 = ((int32_t)((int32_t)L_27+(int32_t)1));
	}

IL_0095:
	{
		int32_t L_28 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GameVariables_t2018661765_il2cpp_TypeInfo_var);
		int32_t L_29 = ((GameVariables_t2018661765_StaticFields*)GameVariables_t2018661765_il2cpp_TypeInfo_var->static_fields)->get_MaxRows_0();
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0008;
		}
	}
	{
		__this->set_gameState_12(2);
	}

IL_00a7:
	{
		return;
	}
}
// UnityEngine.Vector3 GameManager::GetScreenCoordinatesFromViewPort(System.Int32,System.Int32)
extern "C"  Vector3_t2243707580  GameManager_GetScreenCoordinatesFromViewPort_m2312392121 (GameManager_t2252321495 * __this, int32_t ___row0, int32_t ___column1, const MethodInfo* method)
{
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Camera_t189460977 * L_0 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = ___row0;
		int32_t L_2 = ___column1;
		Vector3_t2243707580  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m2638739322(&L_3, ((float)((float)(0.2275f)*(float)(((float)((float)L_1))))), ((float)((float)(1.0f)-(float)((float)((float)(0.22875f)*(float)(((float)((float)L_2))))))), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t2243707580  L_4 = Camera_ViewportToWorldPoint_m3841010930(L_0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		(&V_0)->set_z_3((0.0f));
		Vector3_t2243707580  L_5 = V_0;
		V_1 = L_5;
		goto IL_003f;
	}

IL_003f:
	{
		Vector3_t2243707580  L_6 = V_1;
		return L_6;
	}
}
// System.Void GameManager::LoadPuzzle()
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Resources_LoadAll_TisSprite_t309593783_m2824615481_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisPuzzleHolder_t1926481978_m2237790219_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisSpriteRenderer_t1209076198_m1184556631_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3220575734;
extern Il2CppCodeGenString* _stringLiteral3775033632;
extern const uint32_t GameManager_LoadPuzzle_m1375368982_MetadataUsageId;
extern "C"  void GameManager_LoadPuzzle_m1375368982 (GameManager_t2252321495 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_LoadPuzzle_m1375368982_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_puzzleIndex_11();
		int32_t L_1 = L_0;
		Il2CppObject * L_2 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral3220575734, L_2, /*hidden argument*/NULL);
		SpriteU5BU5D_t3359083662* L_4 = Resources_LoadAll_TisSprite_t309593783_m2824615481(NULL /*static, unused*/, L_3, /*hidden argument*/Resources_LoadAll_TisSprite_t309593783_m2824615481_MethodInfo_var);
		__this->set_puzzleImages_4(L_4);
		GameObject_t1756533147 * L_5 = GameObject_Find_m836511350(NULL /*static, unused*/, _stringLiteral3775033632, /*hidden argument*/NULL);
		NullCheck(L_5);
		PuzzleHolder_t1926481978 * L_6 = GameObject_GetComponent_TisPuzzleHolder_t1926481978_m2237790219(L_5, /*hidden argument*/GameObject_GetComponent_TisPuzzleHolder_t1926481978_m2237790219_MethodInfo_var);
		NullCheck(L_6);
		GameObjectU5BU5D_t3057952154* L_7 = L_6->get_puzzlePieces_2();
		__this->set_puzzlePieces_3(L_7);
		V_0 = 0;
		goto IL_0062;
	}

IL_0042:
	{
		GameObjectU5BU5D_t3057952154* L_8 = __this->get_puzzlePieces_3();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		GameObject_t1756533147 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		SpriteRenderer_t1209076198 * L_12 = GameObject_GetComponent_TisSpriteRenderer_t1209076198_m1184556631(L_11, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t1209076198_m1184556631_MethodInfo_var);
		SpriteU5BU5D_t3359083662* L_13 = __this->get_puzzleImages_4();
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Sprite_t309593783 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_12);
		SpriteRenderer_set_sprite_m617298623(L_12, L_16, /*hidden argument*/NULL);
		int32_t L_17 = V_0;
		V_0 = ((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_0062:
	{
		int32_t L_18 = V_0;
		GameObjectU5BU5D_t3057952154* L_19 = __this->get_puzzlePieces_3();
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_19)->max_length)))))))
		{
			goto IL_0042;
		}
	}
	{
		return;
	}
}
// System.Void GameManager::MakeSingleton()
extern Il2CppClass* GameManager_t2252321495_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const uint32_t GameManager_MakeSingleton_m634151227_MetadataUsageId;
extern "C"  void GameManager_MakeSingleton_m634151227 (GameManager_t2252321495 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_MakeSingleton_m634151227_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameManager_t2252321495 * L_0 = ((GameManager_t2252321495_StaticFields*)GameManager_t2252321495_il2cpp_TypeInfo_var->static_fields)->get_instance_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m2402264703(NULL /*static, unused*/, L_0, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		GameObject_t1756533147 * L_2 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		goto IL_0036;
	}

IL_0023:
	{
		((GameManager_t2252321495_StaticFields*)GameManager_t2252321495_il2cpp_TypeInfo_var->static_fields)->set_instance_2(__this);
		GameObject_t1756533147 * L_3 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m2330762974(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0036:
	{
		return;
	}
}
// System.Void GameManager::SetPuzzleIndex(System.Int32)
extern "C"  void GameManager_SetPuzzleIndex_m2291803211 (GameManager_t2252321495 * __this, int32_t ___puzzleIndex0, const MethodInfo* method)
{
	{
		int32_t L_0 = ___puzzleIndex0;
		__this->set_puzzleIndex_11(L_0);
		return;
	}
}
// System.Void GameplayController::.ctor()
extern "C"  void GameplayController__ctor_m164155061 (GameplayController_t3794343528 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameplayController::LoadSelectPuzzleScene()
extern Il2CppCodeGenString* _stringLiteral578485926;
extern const uint32_t GameplayController_LoadSelectPuzzleScene_m3601341333_MetadataUsageId;
extern "C"  void GameplayController_LoadSelectPuzzleScene_m3601341333 (GameplayController_t3794343528 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameplayController_LoadSelectPuzzleScene_m3601341333_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1619949821(NULL /*static, unused*/, _stringLiteral578485926, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameVariables::.ctor()
extern "C"  void GameVariables__ctor_m3845650222 (GameVariables_t2018661765 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameVariables::.cctor()
extern Il2CppClass* GameVariables_t2018661765_il2cpp_TypeInfo_var;
extern const uint32_t GameVariables__cctor_m3548047999_MetadataUsageId;
extern "C"  void GameVariables__cctor_m3548047999 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameVariables__cctor_m3548047999_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((GameVariables_t2018661765_StaticFields*)GameVariables_t2018661765_il2cpp_TypeInfo_var->static_fields)->set_MaxRows_0(4);
		((GameVariables_t2018661765_StaticFields*)GameVariables_t2018661765_il2cpp_TypeInfo_var->static_fields)->set_MaxColumns_1(4);
		int32_t L_0 = ((GameVariables_t2018661765_StaticFields*)GameVariables_t2018661765_il2cpp_TypeInfo_var->static_fields)->get_MaxRows_0();
		int32_t L_1 = ((GameVariables_t2018661765_StaticFields*)GameVariables_t2018661765_il2cpp_TypeInfo_var->static_fields)->get_MaxColumns_1();
		((GameVariables_t2018661765_StaticFields*)GameVariables_t2018661765_il2cpp_TypeInfo_var->static_fields)->set_MaxSize_2(((int32_t)((int32_t)L_0*(int32_t)L_1)));
		return;
	}
}
// System.Void MainMenuController::.ctor()
extern "C"  void MainMenuController__ctor_m3036212531 (MainMenuController_t2486335374 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainMenuController::LoadSelectPuzzleScene()
extern Il2CppCodeGenString* _stringLiteral578485926;
extern const uint32_t MainMenuController_LoadSelectPuzzleScene_m297902771_MetadataUsageId;
extern "C"  void MainMenuController_LoadSelectPuzzleScene_m297902771 (MainMenuController_t2486335374 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainMenuController_LoadSelectPuzzleScene_m297902771_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1619949821(NULL /*static, unused*/, _stringLiteral578485926, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PuzzleHolder::.ctor()
extern "C"  void PuzzleHolder__ctor_m2694800995 (PuzzleHolder_t1926481978 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PuzzlePiece::.ctor()
extern "C"  void PuzzlePiece__ctor_m2040418337 (PuzzlePiece_t1912707670 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 PuzzlePiece::get_CurrentRow()
extern "C"  int32_t PuzzlePiece_get_CurrentRow_m3050382809 (PuzzlePiece_t1912707670 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CCurrentRowU3Ek__BackingField_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void PuzzlePiece::set_CurrentRow(System.Int32)
extern "C"  void PuzzlePiece_set_CurrentRow_m2842015666 (PuzzlePiece_t1912707670 * __this, int32_t ___value0, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CCurrentRowU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 PuzzlePiece::get_CurrentColumn()
extern "C"  int32_t PuzzlePiece_get_CurrentColumn_m257838721 (PuzzlePiece_t1912707670 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CCurrentColumnU3Ek__BackingField_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void PuzzlePiece::set_CurrentColumn(System.Int32)
extern "C"  void PuzzlePiece_set_CurrentColumn_m3659072516 (PuzzlePiece_t1912707670 * __this, int32_t ___value0, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CCurrentColumnU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 PuzzlePiece::get_OriginalRow()
extern "C"  int32_t PuzzlePiece_get_OriginalRow_m3295416517 (PuzzlePiece_t1912707670 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3COriginalRowU3Ek__BackingField_2();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void PuzzlePiece::set_OriginalRow(System.Int32)
extern "C"  void PuzzlePiece_set_OriginalRow_m566162842 (PuzzlePiece_t1912707670 * __this, int32_t ___value0, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3COriginalRowU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Int32 PuzzlePiece::get_OriginalColumn()
extern "C"  int32_t PuzzlePiece_get_OriginalColumn_m1658019141 (PuzzlePiece_t1912707670 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3COriginalColumnU3Ek__BackingField_3();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void PuzzlePiece::set_OriginalColumn(System.Int32)
extern "C"  void PuzzlePiece_set_OriginalColumn_m2345936084 (PuzzlePiece_t1912707670 * __this, int32_t ___value0, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3COriginalColumnU3Ek__BackingField_3(L_0);
		return;
	}
}
// UnityEngine.GameObject PuzzlePiece::get_GameObject()
extern "C"  GameObject_t1756533147 * PuzzlePiece_get_GameObject_m1006714766 (PuzzlePiece_t1912707670 * __this, const MethodInfo* method)
{
	GameObject_t1756533147 * V_0 = NULL;
	{
		GameObject_t1756533147 * L_0 = __this->get_U3CGameObjectU3Ek__BackingField_4();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		GameObject_t1756533147 * L_1 = V_0;
		return L_1;
	}
}
// System.Void PuzzlePiece::set_GameObject(UnityEngine.GameObject)
extern "C"  void PuzzlePiece_set_GameObject_m3097227147 (PuzzlePiece_t1912707670 * __this, GameObject_t1756533147 * ___value0, const MethodInfo* method)
{
	{
		GameObject_t1756533147 * L_0 = ___value0;
		__this->set_U3CGameObjectU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void SelectPuzzleController::.ctor()
extern "C"  void SelectPuzzleController__ctor_m568903811 (SelectPuzzleController_t1613127816 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SelectPuzzleController::SelectPuzzle()
extern Il2CppClass* EventSystem_t3466835263_il2cpp_TypeInfo_var;
extern Il2CppClass* CharU5BU5D_t1328083999_il2cpp_TypeInfo_var;
extern Il2CppClass* GameManager_t2252321495_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2328219732;
extern const uint32_t SelectPuzzleController_SelectPuzzle_m2838339239_MetadataUsageId;
extern "C"  void SelectPuzzleController_SelectPuzzle_m2838339239 (SelectPuzzleController_t1613127816 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SelectPuzzleController_SelectPuzzle_m2838339239_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1642385972* V_0 = NULL;
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t3466835263_il2cpp_TypeInfo_var);
		EventSystem_t3466835263 * L_0 = EventSystem_get_current_m319019811(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_t1756533147 * L_1 = EventSystem_get_currentSelectedGameObject_m701101735(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = Object_get_name_m2079638459(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		StringU5BU5D_t1642385972* L_3 = String_Split_m3326265864(L_2, ((CharU5BU5D_t1328083999*)SZArrayNew(CharU5BU5D_t1328083999_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		V_0 = L_3;
		StringU5BU5D_t1642385972* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 1;
		String_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		int32_t L_7 = Int32_Parse_m3683414232(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		GameManager_t2252321495 * L_8 = ((GameManager_t2252321495_StaticFields*)GameManager_t2252321495_il2cpp_TypeInfo_var->static_fields)->get_instance_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m2402264703(NULL /*static, unused*/, L_8, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		GameManager_t2252321495 * L_10 = ((GameManager_t2252321495_StaticFields*)GameManager_t2252321495_il2cpp_TypeInfo_var->static_fields)->get_instance_2();
		int32_t L_11 = V_1;
		NullCheck(L_10);
		GameManager_SetPuzzleIndex_m2291803211(L_10, L_11, /*hidden argument*/NULL);
	}

IL_0042:
	{
		SceneManager_LoadScene_m1619949821(NULL /*static, unused*/, _stringLiteral2328219732, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SelectPuzzleController::LoadMainMenuScene()
extern Il2CppCodeGenString* _stringLiteral442195652;
extern const uint32_t SelectPuzzleController_LoadMainMenuScene_m684461427_MetadataUsageId;
extern "C"  void SelectPuzzleController_LoadMainMenuScene_m684461427 (SelectPuzzleController_t1613127816 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SelectPuzzleController_LoadMainMenuScene_m684461427_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1619949821(NULL /*static, unused*/, _stringLiteral442195652, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
