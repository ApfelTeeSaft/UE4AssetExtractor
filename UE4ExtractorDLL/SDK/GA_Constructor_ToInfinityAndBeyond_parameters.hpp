﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Constructor_ToInfinityAndBeyond

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK::Params
{

// Function GA_Constructor_ToInfinityAndBeyond.GA_Constructor_ToInfinityAndBeyond_C.ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond
// 0x019C (0x019C - 0x0000)
struct GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;                     // 0x0004(0x0014)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;                 // 0x0018(0x0008)()
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x0020(0x0008)()
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable2;                             // 0x0028(0x0014)()
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyGameplayEffectContainer_ReturnValue; // 0x003C(0x000C)(ConstParm, ZeroConstructor, ReferenceParm)
	class UFortAbilityTask_WaitTargetSelection*   CallFunc_WaitTargetSelection_ReturnValue;          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53[0x1];                                       // 0x0053(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate;              // 0x0054(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x0064(0x0034)(ContainsInstancedReference)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData2;                    // 0x0098(0x0014)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag2;                // 0x00AC(0x0008)()
	class APlayerPawn_Constructor_C*              K2Node_DynamicCast_AsPlayer_Pawn_Constructor;      // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B9[0x3];                                       // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x00BC(0x0014)()
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x00D0(0x000C)(ZeroConstructor, ReferenceParm)
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;               // 0x00DC(0x0058)()
	TDelegate<void(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate2;             // 0x0134(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0144(0x0058)(ConstParm)
};
static_assert(alignof(GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond) == 0x000004, "Wrong alignment on GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond");
static_assert(sizeof(GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond) == 0x00019C, "Wrong size on GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond");
static_assert(offsetof(GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond, EntryPoint) == 0x000000, "Member 'GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond, K2Node_CustomEvent_TargetData) == 0x000004, "Member 'GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond::K2Node_CustomEvent_TargetData' has a wrong offset!");
static_assert(offsetof(GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond, K2Node_CustomEvent_ApplicationTag) == 0x000018, "Member 'GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond::K2Node_CustomEvent_ApplicationTag' has a wrong offset!");
static_assert(offsetof(GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond, Temp_struct_Variable) == 0x000020, "Member 'GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond, Temp_struct_Variable2) == 0x000028, "Member 'GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond::Temp_struct_Variable2' has a wrong offset!");
static_assert(offsetof(GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond, CallFunc_ApplyGameplayEffectContainer_ReturnValue) == 0x00003C, "Member 'GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond::CallFunc_ApplyGameplayEffectContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond, CallFunc_WaitTargetSelection_ReturnValue) == 0x000048, "Member 'GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond::CallFunc_WaitTargetSelection_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond, CallFunc_Greater_IntInt_ReturnValue) == 0x000050, "Member 'GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond, CallFunc_IsValid_ReturnValue) == 0x000051, "Member 'GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond, CallFunc_K2_CommitAbility_ReturnValue) == 0x000052, "Member 'GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond, K2Node_CreateDelegate_OutputDelegate) == 0x000054, "Member 'GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond, CallFunc_GetActorInfo_ReturnValue) == 0x000064, "Member 'GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond, K2Node_CustomEvent_TargetData2) == 0x000098, "Member 'GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond::K2Node_CustomEvent_TargetData2' has a wrong offset!");
static_assert(offsetof(GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond, K2Node_CustomEvent_ApplicationTag2) == 0x0000AC, "Member 'GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond::K2Node_CustomEvent_ApplicationTag2' has a wrong offset!");
static_assert(offsetof(GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond, K2Node_DynamicCast_AsPlayer_Pawn_Constructor) == 0x0000B4, "Member 'GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond::K2Node_DynamicCast_AsPlayer_Pawn_Constructor' has a wrong offset!");
static_assert(offsetof(GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond, K2Node_DynamicCast_bSuccess) == 0x0000B8, "Member 'GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x0000BC, "Member 'GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x0000D0, "Member 'GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond, K2Node_MakeStruct_GameplayEventData) == 0x0000DC, "Member 'GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond, K2Node_CreateDelegate_OutputDelegate2) == 0x000134, "Member 'GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond, K2Node_Event_EventData) == 0x000144, "Member 'GA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond::K2Node_Event_EventData' has a wrong offset!");

// Function GA_Constructor_ToInfinityAndBeyond.GA_Constructor_ToInfinityAndBeyond_C.K2_ActivateAbilityFromEvent
// 0x0058 (0x0058 - 0x0000)
struct GA_Constructor_ToInfinityAndBeyond_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData_0;                                       // 0x0000(0x0058)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_Constructor_ToInfinityAndBeyond_C_K2_ActivateAbilityFromEvent) == 0x000004, "Wrong alignment on GA_Constructor_ToInfinityAndBeyond_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_Constructor_ToInfinityAndBeyond_C_K2_ActivateAbilityFromEvent) == 0x000058, "Wrong size on GA_Constructor_ToInfinityAndBeyond_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_Constructor_ToInfinityAndBeyond_C_K2_ActivateAbilityFromEvent, EventData_0) == 0x000000, "Member 'GA_Constructor_ToInfinityAndBeyond_C_K2_ActivateAbilityFromEvent::EventData_0' has a wrong offset!");

// Function GA_Constructor_ToInfinityAndBeyond.GA_Constructor_ToInfinityAndBeyond_C.Targeted_35315E614EE08E9B38A0B1BBADAA3319
// 0x001C (0x001C - 0x0000)
struct GA_Constructor_ToInfinityAndBeyond_C_Targeted_35315E614EE08E9B38A0B1BBADAA3319 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0014)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0014(0x0008)(Parm)
};
static_assert(alignof(GA_Constructor_ToInfinityAndBeyond_C_Targeted_35315E614EE08E9B38A0B1BBADAA3319) == 0x000004, "Wrong alignment on GA_Constructor_ToInfinityAndBeyond_C_Targeted_35315E614EE08E9B38A0B1BBADAA3319");
static_assert(sizeof(GA_Constructor_ToInfinityAndBeyond_C_Targeted_35315E614EE08E9B38A0B1BBADAA3319) == 0x00001C, "Wrong size on GA_Constructor_ToInfinityAndBeyond_C_Targeted_35315E614EE08E9B38A0B1BBADAA3319");
static_assert(offsetof(GA_Constructor_ToInfinityAndBeyond_C_Targeted_35315E614EE08E9B38A0B1BBADAA3319, TargetData) == 0x000000, "Member 'GA_Constructor_ToInfinityAndBeyond_C_Targeted_35315E614EE08E9B38A0B1BBADAA3319::TargetData' has a wrong offset!");
static_assert(offsetof(GA_Constructor_ToInfinityAndBeyond_C_Targeted_35315E614EE08E9B38A0B1BBADAA3319, ApplicationTag) == 0x000014, "Member 'GA_Constructor_ToInfinityAndBeyond_C_Targeted_35315E614EE08E9B38A0B1BBADAA3319::ApplicationTag' has a wrong offset!");

