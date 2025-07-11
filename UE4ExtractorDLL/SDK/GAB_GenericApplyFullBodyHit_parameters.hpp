﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_GenericApplyFullBodyHit

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK::Params
{

// Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.ExecuteUbergraph_GAB_GenericApplyFullBodyHit
// 0x01E0 (0x01E0 - 0x0000)
struct GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue;            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                 K2Node_CustomEvent_SelfActor;                      // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                 K2Node_CustomEvent_OtherActor;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                K2Node_CustomEvent_NormalImpulse;                  // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             K2Node_CustomEvent_Hit;                            // 0x0030(0x0080)(ConstParm, ContainsInstancedReference)
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x00B0(0x0058)(ConstParm)
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromHitResult_ReturnValue; // 0x0108(0x0014)()
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetImpulseData_ImpulseDirection;          // 0x0120(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetImpulseData_KnockbackMagnitude;        // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetImpulseData_KnockbackZAngle;           // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_135[0x3];                                      // 0x0135(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)> K2Node_CreateDelegate_OutputDelegate2;             // 0x0138(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_NotEqual_ClassClass_ReturnValue;          // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_149[0x3];                                      // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x014C(0x000C)(ZeroConstructor, ReferenceParm)
	class UFortAbilitySystemComponent*            CallFunc_GetActivatingAbilityComponent_ReturnValue; // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ClassClass_ReturnValue2;         // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15D[0x3];                                      // 0x015D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate3;             // 0x0160(0x0010)(ZeroConstructor, NoDestructor)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0170(0x0004)()
	bool                                          CallFunc_RemoveActiveGameplayEffect_ReturnValue;   // 0x0174(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_175[0x3];                                      // 0x0175(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue2;           // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x017C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                   CallFunc_SetFNameBasedOnHitDirection_NameResult;   // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_195[0x3];                                      // 0x0195(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector_X;                            // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakVector_Y;                            // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakVector_Z;                            // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate4;             // 0x01A4(0x0010)(ZeroConstructor, NoDestructor)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x01B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x01C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue3;           // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue2;        // 0x01D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue2;          // 0x01DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit) == 0x000004, "Wrong alignment on GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit");
static_assert(sizeof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit) == 0x0001E0, "Wrong size on GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, EntryPoint) == 0x000000, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000004, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_GetActivatingPawn_ReturnValue) == 0x000018, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_GetActivatingPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_CustomEvent_SelfActor) == 0x00001C, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_CustomEvent_SelfActor' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_CustomEvent_OtherActor) == 0x000020, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_CustomEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_CustomEvent_NormalImpulse) == 0x000024, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_CustomEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_CustomEvent_Hit) == 0x000030, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_CustomEvent_Hit' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_Event_EventData) == 0x0000B0, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_AbilityTargetDataFromHitResult_ReturnValue) == 0x000108, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_AbilityTargetDataFromHitResult_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x00011C, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_GetImpulseData_ImpulseDirection) == 0x000120, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_GetImpulseData_ImpulseDirection' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_GetImpulseData_KnockbackMagnitude) == 0x00012C, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_GetImpulseData_KnockbackMagnitude' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_GetImpulseData_KnockbackZAngle) == 0x000130, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_GetImpulseData_KnockbackZAngle' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_IsValid_ReturnValue) == 0x000134, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_CreateDelegate_OutputDelegate2) == 0x000138, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_NotEqual_ClassClass_ReturnValue) == 0x000148, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_NotEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x00014C, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_GetActivatingAbilityComponent_ReturnValue) == 0x000158, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_GetActivatingAbilityComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_NotEqual_ClassClass_ReturnValue2) == 0x00015C, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_NotEqual_ClassClass_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_CreateDelegate_OutputDelegate3) == 0x000160, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000170, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_RemoveActiveGameplayEffect_ReturnValue) == 0x000174, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_RemoveActiveGameplayEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_GetActivatingPawn_ReturnValue2) == 0x000178, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_GetActivatingPawn_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x00017C, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_SetFNameBasedOnHitDirection_NameResult) == 0x000188, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_SetFNameBasedOnHitDirection_NameResult' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x000190, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_IsValid_ReturnValue2) == 0x000194, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_IsValid_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_BreakVector_X) == 0x000198, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_BreakVector_Y) == 0x00019C, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_BreakVector_Z) == 0x0001A0, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, K2Node_CreateDelegate_OutputDelegate4) == 0x0001A4, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::K2Node_CreateDelegate_OutputDelegate4' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_MakeVector_ReturnValue) == 0x0001B4, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_Normal_ReturnValue) == 0x0001C0, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_GetActivatingPawn_ReturnValue3) == 0x0001CC, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_GetActivatingPawn_ReturnValue3' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_Multiply_VectorFloat_ReturnValue2) == 0x0001D0, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_Multiply_VectorFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_Greater_FloatFloat_ReturnValue2) == 0x0001DC, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_Greater_FloatFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit, CallFunc_BooleanAND_ReturnValue) == 0x0001DD, "Member 'GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.K2_ActivateAbilityFromEvent
// 0x0058 (0x0058 - 0x0000)
struct GAB_GenericApplyFullBodyHit_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x0058)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GAB_GenericApplyFullBodyHit_C_K2_ActivateAbilityFromEvent) == 0x000004, "Wrong alignment on GAB_GenericApplyFullBodyHit_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GAB_GenericApplyFullBodyHit_C_K2_ActivateAbilityFromEvent) == 0x000058, "Wrong size on GAB_GenericApplyFullBodyHit_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GAB_GenericApplyFullBodyHit_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.OnHitPawn
// 0x0094 (0x0094 - 0x0000)
struct GAB_GenericApplyFullBodyHit_C_OnHitPawn final
{
public:
	class AActor*                                 SelfActor;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                 OtherActor;                                        // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                NormalImpulse;                                     // 0x0008(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             Hit;                                               // 0x0014(0x0080)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(GAB_GenericApplyFullBodyHit_C_OnHitPawn) == 0x000004, "Wrong alignment on GAB_GenericApplyFullBodyHit_C_OnHitPawn");
static_assert(sizeof(GAB_GenericApplyFullBodyHit_C_OnHitPawn) == 0x000094, "Wrong size on GAB_GenericApplyFullBodyHit_C_OnHitPawn");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_OnHitPawn, SelfActor) == 0x000000, "Member 'GAB_GenericApplyFullBodyHit_C_OnHitPawn::SelfActor' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_OnHitPawn, OtherActor) == 0x000004, "Member 'GAB_GenericApplyFullBodyHit_C_OnHitPawn::OtherActor' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_OnHitPawn, NormalImpulse) == 0x000008, "Member 'GAB_GenericApplyFullBodyHit_C_OnHitPawn::NormalImpulse' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_OnHitPawn, Hit) == 0x000014, "Member 'GAB_GenericApplyFullBodyHit_C_OnHitPawn::Hit' has a wrong offset!");

// Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.K2_CanActivateAbility
// 0x005C (0x005C - 0x0000)
struct GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;                                         // 0x0000(0x0034)(Parm, ContainsInstancedReference)
	struct FGameplayTagContainer                  RelevantTags;                                      // 0x0034(0x0018)(Parm, OutParm)
	bool                                          ReturnValue;                                       // 0x004C(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility) == 0x000004, "Wrong alignment on GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility");
static_assert(sizeof(GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility) == 0x00005C, "Wrong size on GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility, ActorInfo) == 0x000000, "Member 'GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility::ActorInfo' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility, RelevantTags) == 0x000034, "Member 'GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility::RelevantTags' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility, ReturnValue) == 0x00004C, "Member 'GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility::ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000050, "Member 'GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000058, "Member 'GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility, CallFunc_Not_PreBool_ReturnValue) == 0x000059, "Member 'GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}

#pragma pack(pop)
