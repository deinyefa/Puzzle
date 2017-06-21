#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameManager
struct GameManager_t2252321495;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// PuzzlePiece[0...,0...]
struct PuzzlePieceU5BU2CU5D_t2869261204;
// PuzzlePiece
struct PuzzlePiece_t1912707670;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_GameState1561012519.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2252321495  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] GameManager::puzzlePieces
	GameObjectU5BU5D_t3057952154* ___puzzlePieces_3;
	// UnityEngine.Sprite[] GameManager::puzzleImages
	SpriteU5BU5D_t3359083662* ___puzzleImages_4;
	// PuzzlePiece[0...,0...] GameManager::Matrix
	PuzzlePieceU5BU2CU5D_t2869261204* ___Matrix_5;
	// UnityEngine.Vector3 GameManager::screenPositionToAnimate
	Vector3_t2243707580  ___screenPositionToAnimate_6;
	// PuzzlePiece GameManager::PieceToAnimate
	PuzzlePiece_t1912707670 * ___PieceToAnimate_7;
	// System.Int32 GameManager::toAnimateRow
	int32_t ___toAnimateRow_8;
	// System.Int32 GameManager::toAnimateColumn
	int32_t ___toAnimateColumn_9;
	// System.Single GameManager::animSpeed
	float ___animSpeed_10;
	// System.Int32 GameManager::puzzleIndex
	int32_t ___puzzleIndex_11;
	// GameState GameManager::gameState
	int32_t ___gameState_12;

public:
	inline static int32_t get_offset_of_puzzlePieces_3() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___puzzlePieces_3)); }
	inline GameObjectU5BU5D_t3057952154* get_puzzlePieces_3() const { return ___puzzlePieces_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_puzzlePieces_3() { return &___puzzlePieces_3; }
	inline void set_puzzlePieces_3(GameObjectU5BU5D_t3057952154* value)
	{
		___puzzlePieces_3 = value;
		Il2CppCodeGenWriteBarrier(&___puzzlePieces_3, value);
	}

	inline static int32_t get_offset_of_puzzleImages_4() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___puzzleImages_4)); }
	inline SpriteU5BU5D_t3359083662* get_puzzleImages_4() const { return ___puzzleImages_4; }
	inline SpriteU5BU5D_t3359083662** get_address_of_puzzleImages_4() { return &___puzzleImages_4; }
	inline void set_puzzleImages_4(SpriteU5BU5D_t3359083662* value)
	{
		___puzzleImages_4 = value;
		Il2CppCodeGenWriteBarrier(&___puzzleImages_4, value);
	}

	inline static int32_t get_offset_of_Matrix_5() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___Matrix_5)); }
	inline PuzzlePieceU5BU2CU5D_t2869261204* get_Matrix_5() const { return ___Matrix_5; }
	inline PuzzlePieceU5BU2CU5D_t2869261204** get_address_of_Matrix_5() { return &___Matrix_5; }
	inline void set_Matrix_5(PuzzlePieceU5BU2CU5D_t2869261204* value)
	{
		___Matrix_5 = value;
		Il2CppCodeGenWriteBarrier(&___Matrix_5, value);
	}

	inline static int32_t get_offset_of_screenPositionToAnimate_6() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___screenPositionToAnimate_6)); }
	inline Vector3_t2243707580  get_screenPositionToAnimate_6() const { return ___screenPositionToAnimate_6; }
	inline Vector3_t2243707580 * get_address_of_screenPositionToAnimate_6() { return &___screenPositionToAnimate_6; }
	inline void set_screenPositionToAnimate_6(Vector3_t2243707580  value)
	{
		___screenPositionToAnimate_6 = value;
	}

	inline static int32_t get_offset_of_PieceToAnimate_7() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___PieceToAnimate_7)); }
	inline PuzzlePiece_t1912707670 * get_PieceToAnimate_7() const { return ___PieceToAnimate_7; }
	inline PuzzlePiece_t1912707670 ** get_address_of_PieceToAnimate_7() { return &___PieceToAnimate_7; }
	inline void set_PieceToAnimate_7(PuzzlePiece_t1912707670 * value)
	{
		___PieceToAnimate_7 = value;
		Il2CppCodeGenWriteBarrier(&___PieceToAnimate_7, value);
	}

	inline static int32_t get_offset_of_toAnimateRow_8() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___toAnimateRow_8)); }
	inline int32_t get_toAnimateRow_8() const { return ___toAnimateRow_8; }
	inline int32_t* get_address_of_toAnimateRow_8() { return &___toAnimateRow_8; }
	inline void set_toAnimateRow_8(int32_t value)
	{
		___toAnimateRow_8 = value;
	}

	inline static int32_t get_offset_of_toAnimateColumn_9() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___toAnimateColumn_9)); }
	inline int32_t get_toAnimateColumn_9() const { return ___toAnimateColumn_9; }
	inline int32_t* get_address_of_toAnimateColumn_9() { return &___toAnimateColumn_9; }
	inline void set_toAnimateColumn_9(int32_t value)
	{
		___toAnimateColumn_9 = value;
	}

	inline static int32_t get_offset_of_animSpeed_10() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___animSpeed_10)); }
	inline float get_animSpeed_10() const { return ___animSpeed_10; }
	inline float* get_address_of_animSpeed_10() { return &___animSpeed_10; }
	inline void set_animSpeed_10(float value)
	{
		___animSpeed_10 = value;
	}

	inline static int32_t get_offset_of_puzzleIndex_11() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___puzzleIndex_11)); }
	inline int32_t get_puzzleIndex_11() const { return ___puzzleIndex_11; }
	inline int32_t* get_address_of_puzzleIndex_11() { return &___puzzleIndex_11; }
	inline void set_puzzleIndex_11(int32_t value)
	{
		___puzzleIndex_11 = value;
	}

	inline static int32_t get_offset_of_gameState_12() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___gameState_12)); }
	inline int32_t get_gameState_12() const { return ___gameState_12; }
	inline int32_t* get_address_of_gameState_12() { return &___gameState_12; }
	inline void set_gameState_12(int32_t value)
	{
		___gameState_12 = value;
	}
};

struct GameManager_t2252321495_StaticFields
{
public:
	// GameManager GameManager::instance
	GameManager_t2252321495 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(GameManager_t2252321495_StaticFields, ___instance_2)); }
	inline GameManager_t2252321495 * get_instance_2() const { return ___instance_2; }
	inline GameManager_t2252321495 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(GameManager_t2252321495 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