// Function GA_Constructor_ToInfinityAndBeyond.GA_Constructor_ToInfinityAndBeyond_C.Cancelled_35315E614EE08E9B38A0B1BBADAA3319
// 0x001C (0x001C - 0x0000)
struct GA_Constructor_ToInfinityAndBeyond_C_Cancelled_35315E614EE08E9B38A0B1BBADAA3319 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0014)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0014(0x0008)(Parm)
};
static_assert(alignof(GA_Constructor_ToInfinityAndBeyond_C_Cancelled_35315E614EE08E9B38A0B1BBADAA3319) == 0x000004, "Wrong alignment on GA_Constructor_ToInfinityAndBeyond_C_Cancelled_35315E614EE08E9B38A0B1BBADAA3319");
static_assert(sizeof(GA_Constructor_ToInfinityAndBeyond_C_Cancelled_35315E614EE08E9B38A0B1BBADAA3319) == 0x00001C, "Wrong size on GA_Constructor_ToInfinityAndBeyond_C_Cancelled_35315E614EE08E9B38A0B1BBADAA3319");
static_assert(offsetof(GA_Constructor_ToInfinityAndBeyond_C_Cancelled_35315E614EE08E9B38A0B1BBADAA3319, TargetData) == 0x000000, "Member 'GA_Constructor_ToInfinityAndBeyond_C_Cancelled_35315E614EE08E9B38A0B1BBADAA3319::TargetData' has a wrong offset!");
static_assert(offsetof(GA_Constructor_ToInfinityAndBeyond_C_Cancelled_35315E614EE08E9B38A0B1BBADAA3319, ApplicationTag) == 0x000014, "Member 'GA_Constructor_ToInfinityAndBeyond_C_Cancelled_35315E614EE08E9B38A0B1BBADAA3319::ApplicationTag' has a wrong offset!");

