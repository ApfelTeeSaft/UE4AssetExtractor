﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Fragment_Orb

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK::Params
{

// Function B_Prj_Fragment_Orb.B_Prj_Fragment_Orb_C.ExecuteUbergraph_B_Prj_Fragment_Orb
// 0x016C (0x016C - 0x0000)
struct B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             K2Node_Event_Hit2;                                 // 0x0004(0x0080)(ConstParm, ContainsInstancedReference)
	struct FHitResult                             K2Node_Event_Hit;                                  // 0x0084(0x0080)(ConstParm, ContainsInstancedReference)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0105(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_106[0x2];                                      // 0x0106(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x010C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0118(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0124(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0130(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0154(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0160(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb) == 0x000004, "Wrong alignment on B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb");
static_assert(sizeof(B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb) == 0x00016C, "Wrong size on B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb");
static_assert(offsetof(B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb, EntryPoint) == 0x000000, "Member 'B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb, K2Node_Event_Hit2) == 0x000004, "Member 'B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb::K2Node_Event_Hit2' has a wrong offset!");
static_assert(offsetof(B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb, K2Node_Event_Hit) == 0x000084, "Member 'B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb, CallFunc_BreakHitResult_bBlockingHit) == 0x000104, "Member 'B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb, CallFunc_BreakHitResult_bInitialOverlap) == 0x000105, "Member 'B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb, CallFunc_BreakHitResult_Time) == 0x000108, "Member 'B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb, CallFunc_BreakHitResult_Location) == 0x00010C, "Member 'B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb, CallFunc_BreakHitResult_ImpactPoint) == 0x000118, "Member 'B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb, CallFunc_BreakHitResult_Normal) == 0x000124, "Member 'B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb, CallFunc_BreakHitResult_ImpactNormal) == 0x000130, "Member 'B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb, CallFunc_BreakHitResult_PhysMat) == 0x00013C, "Member 'B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb, CallFunc_BreakHitResult_HitActor) == 0x000140, "Member 'B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb, CallFunc_BreakHitResult_HitComponent) == 0x000144, "Member 'B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb, CallFunc_BreakHitResult_HitBoneName) == 0x000148, "Member 'B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb, CallFunc_BreakHitResult_HitItem) == 0x000150, "Member 'B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb, CallFunc_BreakHitResult_TraceStart) == 0x000154, "Member 'B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb, CallFunc_BreakHitResult_TraceEnd) == 0x000160, "Member 'B_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");

// Function B_Prj_Fragment_Orb.B_Prj_Fragment_Orb_C.OnBounce
// 0x0080 (0x0080 - 0x0000)
struct B_Prj_Fragment_Orb_C_OnBounce final
{
public:
	struct FHitResult                             Hit;                                               // 0x0000(0x0080)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(B_Prj_Fragment_Orb_C_OnBounce) == 0x000004, "Wrong alignment on B_Prj_Fragment_Orb_C_OnBounce");
static_assert(sizeof(B_Prj_Fragment_Orb_C_OnBounce) == 0x000080, "Wrong size on B_Prj_Fragment_Orb_C_OnBounce");
static_assert(offsetof(B_Prj_Fragment_Orb_C_OnBounce, Hit) == 0x000000, "Member 'B_Prj_Fragment_Orb_C_OnBounce::Hit' has a wrong offset!");

// Function B_Prj_Fragment_Orb.B_Prj_Fragment_Orb_C.OnStop
// 0x0080 (0x0080 - 0x0000)
struct B_Prj_Fragment_Orb_C_OnStop final
{
public:
	struct FHitResult                             Hit;                                               // 0x0000(0x0080)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(B_Prj_Fragment_Orb_C_OnStop) == 0x000004, "Wrong alignment on B_Prj_Fragment_Orb_C_OnStop");
static_assert(sizeof(B_Prj_Fragment_Orb_C_OnStop) == 0x000080, "Wrong size on B_Prj_Fragment_Orb_C_OnStop");
static_assert(offsetof(B_Prj_Fragment_Orb_C_OnStop, Hit) == 0x000000, "Member 'B_Prj_Fragment_Orb_C_OnStop::Hit' has a wrong offset!");

}

#pragma pack(pop)
