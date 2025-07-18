﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Ninja_TriggeredRunSpeed

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK::Params
{

// Function GA_Ninja_TriggeredRunSpeed.GA_Ninja_TriggeredRunSpeed_C.ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed
// 0x0134 (0x0134 - 0x0000)
struct GA_Ninja_TriggeredRunSpeed_C_ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0004(0x0058)(ConstParm)
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x005C(0x0034)(ContainsInstancedReference)
	class APlayerPawn_Ninja_C*                    K2Node_DynamicCast_AsPlayer_Pawn_Ninja;            // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95[0x3];                                       // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;               // 0x0098(0x0058)()
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x00F0(0x0014)()
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x0104(0x000C)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_111[0x3];                                      // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue2;  // 0x0114(0x0014)()
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyGameplayEffectContainer_ReturnValue; // 0x0128(0x000C)(ConstParm, ZeroConstructor, ReferenceParm)
};
static_assert(alignof(GA_Ninja_TriggeredRunSpeed_C_ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed) == 0x000004, "Wrong alignment on GA_Ninja_TriggeredRunSpeed_C_ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed");
static_assert(sizeof(GA_Ninja_TriggeredRunSpeed_C_ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed) == 0x000134, "Wrong size on GA_Ninja_TriggeredRunSpeed_C_ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed");
static_assert(offsetof(GA_Ninja_TriggeredRunSpeed_C_ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed, EntryPoint) == 0x000000, "Member 'GA_Ninja_TriggeredRunSpeed_C_ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Ninja_TriggeredRunSpeed_C_ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed, K2Node_Event_EventData) == 0x000004, "Member 'GA_Ninja_TriggeredRunSpeed_C_ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_Ninja_TriggeredRunSpeed_C_ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed, CallFunc_GetActorInfo_ReturnValue) == 0x00005C, "Member 'GA_Ninja_TriggeredRunSpeed_C_ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_TriggeredRunSpeed_C_ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed, K2Node_DynamicCast_AsPlayer_Pawn_Ninja) == 0x000090, "Member 'GA_Ninja_TriggeredRunSpeed_C_ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed::K2Node_DynamicCast_AsPlayer_Pawn_Ninja' has a wrong offset!");
static_assert(offsetof(GA_Ninja_TriggeredRunSpeed_C_ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed, K2Node_DynamicCast_bSuccess) == 0x000094, "Member 'GA_Ninja_TriggeredRunSpeed_C_ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Ninja_TriggeredRunSpeed_C_ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed, K2Node_MakeStruct_GameplayEventData) == 0x000098, "Member 'GA_Ninja_TriggeredRunSpeed_C_ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(GA_Ninja_TriggeredRunSpeed_C_ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x0000F0, "Member 'GA_Ninja_TriggeredRunSpeed_C_ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_TriggeredRunSpeed_C_ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x000104, "Member 'GA_Ninja_TriggeredRunSpeed_C_ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_TriggeredRunSpeed_C_ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed, CallFunc_K2_CommitAbility_ReturnValue) == 0x000110, "Member 'GA_Ninja_TriggeredRunSpeed_C_ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_TriggeredRunSpeed_C_ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed, CallFunc_AbilityTargetDataFromActor_ReturnValue2) == 0x000114, "Member 'GA_Ninja_TriggeredRunSpeed_C_ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed::CallFunc_AbilityTargetDataFromActor_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GA_Ninja_TriggeredRunSpeed_C_ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed, CallFunc_ApplyGameplayEffectContainer_ReturnValue) == 0x000128, "Member 'GA_Ninja_TriggeredRunSpeed_C_ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed::CallFunc_ApplyGameplayEffectContainer_ReturnValue' has a wrong offset!");

// Function GA_Ninja_TriggeredRunSpeed.GA_Ninja_TriggeredRunSpeed_C.K2_ActivateAbilityFromEvent
// 0x0058 (0x0058 - 0x0000)
struct GA_Ninja_TriggeredRunSpeed_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x0058)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_Ninja_TriggeredRunSpeed_C_K2_ActivateAbilityFromEvent) == 0x000004, "Wrong alignment on GA_Ninja_TriggeredRunSpeed_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_Ninja_TriggeredRunSpeed_C_K2_ActivateAbilityFromEvent) == 0x000058, "Wrong size on GA_Ninja_TriggeredRunSpeed_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_Ninja_TriggeredRunSpeed_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_Ninja_TriggeredRunSpeed_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// Function GA_Ninja_TriggeredRunSpeed.GA_Ninja_TriggeredRunSpeed_C.ApplyRunTrails
// 0x0018 (0x0018 - 0x0000)
struct GA_Ninja_TriggeredRunSpeed_C_ApplyRunTrails final
{
public:
	class UParticleSystem*                        Emitter_Template;                                  // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USceneComponent*                        Scene_Component;                                   // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue2;        // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue3;        // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue4;        // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Ninja_TriggeredRunSpeed_C_ApplyRunTrails) == 0x000004, "Wrong alignment on GA_Ninja_TriggeredRunSpeed_C_ApplyRunTrails");
static_assert(sizeof(GA_Ninja_TriggeredRunSpeed_C_ApplyRunTrails) == 0x000018, "Wrong size on GA_Ninja_TriggeredRunSpeed_C_ApplyRunTrails");
static_assert(offsetof(GA_Ninja_TriggeredRunSpeed_C_ApplyRunTrails, Emitter_Template) == 0x000000, "Member 'GA_Ninja_TriggeredRunSpeed_C_ApplyRunTrails::Emitter_Template' has a wrong offset!");
static_assert(offsetof(GA_Ninja_TriggeredRunSpeed_C_ApplyRunTrails, Scene_Component) == 0x000004, "Member 'GA_Ninja_TriggeredRunSpeed_C_ApplyRunTrails::Scene_Component' has a wrong offset!");
static_assert(offsetof(GA_Ninja_TriggeredRunSpeed_C_ApplyRunTrails, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x000008, "Member 'GA_Ninja_TriggeredRunSpeed_C_ApplyRunTrails::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_TriggeredRunSpeed_C_ApplyRunTrails, CallFunc_SpawnEmitterAttached_ReturnValue2) == 0x00000C, "Member 'GA_Ninja_TriggeredRunSpeed_C_ApplyRunTrails::CallFunc_SpawnEmitterAttached_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GA_Ninja_TriggeredRunSpeed_C_ApplyRunTrails, CallFunc_SpawnEmitterAttached_ReturnValue3) == 0x000010, "Member 'GA_Ninja_TriggeredRunSpeed_C_ApplyRunTrails::CallFunc_SpawnEmitterAttached_ReturnValue3' has a wrong offset!");
static_assert(offsetof(GA_Ninja_TriggeredRunSpeed_C_ApplyRunTrails, CallFunc_SpawnEmitterAttached_ReturnValue4) == 0x000014, "Member 'GA_Ninja_TriggeredRunSpeed_C_ApplyRunTrails::CallFunc_SpawnEmitterAttached_ReturnValue4' has a wrong offset!");

}

#pragma pack(pop)
