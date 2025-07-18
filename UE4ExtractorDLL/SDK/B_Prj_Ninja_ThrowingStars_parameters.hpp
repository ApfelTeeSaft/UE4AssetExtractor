﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Ninja_ThrowingStars

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK::Params
{

// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.ExecuteUbergraph_B_Prj_Ninja_ThrowingStars
// 0x0230 (0x0230 - 0x0000)
struct B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0014(0x0080)(ConstParm, ContainsInstancedReference)
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;                    // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A[0x2];                                       // 0x009A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)> K2Node_CreateDelegate_OutputDelegate;              // 0x009C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_AD[0x3];                                       // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_Event_MyComp;                               // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                 K2Node_Event_Other;                                // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                    K2Node_Event_OtherComp;                            // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bSelfMoved;                           // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BD[0x3];                                       // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_Event_HitLocation;                          // 0x00C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                K2Node_Event_HitNormal;                            // 0x00CC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                K2Node_Event_NormalImpulse;                        // 0x00D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             K2Node_Event_Hit;                                  // 0x00E4(0x0080)(ConstParm, ContainsInstancedReference)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0164(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0165(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_166[0x2];                                      // 0x0166(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x016C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0178(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0184(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0190(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x01B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x01C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn2;                   // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D1[0x3];                                      // 0x01D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_Event_HitActors;                            // 0x01D4(0x000C)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>                     K2Node_Event_HitResults;                           // 0x01E0(0x000C)(ConstParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                 K2Node_CustomEvent_DamagedActor;                   // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         K2Node_CustomEvent_Damage;                         // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AController*                            K2Node_CustomEvent_InstigatedBy;                   // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                 K2Node_CustomEvent_DamageCauser;                   // 0x01FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                K2Node_CustomEvent_HitLocation;                    // 0x0200(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                    K2Node_CustomEvent_FHitComponent;                  // 0x020C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                   K2Node_CustomEvent_BoneName;                       // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                K2Node_CustomEvent_Momentum;                       // 0x0218(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0224(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn3;                   // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess3;                      // 0x022C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortTeamAffiliation                          CallFunc_GetTeamAffiliation_ReturnValue;           // 0x022D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x022E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars) == 0x000004, "Wrong alignment on B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars");
static_assert(sizeof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars) == 0x000230, "Wrong size on B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, EntryPoint) == 0x000000, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, K2Node_ComponentBoundEvent_OtherActor) == 0x000004, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, K2Node_ComponentBoundEvent_OtherComp) == 0x000008, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x00000C, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, K2Node_ComponentBoundEvent_bFromSweep) == 0x000010, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, K2Node_ComponentBoundEvent_SweepResult) == 0x000014, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, K2Node_DynamicCast_AsFort_Pawn) == 0x000094, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000099, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, K2Node_CreateDelegate_OutputDelegate) == 0x00009C, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, CallFunc_IsDedicatedServer_ReturnValue) == 0x0000AC, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, K2Node_Event_MyComp) == 0x0000B0, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::K2Node_Event_MyComp' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, K2Node_Event_Other) == 0x0000B4, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::K2Node_Event_Other' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, K2Node_Event_OtherComp) == 0x0000B8, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::K2Node_Event_OtherComp' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, K2Node_Event_bSelfMoved) == 0x0000BC, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::K2Node_Event_bSelfMoved' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, K2Node_Event_HitLocation) == 0x0000C0, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::K2Node_Event_HitLocation' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, K2Node_Event_HitNormal) == 0x0000CC, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::K2Node_Event_HitNormal' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, K2Node_Event_NormalImpulse) == 0x0000D8, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::K2Node_Event_NormalImpulse' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, K2Node_Event_Hit) == 0x0000E4, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, CallFunc_BreakHitResult_bBlockingHit) == 0x000164, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, CallFunc_BreakHitResult_bInitialOverlap) == 0x000165, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, CallFunc_BreakHitResult_Time) == 0x000168, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, CallFunc_BreakHitResult_Location) == 0x00016C, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, CallFunc_BreakHitResult_ImpactPoint) == 0x000178, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, CallFunc_BreakHitResult_Normal) == 0x000184, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, CallFunc_BreakHitResult_ImpactNormal) == 0x000190, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, CallFunc_BreakHitResult_PhysMat) == 0x00019C, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, CallFunc_BreakHitResult_HitActor) == 0x0001A0, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, CallFunc_BreakHitResult_HitComponent) == 0x0001A4, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, CallFunc_BreakHitResult_HitBoneName) == 0x0001A8, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, CallFunc_BreakHitResult_HitItem) == 0x0001B0, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, CallFunc_BreakHitResult_TraceStart) == 0x0001B4, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, CallFunc_BreakHitResult_TraceEnd) == 0x0001C0, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, K2Node_DynamicCast_AsFort_Pawn2) == 0x0001CC, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::K2Node_DynamicCast_AsFort_Pawn2' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, K2Node_DynamicCast_bSuccess2) == 0x0001D0, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, K2Node_Event_HitActors) == 0x0001D4, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::K2Node_Event_HitActors' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, K2Node_Event_HitResults) == 0x0001E0, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::K2Node_Event_HitResults' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x0001EC, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, K2Node_CustomEvent_DamagedActor) == 0x0001F0, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::K2Node_CustomEvent_DamagedActor' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, K2Node_CustomEvent_Damage) == 0x0001F4, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::K2Node_CustomEvent_Damage' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, K2Node_CustomEvent_InstigatedBy) == 0x0001F8, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::K2Node_CustomEvent_InstigatedBy' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, K2Node_CustomEvent_DamageCauser) == 0x0001FC, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::K2Node_CustomEvent_DamageCauser' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, K2Node_CustomEvent_HitLocation) == 0x000200, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::K2Node_CustomEvent_HitLocation' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, K2Node_CustomEvent_FHitComponent) == 0x00020C, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::K2Node_CustomEvent_FHitComponent' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, K2Node_CustomEvent_BoneName) == 0x000210, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::K2Node_CustomEvent_BoneName' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, K2Node_CustomEvent_Momentum) == 0x000218, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::K2Node_CustomEvent_Momentum' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, CallFunc_GetOwner_ReturnValue) == 0x000224, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, K2Node_DynamicCast_AsFort_Pawn3) == 0x000228, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::K2Node_DynamicCast_AsFort_Pawn3' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, K2Node_DynamicCast_bSuccess3) == 0x00022C, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::K2Node_DynamicCast_bSuccess3' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, CallFunc_GetTeamAffiliation_ReturnValue) == 0x00022D, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::CallFunc_GetTeamAffiliation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars, K2Node_SwitchEnum_CmpSuccess) == 0x00022E, "Member 'B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.BndEvt__CollisionBox_K2Node_ComponentBoundEvent_30_ComponentBeginOverlapSignature__DelegateSignature
// 0x0090 (0x0090 - 0x0000)
struct B_Prj_Ninja_ThrowingStars_C_BndEvt__CollisionBox_K2Node_ComponentBoundEvent_30_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         OtherBodyIndex;                                    // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bFromSweep;                                        // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0010(0x0080)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(B_Prj_Ninja_ThrowingStars_C_BndEvt__CollisionBox_K2Node_ComponentBoundEvent_30_ComponentBeginOverlapSignature__DelegateSignature) == 0x000004, "Wrong alignment on B_Prj_Ninja_ThrowingStars_C_BndEvt__CollisionBox_K2Node_ComponentBoundEvent_30_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(B_Prj_Ninja_ThrowingStars_C_BndEvt__CollisionBox_K2Node_ComponentBoundEvent_30_ComponentBeginOverlapSignature__DelegateSignature) == 0x000090, "Wrong size on B_Prj_Ninja_ThrowingStars_C_BndEvt__CollisionBox_K2Node_ComponentBoundEvent_30_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_BndEvt__CollisionBox_K2Node_ComponentBoundEvent_30_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000000, "Member 'B_Prj_Ninja_ThrowingStars_C_BndEvt__CollisionBox_K2Node_ComponentBoundEvent_30_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_BndEvt__CollisionBox_K2Node_ComponentBoundEvent_30_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000004, "Member 'B_Prj_Ninja_ThrowingStars_C_BndEvt__CollisionBox_K2Node_ComponentBoundEvent_30_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_BndEvt__CollisionBox_K2Node_ComponentBoundEvent_30_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000008, "Member 'B_Prj_Ninja_ThrowingStars_C_BndEvt__CollisionBox_K2Node_ComponentBoundEvent_30_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_BndEvt__CollisionBox_K2Node_ComponentBoundEvent_30_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00000C, "Member 'B_Prj_Ninja_ThrowingStars_C_BndEvt__CollisionBox_K2Node_ComponentBoundEvent_30_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_BndEvt__CollisionBox_K2Node_ComponentBoundEvent_30_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000010, "Member 'B_Prj_Ninja_ThrowingStars_C_BndEvt__CollisionBox_K2Node_ComponentBoundEvent_30_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.HomeTargetDied
// 0x0034 (0x0034 - 0x0000)
struct B_Prj_Ninja_ThrowingStars_C_HomeTargetDied final
{
public:
	class AActor*                                 DamagedActor;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         Damage;                                            // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AController*                            InstigatedBy;                                      // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                 DamageCauser;                                      // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                HitLocation_0;                                     // 0x0010(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                    FHitComponent;                                     // 0x001C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                   BoneName;                                          // 0x0020(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                Momentum;                                          // 0x0028(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_Prj_Ninja_ThrowingStars_C_HomeTargetDied) == 0x000004, "Wrong alignment on B_Prj_Ninja_ThrowingStars_C_HomeTargetDied");
static_assert(sizeof(B_Prj_Ninja_ThrowingStars_C_HomeTargetDied) == 0x000034, "Wrong size on B_Prj_Ninja_ThrowingStars_C_HomeTargetDied");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_HomeTargetDied, DamagedActor) == 0x000000, "Member 'B_Prj_Ninja_ThrowingStars_C_HomeTargetDied::DamagedActor' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_HomeTargetDied, Damage) == 0x000004, "Member 'B_Prj_Ninja_ThrowingStars_C_HomeTargetDied::Damage' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_HomeTargetDied, InstigatedBy) == 0x000008, "Member 'B_Prj_Ninja_ThrowingStars_C_HomeTargetDied::InstigatedBy' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_HomeTargetDied, DamageCauser) == 0x00000C, "Member 'B_Prj_Ninja_ThrowingStars_C_HomeTargetDied::DamageCauser' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_HomeTargetDied, HitLocation_0) == 0x000010, "Member 'B_Prj_Ninja_ThrowingStars_C_HomeTargetDied::HitLocation_0' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_HomeTargetDied, FHitComponent) == 0x00001C, "Member 'B_Prj_Ninja_ThrowingStars_C_HomeTargetDied::FHitComponent' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_HomeTargetDied, BoneName) == 0x000020, "Member 'B_Prj_Ninja_ThrowingStars_C_HomeTargetDied::BoneName' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_HomeTargetDied, Momentum) == 0x000028, "Member 'B_Prj_Ninja_ThrowingStars_C_HomeTargetDied::Momentum' has a wrong offset!");

// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.OnExploded
// 0x0018 (0x0018 - 0x0000)
struct B_Prj_Ninja_ThrowingStars_C_OnExploded final
{
public:
	TArray<class AActor*>                         HitActors;                                         // 0x0000(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>                     HitResults;                                        // 0x000C(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(B_Prj_Ninja_ThrowingStars_C_OnExploded) == 0x000004, "Wrong alignment on B_Prj_Ninja_ThrowingStars_C_OnExploded");
static_assert(sizeof(B_Prj_Ninja_ThrowingStars_C_OnExploded) == 0x000018, "Wrong size on B_Prj_Ninja_ThrowingStars_C_OnExploded");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_OnExploded, HitActors) == 0x000000, "Member 'B_Prj_Ninja_ThrowingStars_C_OnExploded::HitActors' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_OnExploded, HitResults) == 0x00000C, "Member 'B_Prj_Ninja_ThrowingStars_C_OnExploded::HitResults' has a wrong offset!");

// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.ReceiveHit
// 0x00B4 (0x00B4 - 0x0000)
struct B_Prj_Ninja_ThrowingStars_C_ReceiveHit final
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
static_assert(alignof(B_Prj_Ninja_ThrowingStars_C_ReceiveHit) == 0x000004, "Wrong alignment on B_Prj_Ninja_ThrowingStars_C_ReceiveHit");
static_assert(sizeof(B_Prj_Ninja_ThrowingStars_C_ReceiveHit) == 0x0000B4, "Wrong size on B_Prj_Ninja_ThrowingStars_C_ReceiveHit");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ReceiveHit, MyComp) == 0x000000, "Member 'B_Prj_Ninja_ThrowingStars_C_ReceiveHit::MyComp' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ReceiveHit, Other) == 0x000004, "Member 'B_Prj_Ninja_ThrowingStars_C_ReceiveHit::Other' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ReceiveHit, OtherComp) == 0x000008, "Member 'B_Prj_Ninja_ThrowingStars_C_ReceiveHit::OtherComp' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ReceiveHit, bSelfMoved) == 0x00000C, "Member 'B_Prj_Ninja_ThrowingStars_C_ReceiveHit::bSelfMoved' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ReceiveHit, HitLocation_0) == 0x000010, "Member 'B_Prj_Ninja_ThrowingStars_C_ReceiveHit::HitLocation_0' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ReceiveHit, HitNormal) == 0x00001C, "Member 'B_Prj_Ninja_ThrowingStars_C_ReceiveHit::HitNormal' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ReceiveHit, NormalImpulse) == 0x000028, "Member 'B_Prj_Ninja_ThrowingStars_C_ReceiveHit::NormalImpulse' has a wrong offset!");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_ReceiveHit, Hit) == 0x000034, "Member 'B_Prj_Ninja_ThrowingStars_C_ReceiveHit::Hit' has a wrong offset!");

// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.OnRep_Piercing
// 0x0001 (0x0001 - 0x0000)
struct B_Prj_Ninja_ThrowingStars_C_OnRep_Piercing final
{
public:
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_Prj_Ninja_ThrowingStars_C_OnRep_Piercing) == 0x000001, "Wrong alignment on B_Prj_Ninja_ThrowingStars_C_OnRep_Piercing");
static_assert(sizeof(B_Prj_Ninja_ThrowingStars_C_OnRep_Piercing) == 0x000001, "Wrong size on B_Prj_Ninja_ThrowingStars_C_OnRep_Piercing");
static_assert(offsetof(B_Prj_Ninja_ThrowingStars_C_OnRep_Piercing, CallFunc_IsDedicatedServer_ReturnValue) == 0x000000, "Member 'B_Prj_Ninja_ThrowingStars_C_OnRep_Piercing::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");

}

#pragma pack(pop)
