﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Bear_Fire

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK::Params
{

// Function GA_Bear_Fire.GA_Bear_Fire_C.ExecuteUbergraph_GA_Bear_Fire
// 0x008C (0x008C - 0x0000)
struct GA_Bear_Fire_C_ExecuteUbergraph_GA_Bear_Fire final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData2;                    // 0x0004(0x0014)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag2;                // 0x0018(0x0008)()
	TDelegate<void(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;                     // 0x0030(0x0014)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;                 // 0x0044(0x0008)()
	TDelegate<void(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate2;             // 0x004C(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x005C(0x0008)()
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable2;                             // 0x0064(0x0014)()
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyGameplayEffectContainer_ReturnValue; // 0x0078(0x000C)(ConstParm, ZeroConstructor, ReferenceParm)
	class UFortAbilityTask_WaitTargetSelection*   CallFunc_WaitTargetSelection_ReturnValue;          // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Bear_Fire_C_ExecuteUbergraph_GA_Bear_Fire) == 0x000004, "Wrong alignment on GA_Bear_Fire_C_ExecuteUbergraph_GA_Bear_Fire");
static_assert(sizeof(GA_Bear_Fire_C_ExecuteUbergraph_GA_Bear_Fire) == 0x00008C, "Wrong size on GA_Bear_Fire_C_ExecuteUbergraph_GA_Bear_Fire");
static_assert(offsetof(GA_Bear_Fire_C_ExecuteUbergraph_GA_Bear_Fire, EntryPoint) == 0x000000, "Member 'GA_Bear_Fire_C_ExecuteUbergraph_GA_Bear_Fire::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Bear_Fire_C_ExecuteUbergraph_GA_Bear_Fire, K2Node_CustomEvent_TargetData2) == 0x000004, "Member 'GA_Bear_Fire_C_ExecuteUbergraph_GA_Bear_Fire::K2Node_CustomEvent_TargetData2' has a wrong offset!");
static_assert(offsetof(GA_Bear_Fire_C_ExecuteUbergraph_GA_Bear_Fire, K2Node_CustomEvent_ApplicationTag2) == 0x000018, "Member 'GA_Bear_Fire_C_ExecuteUbergraph_GA_Bear_Fire::K2Node_CustomEvent_ApplicationTag2' has a wrong offset!");
static_assert(offsetof(GA_Bear_Fire_C_ExecuteUbergraph_GA_Bear_Fire, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'GA_Bear_Fire_C_ExecuteUbergraph_GA_Bear_Fire::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Bear_Fire_C_ExecuteUbergraph_GA_Bear_Fire, K2Node_CustomEvent_TargetData) == 0x000030, "Member 'GA_Bear_Fire_C_ExecuteUbergraph_GA_Bear_Fire::K2Node_CustomEvent_TargetData' has a wrong offset!");
static_assert(offsetof(GA_Bear_Fire_C_ExecuteUbergraph_GA_Bear_Fire, K2Node_CustomEvent_ApplicationTag) == 0x000044, "Member 'GA_Bear_Fire_C_ExecuteUbergraph_GA_Bear_Fire::K2Node_CustomEvent_ApplicationTag' has a wrong offset!");
static_assert(offsetof(GA_Bear_Fire_C_ExecuteUbergraph_GA_Bear_Fire, K2Node_CreateDelegate_OutputDelegate2) == 0x00004C, "Member 'GA_Bear_Fire_C_ExecuteUbergraph_GA_Bear_Fire::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(GA_Bear_Fire_C_ExecuteUbergraph_GA_Bear_Fire, Temp_struct_Variable) == 0x00005C, "Member 'GA_Bear_Fire_C_ExecuteUbergraph_GA_Bear_Fire::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Bear_Fire_C_ExecuteUbergraph_GA_Bear_Fire, Temp_struct_Variable2) == 0x000064, "Member 'GA_Bear_Fire_C_ExecuteUbergraph_GA_Bear_Fire::Temp_struct_Variable2' has a wrong offset!");
static_assert(offsetof(GA_Bear_Fire_C_ExecuteUbergraph_GA_Bear_Fire, CallFunc_ApplyGameplayEffectContainer_ReturnValue) == 0x000078, "Member 'GA_Bear_Fire_C_ExecuteUbergraph_GA_Bear_Fire::CallFunc_ApplyGameplayEffectContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Bear_Fire_C_ExecuteUbergraph_GA_Bear_Fire, CallFunc_WaitTargetSelection_ReturnValue) == 0x000084, "Member 'GA_Bear_Fire_C_ExecuteUbergraph_GA_Bear_Fire::CallFunc_WaitTargetSelection_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Bear_Fire_C_ExecuteUbergraph_GA_Bear_Fire, CallFunc_IsValid_ReturnValue) == 0x000088, "Member 'GA_Bear_Fire_C_ExecuteUbergraph_GA_Bear_Fire::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Bear_Fire_C_ExecuteUbergraph_GA_Bear_Fire, CallFunc_K2_CommitAbility_ReturnValue) == 0x000089, "Member 'GA_Bear_Fire_C_ExecuteUbergraph_GA_Bear_Fire::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");

// Function GA_Bear_Fire.GA_Bear_Fire_C.Targeted_0B48E8B547027954C37AA1BF4D77BE31
// 0x001C (0x001C - 0x0000)
struct GA_Bear_Fire_C_Targeted_0B48E8B547027954C37AA1BF4D77BE31 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0014)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0014(0x0008)(Parm)
};
static_assert(alignof(GA_Bear_Fire_C_Targeted_0B48E8B547027954C37AA1BF4D77BE31) == 0x000004, "Wrong alignment on GA_Bear_Fire_C_Targeted_0B48E8B547027954C37AA1BF4D77BE31");
static_assert(sizeof(GA_Bear_Fire_C_Targeted_0B48E8B547027954C37AA1BF4D77BE31) == 0x00001C, "Wrong size on GA_Bear_Fire_C_Targeted_0B48E8B547027954C37AA1BF4D77BE31");
static_assert(offsetof(GA_Bear_Fire_C_Targeted_0B48E8B547027954C37AA1BF4D77BE31, TargetData) == 0x000000, "Member 'GA_Bear_Fire_C_Targeted_0B48E8B547027954C37AA1BF4D77BE31::TargetData' has a wrong offset!");
static_assert(offsetof(GA_Bear_Fire_C_Targeted_0B48E8B547027954C37AA1BF4D77BE31, ApplicationTag) == 0x000014, "Member 'GA_Bear_Fire_C_Targeted_0B48E8B547027954C37AA1BF4D77BE31::ApplicationTag' has a wrong offset!");

// Function GA_Bear_Fire.GA_Bear_Fire_C.Cancelled_0B48E8B547027954C37AA1BF4D77BE31
// 0x001C (0x001C - 0x0000)
struct GA_Bear_Fire_C_Cancelled_0B48E8B547027954C37AA1BF4D77BE31 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0014)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0014(0x0008)(Parm)
};
static_assert(alignof(GA_Bear_Fire_C_Cancelled_0B48E8B547027954C37AA1BF4D77BE31) == 0x000004, "Wrong alignment on GA_Bear_Fire_C_Cancelled_0B48E8B547027954C37AA1BF4D77BE31");
static_assert(sizeof(GA_Bear_Fire_C_Cancelled_0B48E8B547027954C37AA1BF4D77BE31) == 0x00001C, "Wrong size on GA_Bear_Fire_C_Cancelled_0B48E8B547027954C37AA1BF4D77BE31");
static_assert(offsetof(GA_Bear_Fire_C_Cancelled_0B48E8B547027954C37AA1BF4D77BE31, TargetData) == 0x000000, "Member 'GA_Bear_Fire_C_Cancelled_0B48E8B547027954C37AA1BF4D77BE31::TargetData' has a wrong offset!");
static_assert(offsetof(GA_Bear_Fire_C_Cancelled_0B48E8B547027954C37AA1BF4D77BE31, ApplicationTag) == 0x000014, "Member 'GA_Bear_Fire_C_Cancelled_0B48E8B547027954C37AA1BF4D77BE31::ApplicationTag' has a wrong offset!");

}

#pragma pack(pop)
