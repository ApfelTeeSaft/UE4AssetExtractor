﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_HuskFrustration

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK::Params
{

// Function GAB_HuskFrustration.GAB_HuskFrustration_C.ExecuteUbergraph_GAB_HuskFrustration
// 0x00B0 (0x00B0 - 0x0000)
struct GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData3;                    // 0x0004(0x0014)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag3;                // 0x0018(0x0008)()
	TDelegate<void(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData2;                    // 0x0030(0x0014)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag2;                // 0x0044(0x0008)()
	TDelegate<void(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate2;             // 0x004C(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;                     // 0x005C(0x0014)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;                 // 0x0070(0x0008)()
	TDelegate<void(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate3;             // 0x0078(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x0088(0x0008)()
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable2;                             // 0x0090(0x0014)()
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A5[0x3];                                       // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue; // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration) == 0x000004, "Wrong alignment on GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration");
static_assert(sizeof(GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration) == 0x0000B0, "Wrong size on GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration");
static_assert(offsetof(GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration, EntryPoint) == 0x000000, "Member 'GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration, K2Node_CustomEvent_TargetData3) == 0x000004, "Member 'GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration::K2Node_CustomEvent_TargetData3' has a wrong offset!");
static_assert(offsetof(GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration, K2Node_CustomEvent_ApplicationTag3) == 0x000018, "Member 'GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration::K2Node_CustomEvent_ApplicationTag3' has a wrong offset!");
static_assert(offsetof(GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration, K2Node_CustomEvent_TargetData2) == 0x000030, "Member 'GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration::K2Node_CustomEvent_TargetData2' has a wrong offset!");
static_assert(offsetof(GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration, K2Node_CustomEvent_ApplicationTag2) == 0x000044, "Member 'GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration::K2Node_CustomEvent_ApplicationTag2' has a wrong offset!");
static_assert(offsetof(GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration, K2Node_CreateDelegate_OutputDelegate2) == 0x00004C, "Member 'GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration, K2Node_CustomEvent_TargetData) == 0x00005C, "Member 'GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration::K2Node_CustomEvent_TargetData' has a wrong offset!");
static_assert(offsetof(GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration, K2Node_CustomEvent_ApplicationTag) == 0x000070, "Member 'GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration::K2Node_CustomEvent_ApplicationTag' has a wrong offset!");
static_assert(offsetof(GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration, K2Node_CreateDelegate_OutputDelegate3) == 0x000078, "Member 'GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration, Temp_struct_Variable) == 0x000088, "Member 'GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration, Temp_struct_Variable2) == 0x000090, "Member 'GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration::Temp_struct_Variable2' has a wrong offset!");
static_assert(offsetof(GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration, CallFunc_K2_CommitAbility_ReturnValue) == 0x0000A4, "Member 'GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration, CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue) == 0x0000A8, "Member 'GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration::CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration, CallFunc_IsValid_ReturnValue) == 0x0000AC, "Member 'GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function GAB_HuskFrustration.GAB_HuskFrustration_C.Triggered_4426349D48BB9D962857A490453AEC50
// 0x001C (0x001C - 0x0000)
struct GAB_HuskFrustration_C_Triggered_4426349D48BB9D962857A490453AEC50 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0014)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0014(0x0008)(Parm)
};
static_assert(alignof(GAB_HuskFrustration_C_Triggered_4426349D48BB9D962857A490453AEC50) == 0x000004, "Wrong alignment on GAB_HuskFrustration_C_Triggered_4426349D48BB9D962857A490453AEC50");
static_assert(sizeof(GAB_HuskFrustration_C_Triggered_4426349D48BB9D962857A490453AEC50) == 0x00001C, "Wrong size on GAB_HuskFrustration_C_Triggered_4426349D48BB9D962857A490453AEC50");
static_assert(offsetof(GAB_HuskFrustration_C_Triggered_4426349D48BB9D962857A490453AEC50, TargetData) == 0x000000, "Member 'GAB_HuskFrustration_C_Triggered_4426349D48BB9D962857A490453AEC50::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_HuskFrustration_C_Triggered_4426349D48BB9D962857A490453AEC50, ApplicationTag) == 0x000014, "Member 'GAB_HuskFrustration_C_Triggered_4426349D48BB9D962857A490453AEC50::ApplicationTag' has a wrong offset!");

// Function GAB_HuskFrustration.GAB_HuskFrustration_C.Cancelled_4426349D48BB9D962857A490453AEC50
// 0x001C (0x001C - 0x0000)
struct GAB_HuskFrustration_C_Cancelled_4426349D48BB9D962857A490453AEC50 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0014)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0014(0x0008)(Parm)
};
static_assert(alignof(GAB_HuskFrustration_C_Cancelled_4426349D48BB9D962857A490453AEC50) == 0x000004, "Wrong alignment on GAB_HuskFrustration_C_Cancelled_4426349D48BB9D962857A490453AEC50");
static_assert(sizeof(GAB_HuskFrustration_C_Cancelled_4426349D48BB9D962857A490453AEC50) == 0x00001C, "Wrong size on GAB_HuskFrustration_C_Cancelled_4426349D48BB9D962857A490453AEC50");
static_assert(offsetof(GAB_HuskFrustration_C_Cancelled_4426349D48BB9D962857A490453AEC50, TargetData) == 0x000000, "Member 'GAB_HuskFrustration_C_Cancelled_4426349D48BB9D962857A490453AEC50::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_HuskFrustration_C_Cancelled_4426349D48BB9D962857A490453AEC50, ApplicationTag) == 0x000014, "Member 'GAB_HuskFrustration_C_Cancelled_4426349D48BB9D962857A490453AEC50::ApplicationTag' has a wrong offset!");

// Function GAB_HuskFrustration.GAB_HuskFrustration_C.Completed_4426349D48BB9D962857A490453AEC50
// 0x001C (0x001C - 0x0000)
struct GAB_HuskFrustration_C_Completed_4426349D48BB9D962857A490453AEC50 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0014)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0014(0x0008)(Parm)
};
static_assert(alignof(GAB_HuskFrustration_C_Completed_4426349D48BB9D962857A490453AEC50) == 0x000004, "Wrong alignment on GAB_HuskFrustration_C_Completed_4426349D48BB9D962857A490453AEC50");
static_assert(sizeof(GAB_HuskFrustration_C_Completed_4426349D48BB9D962857A490453AEC50) == 0x00001C, "Wrong size on GAB_HuskFrustration_C_Completed_4426349D48BB9D962857A490453AEC50");
static_assert(offsetof(GAB_HuskFrustration_C_Completed_4426349D48BB9D962857A490453AEC50, TargetData) == 0x000000, "Member 'GAB_HuskFrustration_C_Completed_4426349D48BB9D962857A490453AEC50::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_HuskFrustration_C_Completed_4426349D48BB9D962857A490453AEC50, ApplicationTag) == 0x000014, "Member 'GAB_HuskFrustration_C_Completed_4426349D48BB9D962857A490453AEC50::ApplicationTag' has a wrong offset!");

}

#pragma pack(pop)
