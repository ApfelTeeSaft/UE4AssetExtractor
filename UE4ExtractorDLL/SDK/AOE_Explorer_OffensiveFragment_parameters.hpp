﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AOE_Explorer_OffensiveFragment

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK::Params
{

// Function AOE_Explorer_OffensiveFragment.AOE_Explorer_OffensiveFragment_C.ExecuteUbergraph_AOE_Explorer_OffensiveFragment
// 0x0150 (0x0150 - 0x0000)
struct AOE_Explorer_OffensiveFragment_C_ExecuteUbergraph_AOE_Explorer_OffensiveFragment final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0020(0x0030)(IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult; // 0x0050(0x0080)(ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetWorldTransform_SweepHitResult;      // 0x00D0(0x0080)(ContainsInstancedReference)
};
static_assert(alignof(AOE_Explorer_OffensiveFragment_C_ExecuteUbergraph_AOE_Explorer_OffensiveFragment) == 0x000010, "Wrong alignment on AOE_Explorer_OffensiveFragment_C_ExecuteUbergraph_AOE_Explorer_OffensiveFragment");
static_assert(sizeof(AOE_Explorer_OffensiveFragment_C_ExecuteUbergraph_AOE_Explorer_OffensiveFragment) == 0x000150, "Wrong size on AOE_Explorer_OffensiveFragment_C_ExecuteUbergraph_AOE_Explorer_OffensiveFragment");
static_assert(offsetof(AOE_Explorer_OffensiveFragment_C_ExecuteUbergraph_AOE_Explorer_OffensiveFragment, EntryPoint) == 0x000000, "Member 'AOE_Explorer_OffensiveFragment_C_ExecuteUbergraph_AOE_Explorer_OffensiveFragment::EntryPoint' has a wrong offset!");
static_assert(offsetof(AOE_Explorer_OffensiveFragment_C_ExecuteUbergraph_AOE_Explorer_OffensiveFragment, CallFunc_GetInstigator_ReturnValue) == 0x000004, "Member 'AOE_Explorer_OffensiveFragment_C_ExecuteUbergraph_AOE_Explorer_OffensiveFragment::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(AOE_Explorer_OffensiveFragment_C_ExecuteUbergraph_AOE_Explorer_OffensiveFragment, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000008, "Member 'AOE_Explorer_OffensiveFragment_C_ExecuteUbergraph_AOE_Explorer_OffensiveFragment::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AOE_Explorer_OffensiveFragment_C_ExecuteUbergraph_AOE_Explorer_OffensiveFragment, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000014, "Member 'AOE_Explorer_OffensiveFragment_C_ExecuteUbergraph_AOE_Explorer_OffensiveFragment::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AOE_Explorer_OffensiveFragment_C_ExecuteUbergraph_AOE_Explorer_OffensiveFragment, CallFunc_MakeTransform_ReturnValue) == 0x000020, "Member 'AOE_Explorer_OffensiveFragment_C_ExecuteUbergraph_AOE_Explorer_OffensiveFragment::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(AOE_Explorer_OffensiveFragment_C_ExecuteUbergraph_AOE_Explorer_OffensiveFragment, CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult) == 0x000050, "Member 'AOE_Explorer_OffensiveFragment_C_ExecuteUbergraph_AOE_Explorer_OffensiveFragment::CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(AOE_Explorer_OffensiveFragment_C_ExecuteUbergraph_AOE_Explorer_OffensiveFragment, CallFunc_K2_SetWorldTransform_SweepHitResult) == 0x0000D0, "Member 'AOE_Explorer_OffensiveFragment_C_ExecuteUbergraph_AOE_Explorer_OffensiveFragment::CallFunc_K2_SetWorldTransform_SweepHitResult' has a wrong offset!");

}

#pragma pack(pop)
