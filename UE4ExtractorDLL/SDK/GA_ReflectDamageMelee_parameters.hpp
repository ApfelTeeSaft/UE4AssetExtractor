﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ReflectDamageMelee

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK::Params
{

// Function GA_ReflectDamageMelee.GA_ReflectDamageMelee_C.ExecuteUbergraph_GA_ReflectDamageMelee
// 0x0060 (0x0060 - 0x0000)
struct GA_ReflectDamageMelee_C_ExecuteUbergraph_GA_ReflectDamageMelee final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0004(0x0058)(ConstParm)
	bool                                          CallFunc_DoesContainerMatchAnyTagsInContainer_ReturnValue; // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_ReflectDamageMelee_C_ExecuteUbergraph_GA_ReflectDamageMelee) == 0x000004, "Wrong alignment on GA_ReflectDamageMelee_C_ExecuteUbergraph_GA_ReflectDamageMelee");
static_assert(sizeof(GA_ReflectDamageMelee_C_ExecuteUbergraph_GA_ReflectDamageMelee) == 0x000060, "Wrong size on GA_ReflectDamageMelee_C_ExecuteUbergraph_GA_ReflectDamageMelee");
static_assert(offsetof(GA_ReflectDamageMelee_C_ExecuteUbergraph_GA_ReflectDamageMelee, EntryPoint) == 0x000000, "Member 'GA_ReflectDamageMelee_C_ExecuteUbergraph_GA_ReflectDamageMelee::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_ReflectDamageMelee_C_ExecuteUbergraph_GA_ReflectDamageMelee, K2Node_Event_EventData) == 0x000004, "Member 'GA_ReflectDamageMelee_C_ExecuteUbergraph_GA_ReflectDamageMelee::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_ReflectDamageMelee_C_ExecuteUbergraph_GA_ReflectDamageMelee, CallFunc_DoesContainerMatchAnyTagsInContainer_ReturnValue) == 0x00005C, "Member 'GA_ReflectDamageMelee_C_ExecuteUbergraph_GA_ReflectDamageMelee::CallFunc_DoesContainerMatchAnyTagsInContainer_ReturnValue' has a wrong offset!");

// Function GA_ReflectDamageMelee.GA_ReflectDamageMelee_C.K2_ActivateAbilityFromEvent
// 0x0058 (0x0058 - 0x0000)
struct GA_ReflectDamageMelee_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x0058)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_ReflectDamageMelee_C_K2_ActivateAbilityFromEvent) == 0x000004, "Wrong alignment on GA_ReflectDamageMelee_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_ReflectDamageMelee_C_K2_ActivateAbilityFromEvent) == 0x000058, "Wrong size on GA_ReflectDamageMelee_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_ReflectDamageMelee_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_ReflectDamageMelee_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

}

#pragma pack(pop)
