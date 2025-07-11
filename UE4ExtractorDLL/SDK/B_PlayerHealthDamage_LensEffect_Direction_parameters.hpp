﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_PlayerHealthDamage_LensEffect_Direction

#include "Basic.hpp"


#pragma pack(push, 0x4)
namespace SDK::Params
{

// Function B_PlayerHealthDamage_LensEffect_Direction.B_PlayerHealthDamage_LensEffect_Direction_C.ExecuteUbergraph_B_PlayerHealthDamage_LensEffect_Direction
// 0x0008 (0x0008 - 0x0000)
struct B_PlayerHealthDamage_LensEffect_Direction_C_ExecuteUbergraph_B_PlayerHealthDamage_LensEffect_Direction final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         K2Node_CustomEvent_Health_Percent;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_PlayerHealthDamage_LensEffect_Direction_C_ExecuteUbergraph_B_PlayerHealthDamage_LensEffect_Direction) == 0x000004, "Wrong alignment on B_PlayerHealthDamage_LensEffect_Direction_C_ExecuteUbergraph_B_PlayerHealthDamage_LensEffect_Direction");
static_assert(sizeof(B_PlayerHealthDamage_LensEffect_Direction_C_ExecuteUbergraph_B_PlayerHealthDamage_LensEffect_Direction) == 0x000008, "Wrong size on B_PlayerHealthDamage_LensEffect_Direction_C_ExecuteUbergraph_B_PlayerHealthDamage_LensEffect_Direction");
static_assert(offsetof(B_PlayerHealthDamage_LensEffect_Direction_C_ExecuteUbergraph_B_PlayerHealthDamage_LensEffect_Direction, EntryPoint) == 0x000000, "Member 'B_PlayerHealthDamage_LensEffect_Direction_C_ExecuteUbergraph_B_PlayerHealthDamage_LensEffect_Direction::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_PlayerHealthDamage_LensEffect_Direction_C_ExecuteUbergraph_B_PlayerHealthDamage_LensEffect_Direction, K2Node_CustomEvent_Health_Percent) == 0x000004, "Member 'B_PlayerHealthDamage_LensEffect_Direction_C_ExecuteUbergraph_B_PlayerHealthDamage_LensEffect_Direction::K2Node_CustomEvent_Health_Percent' has a wrong offset!");

// Function B_PlayerHealthDamage_LensEffect_Direction.B_PlayerHealthDamage_LensEffect_Direction_C.PassParticle_Parameter
// 0x0004 (0x0004 - 0x0000)
struct B_PlayerHealthDamage_LensEffect_Direction_C_PassParticle_Parameter final
{
public:
	float                                         Health_Percent;                                    // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_PlayerHealthDamage_LensEffect_Direction_C_PassParticle_Parameter) == 0x000004, "Wrong alignment on B_PlayerHealthDamage_LensEffect_Direction_C_PassParticle_Parameter");
static_assert(sizeof(B_PlayerHealthDamage_LensEffect_Direction_C_PassParticle_Parameter) == 0x000004, "Wrong size on B_PlayerHealthDamage_LensEffect_Direction_C_PassParticle_Parameter");
static_assert(offsetof(B_PlayerHealthDamage_LensEffect_Direction_C_PassParticle_Parameter, Health_Percent) == 0x000000, "Member 'B_PlayerHealthDamage_LensEffect_Direction_C_PassParticle_Parameter::Health_Percent' has a wrong offset!");

}

#pragma pack(pop)
