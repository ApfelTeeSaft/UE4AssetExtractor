﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Generic_ProximityMineExplosion

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK::Params
{

// Function GA_Generic_ProximityMineExplosion.GA_Generic_ProximityMineExplosion_C.ExecuteUbergraph_GA_Generic_ProximityMineExplosion
// 0x00E8 (0x00E8 - 0x0000)
struct GA_Generic_ProximityMineExplosion_C_ExecuteUbergraph_GA_Generic_ProximityMineExplosion final
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
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0084(0x0058)(ConstParm)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DD[0x3];                                       // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAbilityTask_WaitTargetSelection*   CallFunc_WaitTargetSelection_ReturnValue;          // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Generic_ProximityMineExplosion_C_ExecuteUbergraph_GA_Generic_ProximityMineExplosion) == 0x000004, "Wrong alignment on GA_Generic_ProximityMineExplosion_C_ExecuteUbergraph_GA_Generic_ProximityMineExplosion");
static_assert(sizeof(GA_Generic_ProximityMineExplosion_C_ExecuteUbergraph_GA_Generic_ProximityMineExplosion) == 0x0000E8, "Wrong size on GA_Generic_ProximityMineExplosion_C_ExecuteUbergraph_GA_Generic_ProximityMineExplosion");
static_assert(offsetof(GA_Generic_ProximityMineExplosion_C_ExecuteUbergraph_GA_Generic_ProximityMineExplosion, EntryPoint) == 0x000000, "Member 'GA_Generic_ProximityMineExplosion_C_ExecuteUbergraph_GA_Generic_ProximityMineExplosion::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Generic_ProximityMineExplosion_C_ExecuteUbergraph_GA_Generic_ProximityMineExplosion, K2Node_CustomEvent_TargetData2) == 0x000004, "Member 'GA_Generic_ProximityMineExplosion_C_ExecuteUbergraph_GA_Generic_ProximityMineExplosion::K2Node_CustomEvent_TargetData2' has a wrong offset!");
static_assert(offsetof(GA_Generic_ProximityMineExplosion_C_ExecuteUbergraph_GA_Generic_ProximityMineExplosion, K2Node_CustomEvent_ApplicationTag2) == 0x000018, "Member 'GA_Generic_ProximityMineExplosion_C_ExecuteUbergraph_GA_Generic_ProximityMineExplosion::K2Node_CustomEvent_ApplicationTag2' has a wrong offset!");
static_assert(offsetof(GA_Generic_ProximityMineExplosion_C_ExecuteUbergraph_GA_Generic_ProximityMineExplosion, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'GA_Generic_ProximityMineExplosion_C_ExecuteUbergraph_GA_Generic_ProximityMineExplosion::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Generic_ProximityMineExplosion_C_ExecuteUbergraph_GA_Generic_ProximityMineExplosion, K2Node_CustomEvent_TargetData) == 0x000030, "Member 'GA_Generic_ProximityMineExplosion_C_ExecuteUbergraph_GA_Generic_ProximityMineExplosion::K2Node_CustomEvent_TargetData' has a wrong offset!");
static_assert(offsetof(GA_Generic_ProximityMineExplosion_C_ExecuteUbergraph_GA_Generic_ProximityMineExplosion, K2Node_CustomEvent_ApplicationTag) == 0x000044, "Member 'GA_Generic_ProximityMineExplosion_C_ExecuteUbergraph_GA_Generic_ProximityMineExplosion::K2Node_CustomEvent_ApplicationTag' has a wrong offset!");
static_assert(offsetof(GA_Generic_ProximityMineExplosion_C_ExecuteUbergraph_GA_Generic_ProximityMineExplosion, K2Node_CreateDelegate_OutputDelegate2) == 0x00004C, "Member 'GA_Generic_ProximityMineExplosion_C_ExecuteUbergraph_GA_Generic_ProximityMineExplosion::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(GA_Generic_ProximityMineExplosion_C_ExecuteUbergraph_GA_Generic_ProximityMineExplosion, Temp_struct_Variable) == 0x00005C, "Member 'GA_Generic_ProximityMineExplosion_C_ExecuteUbergraph_GA_Generic_ProximityMineExplosion::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Generic_ProximityMineExplosion_C_ExecuteUbergraph_GA_Generic_ProximityMineExplosion, Temp_struct_Variable2) == 0x000064, "Member 'GA_Generic_ProximityMineExplosion_C_ExecuteUbergraph_GA_Generic_ProximityMineExplosion::Temp_struct_Variable2' has a wrong offset!");
static_assert(offsetof(GA_Generic_ProximityMineExplosion_C_ExecuteUbergraph_GA_Generic_ProximityMineExplosion, CallFunc_ApplyGameplayEffectContainer_ReturnValue) == 0x000078, "Member 'GA_Generic_ProximityMineExplosion_C_ExecuteUbergraph_GA_Generic_ProximityMineExplosion::CallFunc_ApplyGameplayEffectContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Generic_ProximityMineExplosion_C_ExecuteUbergraph_GA_Generic_ProximityMineExplosion, K2Node_Event_EventData) == 0x000084, "Member 'GA_Generic_ProximityMineExplosion_C_ExecuteUbergraph_GA_Generic_ProximityMineExplosion::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_Generic_ProximityMineExplosion_C_ExecuteUbergraph_GA_Generic_ProximityMineExplosion, CallFunc_K2_CommitAbility_ReturnValue) == 0x0000DC, "Member 'GA_Generic_ProximityMineExplosion_C_ExecuteUbergraph_GA_Generic_ProximityMineExplosion::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Generic_ProximityMineExplosion_C_ExecuteUbergraph_GA_Generic_ProximityMineExplosion, CallFunc_WaitTargetSelection_ReturnValue) == 0x0000E0, "Member 'GA_Generic_ProximityMineExplosion_C_ExecuteUbergraph_GA_Generic_ProximityMineExplosion::CallFunc_WaitTargetSelection_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Generic_ProximityMineExplosion_C_ExecuteUbergraph_GA_Generic_ProximityMineExplosion, CallFunc_IsValid_ReturnValue) == 0x0000E4, "Member 'GA_Generic_ProximityMineExplosion_C_ExecuteUbergraph_GA_Generic_ProximityMineExplosion::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function GA_Generic_ProximityMineExplosion.GA_Generic_ProximityMineExplosion_C.K2_ActivateAbilityFromEvent
// 0x0058 (0x0058 - 0x0000)
struct GA_Generic_ProximityMineExplosion_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x0058)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_Generic_ProximityMineExplosion_C_K2_ActivateAbilityFromEvent) == 0x000004, "Wrong alignment on GA_Generic_ProximityMineExplosion_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_Generic_ProximityMineExplosion_C_K2_ActivateAbilityFromEvent) == 0x000058, "Wrong size on GA_Generic_ProximityMineExplosion_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_Generic_ProximityMineExplosion_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_Generic_ProximityMineExplosion_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// Function GA_Generic_ProximityMineExplosion.GA_Generic_ProximityMineExplosion_C.Targeted_8BEAB59F4207CD7783898D81D6492C18
// 0x001C (0x001C - 0x0000)
struct GA_Generic_ProximityMineExplosion_C_Targeted_8BEAB59F4207CD7783898D81D6492C18 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0014)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0014(0x0008)(Parm)
};
static_assert(alignof(GA_Generic_ProximityMineExplosion_C_Targeted_8BEAB59F4207CD7783898D81D6492C18) == 0x000004, "Wrong alignment on GA_Generic_ProximityMineExplosion_C_Targeted_8BEAB59F4207CD7783898D81D6492C18");
static_assert(sizeof(GA_Generic_ProximityMineExplosion_C_Targeted_8BEAB59F4207CD7783898D81D6492C18) == 0x00001C, "Wrong size on GA_Generic_ProximityMineExplosion_C_Targeted_8BEAB59F4207CD7783898D81D6492C18");
static_assert(offsetof(GA_Generic_ProximityMineExplosion_C_Targeted_8BEAB59F4207CD7783898D81D6492C18, TargetData) == 0x000000, "Member 'GA_Generic_ProximityMineExplosion_C_Targeted_8BEAB59F4207CD7783898D81D6492C18::TargetData' has a wrong offset!");
static_assert(offsetof(GA_Generic_ProximityMineExplosion_C_Targeted_8BEAB59F4207CD7783898D81D6492C18, ApplicationTag) == 0x000014, "Member 'GA_Generic_ProximityMineExplosion_C_Targeted_8BEAB59F4207CD7783898D81D6492C18::ApplicationTag' has a wrong offset!");

// Function GA_Generic_ProximityMineExplosion.GA_Generic_ProximityMineExplosion_C.Cancelled_8BEAB59F4207CD7783898D81D6492C18
// 0x001C (0x001C - 0x0000)
struct GA_Generic_ProximityMineExplosion_C_Cancelled_8BEAB59F4207CD7783898D81D6492C18 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0014)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0014(0x0008)(Parm)
};
static_assert(alignof(GA_Generic_ProximityMineExplosion_C_Cancelled_8BEAB59F4207CD7783898D81D6492C18) == 0x000004, "Wrong alignment on GA_Generic_ProximityMineExplosion_C_Cancelled_8BEAB59F4207CD7783898D81D6492C18");
static_assert(sizeof(GA_Generic_ProximityMineExplosion_C_Cancelled_8BEAB59F4207CD7783898D81D6492C18) == 0x00001C, "Wrong size on GA_Generic_ProximityMineExplosion_C_Cancelled_8BEAB59F4207CD7783898D81D6492C18");
static_assert(offsetof(GA_Generic_ProximityMineExplosion_C_Cancelled_8BEAB59F4207CD7783898D81D6492C18, TargetData) == 0x000000, "Member 'GA_Generic_ProximityMineExplosion_C_Cancelled_8BEAB59F4207CD7783898D81D6492C18::TargetData' has a wrong offset!");
static_assert(offsetof(GA_Generic_ProximityMineExplosion_C_Cancelled_8BEAB59F4207CD7783898D81D6492C18, ApplicationTag) == 0x000014, "Member 'GA_Generic_ProximityMineExplosion_C_Cancelled_8BEAB59F4207CD7783898D81D6492C18::ApplicationTag' has a wrong offset!");

}

#pragma pack(pop)
