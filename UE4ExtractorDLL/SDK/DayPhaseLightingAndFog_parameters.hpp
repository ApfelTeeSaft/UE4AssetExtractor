﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DayPhaseLightingAndFog

#include "Basic.hpp"

#include "Engine_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK::Params
{

// Function DayPhaseLightingAndFog.DayPhaseLightingAndFog_C.ExecuteUbergraph_DayPhaseLightingAndFog
// 0x0058 (0x0058 - 0x0000)
struct DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Square_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_RandomFloatInRange_ReturnValue2;          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Conv_IntToBool_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x2];                                       // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue2;         // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue3;         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue4;         // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0038(0x0004)()
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue5;         // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Enable;                         // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomFloatInRange_ReturnValue3;          // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue2;         // 0x0050(0x0004)()
	float                                         CallFunc_GetStormStrength_ReturnValue;             // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog) == 0x000004, "Wrong alignment on DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog");
static_assert(sizeof(DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog) == 0x000058, "Wrong size on DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog");
static_assert(offsetof(DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog, EntryPoint) == 0x000000, "Member 'DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog::EntryPoint' has a wrong offset!");
static_assert(offsetof(DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog, CallFunc_Square_ReturnValue) == 0x000004, "Member 'DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog::CallFunc_Square_ReturnValue' has a wrong offset!");
static_assert(offsetof(DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog, CallFunc_RandomFloatInRange_ReturnValue) == 0x000008, "Member 'DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog, CallFunc_RandomFloatInRange_ReturnValue2) == 0x00000C, "Member 'DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog::CallFunc_RandomFloatInRange_ReturnValue2' has a wrong offset!");
static_assert(offsetof(DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog, CallFunc_FFloor_ReturnValue) == 0x000010, "Member 'DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog::CallFunc_FFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000014, "Member 'DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog, CallFunc_Conv_IntToBool_ReturnValue) == 0x000018, "Member 'DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog::CallFunc_Conv_IntToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog, CallFunc_BooleanOR_ReturnValue) == 0x000019, "Member 'DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog, CallFunc_Multiply_FloatFloat_ReturnValue2) == 0x00001C, "Member 'DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog::CallFunc_Multiply_FloatFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog, CallFunc_Multiply_FloatFloat_ReturnValue3) == 0x000020, "Member 'DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog::CallFunc_Multiply_FloatFloat_ReturnValue3' has a wrong offset!");
static_assert(offsetof(DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog, K2Node_CreateDelegate_OutputDelegate) == 0x000024, "Member 'DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog, CallFunc_Multiply_FloatFloat_ReturnValue4) == 0x000034, "Member 'DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog::CallFunc_Multiply_FloatFloat_ReturnValue4' has a wrong offset!");
static_assert(offsetof(DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000038, "Member 'DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog, CallFunc_Add_FloatFloat_ReturnValue) == 0x00003C, "Member 'DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000040, "Member 'DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog, CallFunc_Multiply_FloatFloat_ReturnValue5) == 0x000044, "Member 'DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog::CallFunc_Multiply_FloatFloat_ReturnValue5' has a wrong offset!");
static_assert(offsetof(DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog, K2Node_CustomEvent_Enable) == 0x000048, "Member 'DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog::K2Node_CustomEvent_Enable' has a wrong offset!");
static_assert(offsetof(DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog, CallFunc_RandomFloatInRange_ReturnValue3) == 0x00004C, "Member 'DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog::CallFunc_RandomFloatInRange_ReturnValue3' has a wrong offset!");
static_assert(offsetof(DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog, CallFunc_K2_SetTimerDelegate_ReturnValue2) == 0x000050, "Member 'DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog::CallFunc_K2_SetTimerDelegate_ReturnValue2' has a wrong offset!");
static_assert(offsetof(DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog, CallFunc_GetStormStrength_ReturnValue) == 0x000054, "Member 'DayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog::CallFunc_GetStormStrength_ReturnValue' has a wrong offset!");

// Function DayPhaseLightingAndFog.DayPhaseLightingAndFog_C.DisableLightAndFog
// 0x0001 (0x0001 - 0x0000)
struct DayPhaseLightingAndFog_C_DisableLightAndFog final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DayPhaseLightingAndFog_C_DisableLightAndFog) == 0x000001, "Wrong alignment on DayPhaseLightingAndFog_C_DisableLightAndFog");
static_assert(sizeof(DayPhaseLightingAndFog_C_DisableLightAndFog) == 0x000001, "Wrong size on DayPhaseLightingAndFog_C_DisableLightAndFog");
static_assert(offsetof(DayPhaseLightingAndFog_C_DisableLightAndFog, Enable) == 0x000000, "Member 'DayPhaseLightingAndFog_C_DisableLightAndFog::Enable' has a wrong offset!");

}

#pragma pack(pop)