// Function GA_Constructor_ToInfinityAndBeyond.GA_Constructor_ToInfinityAndBeyond_C.K2_ShouldAbilityRespondToEvent
// 0x009C (0x009C - 0x0000)
struct GA_Constructor_ToInfinityAndBeyond_C_K2_ShouldAbilityRespondToEvent final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;                                         // 0x0000(0x0034)(Parm, ContainsInstancedReference)
	struct FGameplayEventData                     Payload;                                           // 0x0034(0x0058)(Parm)
	bool                                          ReturnValue;                                       // 0x008C(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput; // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue;   // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Constructor_ToInfinityAndBeyond_C_K2_ShouldAbilityRespondToEvent) == 0x000004, "Wrong alignment on GA_Constructor_ToInfinityAndBeyond_C_K2_ShouldAbilityRespondToEvent");
static_assert(sizeof(GA_Constructor_ToInfinityAndBeyond_C_K2_ShouldAbilityRespondToEvent) == 0x00009C, "Wrong size on GA_Constructor_ToInfinityAndBeyond_C_K2_ShouldAbilityRespondToEvent");
static_assert(offsetof(GA_Constructor_ToInfinityAndBeyond_C_K2_ShouldAbilityRespondToEvent, ActorInfo) == 0x000000, "Member 'GA_Constructor_ToInfinityAndBeyond_C_K2_ShouldAbilityRespondToEvent::ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_Constructor_ToInfinityAndBeyond_C_K2_ShouldAbilityRespondToEvent, Payload) == 0x000034, "Member 'GA_Constructor_ToInfinityAndBeyond_C_K2_ShouldAbilityRespondToEvent::Payload' has a wrong offset!");
static_assert(offsetof(GA_Constructor_ToInfinityAndBeyond_C_K2_ShouldAbilityRespondToEvent, ReturnValue) == 0x00008C, "Member 'GA_Constructor_ToInfinityAndBeyond_C_K2_ShouldAbilityRespondToEvent::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Constructor_ToInfinityAndBeyond_C_K2_ShouldAbilityRespondToEvent, CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput) == 0x000090, "Member 'GA_Constructor_ToInfinityAndBeyond_C_K2_ShouldAbilityRespondToEvent::CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput' has a wrong offset!");
static_assert(offsetof(GA_Constructor_ToInfinityAndBeyond_C_K2_ShouldAbilityRespondToEvent, CallFunc_HasAllMatchingGameplayTags_ReturnValue) == 0x000098, "Member 'GA_Constructor_ToInfinityAndBeyond_C_K2_ShouldAbilityRespondToEvent::CallFunc_HasAllMatchingGameplayTags_ReturnValue' has a wrong offset!");

}

#pragma pack(pop)
