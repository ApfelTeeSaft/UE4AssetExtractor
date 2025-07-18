﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Outlander_ReadyForAnything

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK::Params
{

// Function GA_Outlander_ReadyForAnything.GA_Outlander_ReadyForAnything_C.ExecuteUbergraph_GA_Outlander_ReadyForAnything
// 0x0118 (0x0118 - 0x0000)
struct GA_Outlander_ReadyForAnything_C_ExecuteUbergraph_GA_Outlander_ReadyForAnything final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0004(0x0004)()
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x0008(0x0034)(ContainsInstancedReference)
	class APlayerPawn_Outlander_C*                K2Node_DynamicCast_AsPlayer_Pawn_Outlander;        // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;               // 0x0044(0x0058)()
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x009C(0x0014)()
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x00B0(0x000C)(ZeroConstructor, ReferenceParm)
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x00BC(0x0058)(ConstParm)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Outlander_ReadyForAnything_C_ExecuteUbergraph_GA_Outlander_ReadyForAnything) == 0x000004, "Wrong alignment on GA_Outlander_ReadyForAnything_C_ExecuteUbergraph_GA_Outlander_ReadyForAnything");
static_assert(sizeof(GA_Outlander_ReadyForAnything_C_ExecuteUbergraph_GA_Outlander_ReadyForAnything) == 0x000118, "Wrong size on GA_Outlander_ReadyForAnything_C_ExecuteUbergraph_GA_Outlander_ReadyForAnything");
static_assert(offsetof(GA_Outlander_ReadyForAnything_C_ExecuteUbergraph_GA_Outlander_ReadyForAnything, EntryPoint) == 0x000000, "Member 'GA_Outlander_ReadyForAnything_C_ExecuteUbergraph_GA_Outlander_ReadyForAnything::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Outlander_ReadyForAnything_C_ExecuteUbergraph_GA_Outlander_ReadyForAnything, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000004, "Member 'GA_Outlander_ReadyForAnything_C_ExecuteUbergraph_GA_Outlander_ReadyForAnything::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Outlander_ReadyForAnything_C_ExecuteUbergraph_GA_Outlander_ReadyForAnything, CallFunc_GetActorInfo_ReturnValue) == 0x000008, "Member 'GA_Outlander_ReadyForAnything_C_ExecuteUbergraph_GA_Outlander_ReadyForAnything::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Outlander_ReadyForAnything_C_ExecuteUbergraph_GA_Outlander_ReadyForAnything, K2Node_DynamicCast_AsPlayer_Pawn_Outlander) == 0x00003C, "Member 'GA_Outlander_ReadyForAnything_C_ExecuteUbergraph_GA_Outlander_ReadyForAnything::K2Node_DynamicCast_AsPlayer_Pawn_Outlander' has a wrong offset!");
static_assert(offsetof(GA_Outlander_ReadyForAnything_C_ExecuteUbergraph_GA_Outlander_ReadyForAnything, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'GA_Outlander_ReadyForAnything_C_ExecuteUbergraph_GA_Outlander_ReadyForAnything::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Outlander_ReadyForAnything_C_ExecuteUbergraph_GA_Outlander_ReadyForAnything, K2Node_MakeStruct_GameplayEventData) == 0x000044, "Member 'GA_Outlander_ReadyForAnything_C_ExecuteUbergraph_GA_Outlander_ReadyForAnything::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(GA_Outlander_ReadyForAnything_C_ExecuteUbergraph_GA_Outlander_ReadyForAnything, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x00009C, "Member 'GA_Outlander_ReadyForAnything_C_ExecuteUbergraph_GA_Outlander_ReadyForAnything::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Outlander_ReadyForAnything_C_ExecuteUbergraph_GA_Outlander_ReadyForAnything, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x0000B0, "Member 'GA_Outlander_ReadyForAnything_C_ExecuteUbergraph_GA_Outlander_ReadyForAnything::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Outlander_ReadyForAnything_C_ExecuteUbergraph_GA_Outlander_ReadyForAnything, K2Node_Event_EventData) == 0x0000BC, "Member 'GA_Outlander_ReadyForAnything_C_ExecuteUbergraph_GA_Outlander_ReadyForAnything::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_Outlander_ReadyForAnything_C_ExecuteUbergraph_GA_Outlander_ReadyForAnything, CallFunc_K2_CommitAbility_ReturnValue) == 0x000114, "Member 'GA_Outlander_ReadyForAnything_C_ExecuteUbergraph_GA_Outlander_ReadyForAnything::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");

// Function GA_Outlander_ReadyForAnything.GA_Outlander_ReadyForAnything_C.K2_ActivateAbilityFromEvent
// 0x0058 (0x0058 - 0x0000)
struct GA_Outlander_ReadyForAnything_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x0058)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_Outlander_ReadyForAnything_C_K2_ActivateAbilityFromEvent) == 0x000004, "Wrong alignment on GA_Outlander_ReadyForAnything_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_Outlander_ReadyForAnything_C_K2_ActivateAbilityFromEvent) == 0x000058, "Wrong size on GA_Outlander_ReadyForAnything_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_Outlander_ReadyForAnything_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_Outlander_ReadyForAnything_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

}

#pragma pack(pop)
