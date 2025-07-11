﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Ninja_MantisLeap

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK::Params
{

// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.ExecuteUbergraph_GA_Ninja_MantisLeap
// 0x0390 (0x0390 - 0x0000)
struct GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;                     // 0x0014(0x0014)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;                 // 0x0028(0x0008)()
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x0030(0x0008)()
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable2;                             // 0x0038(0x0014)()
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData2;                    // 0x0050(0x0014)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag2;                // 0x0064(0x0008)()
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x006C(0x0034)(ContainsInstancedReference)
	class APlayerPawn_Ninja_C*                    K2Node_DynamicCast_AsPlayer_Pawn_Ninja;            // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A5[0x3];                                       // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;               // 0x00A8(0x0058)()
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x0100(0x0014)()
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x0114(0x000C)(ZeroConstructor, ReferenceParm)
	TDelegate<void(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate2;             // 0x0120(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_A_Execution_Happened_Variable;           // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_B_Execution_Happened_Variable;           // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0132(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_133[0x1];                                      // 0x0133(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortPlayerPawn*                        CallFunc_SetJumpHeight_Ninja_Pawn_Out;             // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_SetJumpHeight_Jump_Height;                // 0x013C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0148(0x0058)(ConstParm)
	struct FGameplayEffectContextHandle           CallFunc_GetContextFromOwner_ReturnValue;          // 0x01A0(0x000C)()
	struct FHitResult                             K2Node_CustomEvent_Hit;                            // 0x01AC(0x0080)(ConstParm, ContainsInstancedReference)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x022C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x022D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22E[0x2];                                      // 0x022E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0234(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0240(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x024C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0258(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x026C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x027C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0288(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakVector_X;                            // 0x0294(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakVector_Y;                            // 0x0298(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakVector_Z;                            // 0x029C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFortAbilityTask_WaitTargetSelection*   CallFunc_WaitTargetSelection_ReturnValue;          // 0x02A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector_NetQuantizeNormal              K2Node_MakeStruct_Vector_NetQuantizeNormal;        // 0x02A4(0x000C)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B1[0x3];                                      // 0x02B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector_X2;                           // 0x02B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakVector_Y2;                           // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakVector_Z2;                           // 0x02BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector_NetQuantize10                  K2Node_MakeStruct_Vector_NetQuantize10;            // 0x02C0(0x000C)()
	struct FGameplayCueParameters                 K2Node_MakeStruct_GameplayCueParameters;           // 0x02CC(0x0084)()
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyGameplayEffectContainer_ReturnValue; // 0x0350(0x000C)(ConstParm, ZeroConstructor, ReferenceParm)
	TDelegate<void(const struct FHitResult& Hit)> K2Node_CreateDelegate_OutputDelegate3;             // 0x035C(0x0010)(ZeroConstructor, NoDestructor)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput; // 0x036C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue;   // 0x0374(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_375[0x3];                                      // 0x0375(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput; // 0x0378(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue2;  // 0x0380(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_381[0x3];                                      // 0x0381(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface3_CastInput; // 0x0384(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue3;  // 0x038C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap) == 0x000004, "Wrong alignment on GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap");
static_assert(sizeof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap) == 0x000390, "Wrong size on GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, EntryPoint) == 0x000000, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, K2Node_CustomEvent_TargetData) == 0x000014, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::K2Node_CustomEvent_TargetData' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, K2Node_CustomEvent_ApplicationTag) == 0x000028, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::K2Node_CustomEvent_ApplicationTag' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, Temp_struct_Variable) == 0x000030, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, Temp_struct_Variable2) == 0x000038, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::Temp_struct_Variable2' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_K2_CommitAbility_ReturnValue) == 0x00004C, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, K2Node_CustomEvent_TargetData2) == 0x000050, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::K2Node_CustomEvent_TargetData2' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, K2Node_CustomEvent_ApplicationTag2) == 0x000064, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::K2Node_CustomEvent_ApplicationTag2' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_GetActorInfo_ReturnValue) == 0x00006C, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, K2Node_DynamicCast_AsPlayer_Pawn_Ninja) == 0x0000A0, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::K2Node_DynamicCast_AsPlayer_Pawn_Ninja' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, K2Node_DynamicCast_bSuccess) == 0x0000A4, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, K2Node_MakeStruct_GameplayEventData) == 0x0000A8, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x000100, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x000114, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, K2Node_CreateDelegate_OutputDelegate2) == 0x000120, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, Temp_bool_A_Execution_Happened_Variable) == 0x000130, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::Temp_bool_A_Execution_Happened_Variable' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, Temp_bool_B_Execution_Happened_Variable) == 0x000131, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::Temp_bool_B_Execution_Happened_Variable' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_BooleanAND_ReturnValue) == 0x000132, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000134, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_SetJumpHeight_Ninja_Pawn_Out) == 0x000138, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_SetJumpHeight_Ninja_Pawn_Out' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_SetJumpHeight_Jump_Height) == 0x00013C, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_SetJumpHeight_Jump_Height' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, K2Node_Event_EventData) == 0x000148, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_GetContextFromOwner_ReturnValue) == 0x0001A0, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_GetContextFromOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, K2Node_CustomEvent_Hit) == 0x0001AC, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::K2Node_CustomEvent_Hit' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_BreakHitResult_bBlockingHit) == 0x00022C, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_BreakHitResult_bInitialOverlap) == 0x00022D, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_BreakHitResult_Time) == 0x000230, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_BreakHitResult_Location) == 0x000234, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_BreakHitResult_ImpactPoint) == 0x000240, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_BreakHitResult_Normal) == 0x00024C, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_BreakHitResult_ImpactNormal) == 0x000258, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_BreakHitResult_PhysMat) == 0x000264, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_BreakHitResult_HitActor) == 0x000268, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_BreakHitResult_HitComponent) == 0x00026C, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_BreakHitResult_HitBoneName) == 0x000270, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_BreakHitResult_HitItem) == 0x000278, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_BreakHitResult_TraceStart) == 0x00027C, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_BreakHitResult_TraceEnd) == 0x000288, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_BreakVector_X) == 0x000294, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_BreakVector_Y) == 0x000298, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_BreakVector_Z) == 0x00029C, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_WaitTargetSelection_ReturnValue) == 0x0002A0, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_WaitTargetSelection_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, K2Node_MakeStruct_Vector_NetQuantizeNormal) == 0x0002A4, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::K2Node_MakeStruct_Vector_NetQuantizeNormal' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_IsValid_ReturnValue) == 0x0002B0, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_BreakVector_X2) == 0x0002B4, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_BreakVector_X2' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_BreakVector_Y2) == 0x0002B8, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_BreakVector_Y2' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_BreakVector_Z2) == 0x0002BC, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_BreakVector_Z2' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, K2Node_MakeStruct_Vector_NetQuantize10) == 0x0002C0, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::K2Node_MakeStruct_Vector_NetQuantize10' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, K2Node_MakeStruct_GameplayCueParameters) == 0x0002CC, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::K2Node_MakeStruct_GameplayCueParameters' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_ApplyGameplayEffectContainer_ReturnValue) == 0x000350, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_ApplyGameplayEffectContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, K2Node_CreateDelegate_OutputDelegate3) == 0x00035C, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput) == 0x00036C, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_HasAllMatchingGameplayTags_ReturnValue) == 0x000374, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_HasAllMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput) == 0x000378, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_HasAllMatchingGameplayTags_ReturnValue2) == 0x000380, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_HasAllMatchingGameplayTags_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_HasAllMatchingGameplayTags_TagContainerInterface3_CastInput) == 0x000384, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_HasAllMatchingGameplayTags_TagContainerInterface3_CastInput' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap, CallFunc_HasAllMatchingGameplayTags_ReturnValue3) == 0x00038C, "Member 'GA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap::CallFunc_HasAllMatchingGameplayTags_ReturnValue3' has a wrong offset!");

// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.OnPawnLanded_Event_0
// 0x0080 (0x0080 - 0x0000)
struct GA_Ninja_MantisLeap_C_OnPawnLanded_Event_0 final
{
public:
	struct FHitResult                             Hit;                                               // 0x0000(0x0080)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(GA_Ninja_MantisLeap_C_OnPawnLanded_Event_0) == 0x000004, "Wrong alignment on GA_Ninja_MantisLeap_C_OnPawnLanded_Event_0");
static_assert(sizeof(GA_Ninja_MantisLeap_C_OnPawnLanded_Event_0) == 0x000080, "Wrong size on GA_Ninja_MantisLeap_C_OnPawnLanded_Event_0");
static_assert(offsetof(GA_Ninja_MantisLeap_C_OnPawnLanded_Event_0, Hit) == 0x000000, "Member 'GA_Ninja_MantisLeap_C_OnPawnLanded_Event_0::Hit' has a wrong offset!");

// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.K2_ActivateAbilityFromEvent
// 0x0058 (0x0058 - 0x0000)
struct GA_Ninja_MantisLeap_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData_0;                                       // 0x0000(0x0058)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_Ninja_MantisLeap_C_K2_ActivateAbilityFromEvent) == 0x000004, "Wrong alignment on GA_Ninja_MantisLeap_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_Ninja_MantisLeap_C_K2_ActivateAbilityFromEvent) == 0x000058, "Wrong size on GA_Ninja_MantisLeap_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_Ninja_MantisLeap_C_K2_ActivateAbilityFromEvent, EventData_0) == 0x000000, "Member 'GA_Ninja_MantisLeap_C_K2_ActivateAbilityFromEvent::EventData_0' has a wrong offset!");

// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.Targeted_023C704A4687994EABB842B14222FB9B
// 0x001C (0x001C - 0x0000)
struct GA_Ninja_MantisLeap_C_Targeted_023C704A4687994EABB842B14222FB9B final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0014)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0014(0x0008)(Parm)
};
static_assert(alignof(GA_Ninja_MantisLeap_C_Targeted_023C704A4687994EABB842B14222FB9B) == 0x000004, "Wrong alignment on GA_Ninja_MantisLeap_C_Targeted_023C704A4687994EABB842B14222FB9B");
static_assert(sizeof(GA_Ninja_MantisLeap_C_Targeted_023C704A4687994EABB842B14222FB9B) == 0x00001C, "Wrong size on GA_Ninja_MantisLeap_C_Targeted_023C704A4687994EABB842B14222FB9B");
static_assert(offsetof(GA_Ninja_MantisLeap_C_Targeted_023C704A4687994EABB842B14222FB9B, TargetData) == 0x000000, "Member 'GA_Ninja_MantisLeap_C_Targeted_023C704A4687994EABB842B14222FB9B::TargetData' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_Targeted_023C704A4687994EABB842B14222FB9B, ApplicationTag) == 0x000014, "Member 'GA_Ninja_MantisLeap_C_Targeted_023C704A4687994EABB842B14222FB9B::ApplicationTag' has a wrong offset!");

// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.Cancelled_023C704A4687994EABB842B14222FB9B
// 0x001C (0x001C - 0x0000)
struct GA_Ninja_MantisLeap_C_Cancelled_023C704A4687994EABB842B14222FB9B final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0014)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0014(0x0008)(Parm)
};
static_assert(alignof(GA_Ninja_MantisLeap_C_Cancelled_023C704A4687994EABB842B14222FB9B) == 0x000004, "Wrong alignment on GA_Ninja_MantisLeap_C_Cancelled_023C704A4687994EABB842B14222FB9B");
static_assert(sizeof(GA_Ninja_MantisLeap_C_Cancelled_023C704A4687994EABB842B14222FB9B) == 0x00001C, "Wrong size on GA_Ninja_MantisLeap_C_Cancelled_023C704A4687994EABB842B14222FB9B");
static_assert(offsetof(GA_Ninja_MantisLeap_C_Cancelled_023C704A4687994EABB842B14222FB9B, TargetData) == 0x000000, "Member 'GA_Ninja_MantisLeap_C_Cancelled_023C704A4687994EABB842B14222FB9B::TargetData' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_Cancelled_023C704A4687994EABB842B14222FB9B, ApplicationTag) == 0x000014, "Member 'GA_Ninja_MantisLeap_C_Cancelled_023C704A4687994EABB842B14222FB9B::ApplicationTag' has a wrong offset!");

// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.K2_ShouldAbilityRespondToEvent
// 0x009C (0x009C - 0x0000)
struct GA_Ninja_MantisLeap_C_K2_ShouldAbilityRespondToEvent final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;                                         // 0x0000(0x0034)(Parm, ContainsInstancedReference)
	struct FGameplayEventData                     Payload;                                           // 0x0034(0x0058)(Parm)
	bool                                          ReturnValue;                                       // 0x008C(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput; // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Ninja_MantisLeap_C_K2_ShouldAbilityRespondToEvent) == 0x000004, "Wrong alignment on GA_Ninja_MantisLeap_C_K2_ShouldAbilityRespondToEvent");
static_assert(sizeof(GA_Ninja_MantisLeap_C_K2_ShouldAbilityRespondToEvent) == 0x00009C, "Wrong size on GA_Ninja_MantisLeap_C_K2_ShouldAbilityRespondToEvent");
static_assert(offsetof(GA_Ninja_MantisLeap_C_K2_ShouldAbilityRespondToEvent, ActorInfo) == 0x000000, "Member 'GA_Ninja_MantisLeap_C_K2_ShouldAbilityRespondToEvent::ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_K2_ShouldAbilityRespondToEvent, Payload) == 0x000034, "Member 'GA_Ninja_MantisLeap_C_K2_ShouldAbilityRespondToEvent::Payload' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_K2_ShouldAbilityRespondToEvent, ReturnValue) == 0x00008C, "Member 'GA_Ninja_MantisLeap_C_K2_ShouldAbilityRespondToEvent::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_K2_ShouldAbilityRespondToEvent, CallFunc_HasAnyMatchingGameplayTags_self_CastInput) == 0x000090, "Member 'GA_Ninja_MantisLeap_C_K2_ShouldAbilityRespondToEvent::CallFunc_HasAnyMatchingGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_K2_ShouldAbilityRespondToEvent, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x000098, "Member 'GA_Ninja_MantisLeap_C_K2_ShouldAbilityRespondToEvent::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");

// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.SetJumpHeight
// 0x0050 (0x0050 - 0x0000)
struct GA_Ninja_MantisLeap_C_SetJumpHeight final
{
public:
	class APlayerPawn_Ninja_C*                    Ninja_Pawn;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortPlayerPawn*                        Ninja_Pawn_Out;                                    // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                Jump_Height;                                       // 0x0008(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue2;            // 0x0044(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Ninja_MantisLeap_C_SetJumpHeight) == 0x000004, "Wrong alignment on GA_Ninja_MantisLeap_C_SetJumpHeight");
static_assert(sizeof(GA_Ninja_MantisLeap_C_SetJumpHeight) == 0x000050, "Wrong size on GA_Ninja_MantisLeap_C_SetJumpHeight");
static_assert(offsetof(GA_Ninja_MantisLeap_C_SetJumpHeight, Ninja_Pawn) == 0x000000, "Member 'GA_Ninja_MantisLeap_C_SetJumpHeight::Ninja_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_SetJumpHeight, Ninja_Pawn_Out) == 0x000004, "Member 'GA_Ninja_MantisLeap_C_SetJumpHeight::Ninja_Pawn_Out' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_SetJumpHeight, Jump_Height) == 0x000008, "Member 'GA_Ninja_MantisLeap_C_SetJumpHeight::Jump_Height' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_SetJumpHeight, CallFunc_GetVelocity_ReturnValue) == 0x000014, "Member 'GA_Ninja_MantisLeap_C_SetJumpHeight::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_SetJumpHeight, CallFunc_MakeVector_ReturnValue) == 0x000020, "Member 'GA_Ninja_MantisLeap_C_SetJumpHeight::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_SetJumpHeight, CallFunc_Multiply_VectorVector_ReturnValue) == 0x00002C, "Member 'GA_Ninja_MantisLeap_C_SetJumpHeight::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_SetJumpHeight, CallFunc_Add_VectorVector_ReturnValue) == 0x000038, "Member 'GA_Ninja_MantisLeap_C_SetJumpHeight::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_MantisLeap_C_SetJumpHeight, CallFunc_Add_VectorVector_ReturnValue2) == 0x000044, "Member 'GA_Ninja_MantisLeap_C_SetJumpHeight::CallFunc_Add_VectorVector_ReturnValue2' has a wrong offset!");

}

#pragma pack(pop)
