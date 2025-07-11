﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_PlayerHealthDamage_CameraLensEffect

#include "Basic.hpp"


#pragma pack(push, 0x4)
namespace SDK::Params
{

// Function B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C.ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect
// 0x0018 (0x0018 - 0x0000)
struct B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         K2Node_CustomEvent_NewParam;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_First_Hit;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue2;         // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect) == 0x000004, "Wrong alignment on B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect");
static_assert(sizeof(B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect) == 0x000018, "Wrong size on B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect");
static_assert(offsetof(B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect, EntryPoint) == 0x000000, "Member 'B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect, K2Node_CustomEvent_NewParam) == 0x000004, "Member 'B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect::K2Node_CustomEvent_NewParam' has a wrong offset!");
static_assert(offsetof(B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect, K2Node_CustomEvent_First_Hit) == 0x000008, "Member 'B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect::K2Node_CustomEvent_First_Hit' has a wrong offset!");
static_assert(offsetof(B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x00000C, "Member 'B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000010, "Member 'B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect, CallFunc_Subtract_FloatFloat_ReturnValue2) == 0x000014, "Member 'B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect::CallFunc_Subtract_FloatFloat_ReturnValue2' has a wrong offset!");

// Function B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C.PassParticle_Parameter
// 0x0008 (0x0008 - 0x0000)
struct B_PlayerHealthDamage_CameraLensEffect_C_PassParticle_Parameter final
{
public:
	float                                         NewParam;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          First_Hit;                                         // 0x0004(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_PlayerHealthDamage_CameraLensEffect_C_PassParticle_Parameter) == 0x000004, "Wrong alignment on B_PlayerHealthDamage_CameraLensEffect_C_PassParticle_Parameter");
static_assert(sizeof(B_PlayerHealthDamage_CameraLensEffect_C_PassParticle_Parameter) == 0x000008, "Wrong size on B_PlayerHealthDamage_CameraLensEffect_C_PassParticle_Parameter");
static_assert(offsetof(B_PlayerHealthDamage_CameraLensEffect_C_PassParticle_Parameter, NewParam) == 0x000000, "Member 'B_PlayerHealthDamage_CameraLensEffect_C_PassParticle_Parameter::NewParam' has a wrong offset!");
static_assert(offsetof(B_PlayerHealthDamage_CameraLensEffect_C_PassParticle_Parameter, First_Hit) == 0x000004, "Member 'B_PlayerHealthDamage_CameraLensEffect_C_PassParticle_Parameter::First_Hit' has a wrong offset!");

}

#pragma pack(pop)
