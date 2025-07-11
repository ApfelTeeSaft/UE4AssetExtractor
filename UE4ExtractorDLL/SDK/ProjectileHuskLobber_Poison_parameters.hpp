﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProjectileHuskLobber_Poison

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK::Params
{

// Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.ExecuteUbergraph_ProjectileHuskLobber_Poison
// 0x016C (0x016C - 0x0000)
struct ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AController*                            CallFunc_GetInstigatorController_ReturnValue;      // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortAIController*                      K2Node_DynamicCast_AsFort_AIController;            // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E[0x2];                                        // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetGoalActor_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortTeamAffiliation                          CallFunc_GetTeamAffiliation_ReturnValue;           // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B[0x1];                                       // 0x001B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_Event_MyComp;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                 K2Node_Event_Other;                                // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                    K2Node_Event_OtherComp;                            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bSelfMoved;                           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_Event_HitLocation;                          // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                K2Node_Event_HitNormal;                            // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                K2Node_Event_NormalImpulse;                        // 0x0044(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             K2Node_Event_Hit;                                  // 0x0050(0x0080)(ConstParm, ContainsInstancedReference)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x00DC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E9[0x3];                                       // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector_X;                            // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakVector_Y;                            // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakVector_Z;                            // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_MakeVector_ReturnValue2;                  // 0x00F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0104(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Cross_VectorVector_ReturnValue;           // 0x0110(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_MakeRotationFromAxes_ReturnValue;         // 0x011C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0128(0x0004)()
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x012C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue2;         // 0x0138(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_159[0x3];                                      // 0x0159(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x015C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0164(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0165(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_166[0x2];                                      // 0x0166(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue; // 0x0168(0x0004)()
};
static_assert(alignof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison) == 0x000004, "Wrong alignment on ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison");
static_assert(sizeof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison) == 0x00016C, "Wrong size on ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, EntryPoint) == 0x000000, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::EntryPoint' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, CallFunc_GetInstigatorController_ReturnValue) == 0x000004, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::CallFunc_GetInstigatorController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, K2Node_DynamicCast_AsFort_AIController) == 0x000008, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::K2Node_DynamicCast_AsFort_AIController' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, K2Node_DynamicCast_bSuccess) == 0x00000C, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, Temp_bool_Has_Been_Initd_Variable) == 0x00000D, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, CallFunc_GetGoalActor_ReturnValue) == 0x000010, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::CallFunc_GetGoalActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, K2Node_DynamicCast_AsFort_Pawn) == 0x000014, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, K2Node_DynamicCast_bSuccess2) == 0x000018, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, CallFunc_GetTeamAffiliation_ReturnValue) == 0x000019, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::CallFunc_GetTeamAffiliation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, Temp_bool_IsClosed_Variable) == 0x00001A, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, K2Node_Event_MyComp) == 0x00001C, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::K2Node_Event_MyComp' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, K2Node_Event_Other) == 0x000020, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::K2Node_Event_Other' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, K2Node_Event_OtherComp) == 0x000024, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::K2Node_Event_OtherComp' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, K2Node_Event_bSelfMoved) == 0x000028, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::K2Node_Event_bSelfMoved' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, K2Node_Event_HitLocation) == 0x00002C, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::K2Node_Event_HitLocation' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, K2Node_Event_HitNormal) == 0x000038, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::K2Node_Event_HitNormal' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, K2Node_Event_NormalImpulse) == 0x000044, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::K2Node_Event_NormalImpulse' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, K2Node_Event_Hit) == 0x000050, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, CallFunc_MakeVector_ReturnValue) == 0x0000D0, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, CallFunc_GetVelocity_ReturnValue) == 0x0000DC, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, CallFunc_HasAuthority_ReturnValue) == 0x0000E8, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, CallFunc_BreakVector_X) == 0x0000EC, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, CallFunc_BreakVector_Y) == 0x0000F0, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, CallFunc_BreakVector_Z) == 0x0000F4, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, CallFunc_MakeVector_ReturnValue2) == 0x0000F8, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::CallFunc_MakeVector_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, CallFunc_Normal_ReturnValue) == 0x000104, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, CallFunc_Cross_VectorVector_ReturnValue) == 0x000110, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::CallFunc_Cross_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, CallFunc_MakeRotationFromAxes_ReturnValue) == 0x00011C, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::CallFunc_MakeRotationFromAxes_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, CallFunc_K2_SetTimer_ReturnValue) == 0x000128, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00012C, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, CallFunc_K2_GetActorLocation_ReturnValue2) == 0x000138, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::CallFunc_K2_GetActorLocation_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000144, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, K2Node_ComponentBoundEvent_OtherActor) == 0x000148, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, K2Node_ComponentBoundEvent_OtherComp) == 0x00014C, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000150, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000154, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, CallFunc_IsDedicatedServer_ReturnValue) == 0x000158, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x00015C, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000164, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, CallFunc_Not_PreBool_ReturnValue) == 0x000165, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue) == 0x000168, "Member 'ProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue' has a wrong offset!");

// Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.BndEvt__PoisonArea_K2Node_ComponentBoundEvent_97_ComponentEndOverlapSignature__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct ProjectileHuskLobber_Poison_C_BndEvt__PoisonArea_K2Node_ComponentBoundEvent_97_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         OtherBodyIndex;                                    // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ProjectileHuskLobber_Poison_C_BndEvt__PoisonArea_K2Node_ComponentBoundEvent_97_ComponentEndOverlapSignature__DelegateSignature) == 0x000004, "Wrong alignment on ProjectileHuskLobber_Poison_C_BndEvt__PoisonArea_K2Node_ComponentBoundEvent_97_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(ProjectileHuskLobber_Poison_C_BndEvt__PoisonArea_K2Node_ComponentBoundEvent_97_ComponentEndOverlapSignature__DelegateSignature) == 0x00000C, "Wrong size on ProjectileHuskLobber_Poison_C_BndEvt__PoisonArea_K2Node_ComponentBoundEvent_97_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_BndEvt__PoisonArea_K2Node_ComponentBoundEvent_97_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000000, "Member 'ProjectileHuskLobber_Poison_C_BndEvt__PoisonArea_K2Node_ComponentBoundEvent_97_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_BndEvt__PoisonArea_K2Node_ComponentBoundEvent_97_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000004, "Member 'ProjectileHuskLobber_Poison_C_BndEvt__PoisonArea_K2Node_ComponentBoundEvent_97_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_BndEvt__PoisonArea_K2Node_ComponentBoundEvent_97_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000008, "Member 'ProjectileHuskLobber_Poison_C_BndEvt__PoisonArea_K2Node_ComponentBoundEvent_97_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.ReceiveHit
// 0x00B4 (0x00B4 - 0x0000)
struct ProjectileHuskLobber_Poison_C_ReceiveHit final
{
public:
	class UPrimitiveComponent*                    MyComp;                                            // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                 Other;                                             // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bSelfMoved;                                        // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                HitLocation_0;                                     // 0x0010(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                HitNormal;                                         // 0x001C(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                NormalImpulse;                                     // 0x0028(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             Hit;                                               // 0x0034(0x0080)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(ProjectileHuskLobber_Poison_C_ReceiveHit) == 0x000004, "Wrong alignment on ProjectileHuskLobber_Poison_C_ReceiveHit");
static_assert(sizeof(ProjectileHuskLobber_Poison_C_ReceiveHit) == 0x0000B4, "Wrong size on ProjectileHuskLobber_Poison_C_ReceiveHit");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ReceiveHit, MyComp) == 0x000000, "Member 'ProjectileHuskLobber_Poison_C_ReceiveHit::MyComp' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ReceiveHit, Other) == 0x000004, "Member 'ProjectileHuskLobber_Poison_C_ReceiveHit::Other' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ReceiveHit, OtherComp) == 0x000008, "Member 'ProjectileHuskLobber_Poison_C_ReceiveHit::OtherComp' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ReceiveHit, bSelfMoved) == 0x00000C, "Member 'ProjectileHuskLobber_Poison_C_ReceiveHit::bSelfMoved' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ReceiveHit, HitLocation_0) == 0x000010, "Member 'ProjectileHuskLobber_Poison_C_ReceiveHit::HitLocation_0' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ReceiveHit, HitNormal) == 0x00001C, "Member 'ProjectileHuskLobber_Poison_C_ReceiveHit::HitNormal' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ReceiveHit, NormalImpulse) == 0x000028, "Member 'ProjectileHuskLobber_Poison_C_ReceiveHit::NormalImpulse' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_ReceiveHit, Hit) == 0x000034, "Member 'ProjectileHuskLobber_Poison_C_ReceiveHit::Hit' has a wrong offset!");

// Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.UserConstructionScript
// 0x0010 (0x0010 - 0x0000)
struct ProjectileHuskLobber_Poison_C_UserConstructionScript final
{
public:
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_RandomFloatInRange_ReturnValue2;          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue2; // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ProjectileHuskLobber_Poison_C_UserConstructionScript) == 0x000004, "Wrong alignment on ProjectileHuskLobber_Poison_C_UserConstructionScript");
static_assert(sizeof(ProjectileHuskLobber_Poison_C_UserConstructionScript) == 0x000010, "Wrong size on ProjectileHuskLobber_Poison_C_UserConstructionScript");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_UserConstructionScript, CallFunc_RandomFloatInRange_ReturnValue) == 0x000000, "Member 'ProjectileHuskLobber_Poison_C_UserConstructionScript::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_UserConstructionScript, CallFunc_RandomFloatInRange_ReturnValue2) == 0x000004, "Member 'ProjectileHuskLobber_Poison_C_UserConstructionScript::CallFunc_RandomFloatInRange_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000008, "Member 'ProjectileHuskLobber_Poison_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue2) == 0x00000C, "Member 'ProjectileHuskLobber_Poison_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue2' has a wrong offset!");

// Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.Is Valid Damage Target
// 0x0018 (0x0018 - 0x0000)
struct ProjectileHuskLobber_Poison_C_Is_Valid_Damage_Target final
{
public:
	class AActor*                                 CollidingActor;                                    // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Is_Valid_Damage_Target_0;                          // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              Valid_Pawn;                                        // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortTeamAffiliation                          CallFunc_GetTeamAffiliation_ReturnValue;           // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ValidTargetBool;                                   // 0x0014(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ProjectileHuskLobber_Poison_C_Is_Valid_Damage_Target) == 0x000004, "Wrong alignment on ProjectileHuskLobber_Poison_C_Is_Valid_Damage_Target");
static_assert(sizeof(ProjectileHuskLobber_Poison_C_Is_Valid_Damage_Target) == 0x000018, "Wrong size on ProjectileHuskLobber_Poison_C_Is_Valid_Damage_Target");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_Is_Valid_Damage_Target, CollidingActor) == 0x000000, "Member 'ProjectileHuskLobber_Poison_C_Is_Valid_Damage_Target::CollidingActor' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_Is_Valid_Damage_Target, Is_Valid_Damage_Target_0) == 0x000004, "Member 'ProjectileHuskLobber_Poison_C_Is_Valid_Damage_Target::Is_Valid_Damage_Target_0' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_Is_Valid_Damage_Target, Valid_Pawn) == 0x000008, "Member 'ProjectileHuskLobber_Poison_C_Is_Valid_Damage_Target::Valid_Pawn' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_Is_Valid_Damage_Target, K2Node_DynamicCast_AsFort_Pawn) == 0x00000C, "Member 'ProjectileHuskLobber_Poison_C_Is_Valid_Damage_Target::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_Is_Valid_Damage_Target, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'ProjectileHuskLobber_Poison_C_Is_Valid_Damage_Target::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_Is_Valid_Damage_Target, Temp_bool_Variable) == 0x000011, "Member 'ProjectileHuskLobber_Poison_C_Is_Valid_Damage_Target::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_Is_Valid_Damage_Target, CallFunc_GetTeamAffiliation_ReturnValue) == 0x000012, "Member 'ProjectileHuskLobber_Poison_C_Is_Valid_Damage_Target::CallFunc_GetTeamAffiliation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_Is_Valid_Damage_Target, K2Node_SwitchEnum_CmpSuccess) == 0x000013, "Member 'ProjectileHuskLobber_Poison_C_Is_Valid_Damage_Target::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ProjectileHuskLobber_Poison_C_Is_Valid_Damage_Target, ValidTargetBool) == 0x000014, "Member 'ProjectileHuskLobber_Poison_C_Is_Valid_Damage_Target::ValidTargetBool' has a wrong offset!");

}

#pragma pack(pop)
