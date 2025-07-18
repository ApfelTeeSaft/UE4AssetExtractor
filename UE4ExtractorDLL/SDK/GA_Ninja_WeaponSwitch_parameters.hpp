﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Ninja_WeaponSwitch

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK::Params
{

// Function GA_Ninja_WeaponSwitch.GA_Ninja_WeaponSwitch_C.ExecuteUbergraph_GA_Ninja_WeaponSwitch
// 0x013C (0x013C - 0x0000)
struct GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x0004(0x0034)(ContainsInstancedReference)
	class APlayerPawn_Ninja_C*                    K2Node_DynamicCast_AsPlayer_Pawn_Ninja;            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;               // 0x0040(0x0058)()
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x0098(0x0014)()
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x00AC(0x000C)(ZeroConstructor, ReferenceParm)
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x00B8(0x0058)(ConstParm)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_111[0x3];                                      // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortWeapon*                            K2Node_DynamicCast_AsFort_Weapon;                  // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_119[0x3];                                      // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortWeapon*                            K2Node_DynamicCast_AsFort_Weapon2;                 // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess3;                      // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_121[0x3];                                      // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput; // 0x0124(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue;   // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12D[0x3];                                      // 0x012D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput; // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue2;  // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch) == 0x000004, "Wrong alignment on GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch");
static_assert(sizeof(GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch) == 0x00013C, "Wrong size on GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch");
static_assert(offsetof(GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch, EntryPoint) == 0x000000, "Member 'GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch, CallFunc_GetActorInfo_ReturnValue) == 0x000004, "Member 'GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch, K2Node_DynamicCast_AsPlayer_Pawn_Ninja) == 0x000038, "Member 'GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch::K2Node_DynamicCast_AsPlayer_Pawn_Ninja' has a wrong offset!");
static_assert(offsetof(GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch, K2Node_DynamicCast_bSuccess) == 0x00003C, "Member 'GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch, K2Node_MakeStruct_GameplayEventData) == 0x000040, "Member 'GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x000098, "Member 'GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x0000AC, "Member 'GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch, K2Node_Event_EventData) == 0x0000B8, "Member 'GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch, CallFunc_K2_CommitAbility_ReturnValue) == 0x000110, "Member 'GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch, K2Node_DynamicCast_AsFort_Weapon) == 0x000114, "Member 'GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch::K2Node_DynamicCast_AsFort_Weapon' has a wrong offset!");
static_assert(offsetof(GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch, K2Node_DynamicCast_bSuccess2) == 0x000118, "Member 'GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch, K2Node_DynamicCast_AsFort_Weapon2) == 0x00011C, "Member 'GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch::K2Node_DynamicCast_AsFort_Weapon2' has a wrong offset!");
static_assert(offsetof(GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch, K2Node_DynamicCast_bSuccess3) == 0x000120, "Member 'GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch::K2Node_DynamicCast_bSuccess3' has a wrong offset!");
static_assert(offsetof(GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch, CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput) == 0x000124, "Member 'GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch::CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput' has a wrong offset!");
static_assert(offsetof(GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch, CallFunc_HasAllMatchingGameplayTags_ReturnValue) == 0x00012C, "Member 'GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch::CallFunc_HasAllMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch, CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput) == 0x000130, "Member 'GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch::CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput' has a wrong offset!");
static_assert(offsetof(GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch, CallFunc_HasAllMatchingGameplayTags_ReturnValue2) == 0x000138, "Member 'GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch::CallFunc_HasAllMatchingGameplayTags_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch, CallFunc_BooleanAND_ReturnValue) == 0x000139, "Member 'GA_Ninja_WeaponSwitch_C_ExecuteUbergraph_GA_Ninja_WeaponSwitch::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function GA_Ninja_WeaponSwitch.GA_Ninja_WeaponSwitch_C.K2_ActivateAbilityFromEvent
// 0x0058 (0x0058 - 0x0000)
struct GA_Ninja_WeaponSwitch_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x0058)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_Ninja_WeaponSwitch_C_K2_ActivateAbilityFromEvent) == 0x000004, "Wrong alignment on GA_Ninja_WeaponSwitch_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_Ninja_WeaponSwitch_C_K2_ActivateAbilityFromEvent) == 0x000058, "Wrong size on GA_Ninja_WeaponSwitch_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_Ninja_WeaponSwitch_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_Ninja_WeaponSwitch_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

}

#pragma pack(pop)
