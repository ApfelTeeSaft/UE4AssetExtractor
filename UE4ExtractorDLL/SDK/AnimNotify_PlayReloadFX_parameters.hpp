﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_PlayReloadFX

#include "Basic.hpp"


#pragma pack(push, 0x4)
namespace SDK::Params
{

// Function AnimNotify_PlayReloadFX.AnimNotify_PlayReloadFX_C.Received_Notify
// 0x0018 (0x0018 - 0x0000)
struct AnimNotify_PlayReloadFX_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAnimSequenceBase*                      Animation;                                         // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AnimNotify_PlayReloadFX_C_Received_Notify) == 0x000004, "Wrong alignment on AnimNotify_PlayReloadFX_C_Received_Notify");
static_assert(sizeof(AnimNotify_PlayReloadFX_C_Received_Notify) == 0x000018, "Wrong size on AnimNotify_PlayReloadFX_C_Received_Notify");
static_assert(offsetof(AnimNotify_PlayReloadFX_C_Received_Notify, MeshComp) == 0x000000, "Member 'AnimNotify_PlayReloadFX_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotify_PlayReloadFX_C_Received_Notify, Animation) == 0x000004, "Member 'AnimNotify_PlayReloadFX_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotify_PlayReloadFX_C_Received_Notify, ReturnValue) == 0x000008, "Member 'AnimNotify_PlayReloadFX_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_PlayReloadFX_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x00000C, "Member 'AnimNotify_PlayReloadFX_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_PlayReloadFX_C_Received_Notify, K2Node_DynamicCast_AsFort_Pawn) == 0x000010, "Member 'AnimNotify_PlayReloadFX_C_Received_Notify::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(AnimNotify_PlayReloadFX_C_Received_Notify, K2Node_DynamicCast_bSuccess) == 0x000014, "Member 'AnimNotify_PlayReloadFX_C_Received_Notify::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

#pragma pack(pop)
