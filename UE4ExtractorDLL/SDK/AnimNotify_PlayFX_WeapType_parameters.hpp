﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_PlayFX_WeapType

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK::Params
{

// Function AnimNotify_PlayFX_WeapType.AnimNotify_PlayFX_WeapType_C.Received_Notify
// 0x0090 (0x0090 - 0x0000)
struct AnimNotify_PlayFX_WeapType_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAnimSequenceBase*                      Animation;                                         // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AB_Melee_Generic_C*                     K2Node_DynamicCast_AsB_Melee_Generic;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0xB];                                       // 0x0025(0x000B)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue;           // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_TransformLocation_ReturnValue;            // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_GetSocketRotation_ReturnValue;            // 0x0070(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x007C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AnimNotify_PlayFX_WeapType_C_Received_Notify) == 0x000010, "Wrong alignment on AnimNotify_PlayFX_WeapType_C_Received_Notify");
static_assert(sizeof(AnimNotify_PlayFX_WeapType_C_Received_Notify) == 0x000090, "Wrong size on AnimNotify_PlayFX_WeapType_C_Received_Notify");
static_assert(offsetof(AnimNotify_PlayFX_WeapType_C_Received_Notify, MeshComp) == 0x000000, "Member 'AnimNotify_PlayFX_WeapType_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotify_PlayFX_WeapType_C_Received_Notify, Animation) == 0x000004, "Member 'AnimNotify_PlayFX_WeapType_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotify_PlayFX_WeapType_C_Received_Notify, ReturnValue) == 0x000008, "Member 'AnimNotify_PlayFX_WeapType_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_PlayFX_WeapType_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x00000C, "Member 'AnimNotify_PlayFX_WeapType_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_PlayFX_WeapType_C_Received_Notify, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000010, "Member 'AnimNotify_PlayFX_WeapType_C_Received_Notify::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(AnimNotify_PlayFX_WeapType_C_Received_Notify, K2Node_DynamicCast_bSuccess) == 0x000014, "Member 'AnimNotify_PlayFX_WeapType_C_Received_Notify::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AnimNotify_PlayFX_WeapType_C_Received_Notify, CallFunc_Conv_StringToName_ReturnValue) == 0x000018, "Member 'AnimNotify_PlayFX_WeapType_C_Received_Notify::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_PlayFX_WeapType_C_Received_Notify, K2Node_DynamicCast_AsB_Melee_Generic) == 0x000020, "Member 'AnimNotify_PlayFX_WeapType_C_Received_Notify::K2Node_DynamicCast_AsB_Melee_Generic' has a wrong offset!");
static_assert(offsetof(AnimNotify_PlayFX_WeapType_C_Received_Notify, K2Node_DynamicCast_bSuccess2) == 0x000024, "Member 'AnimNotify_PlayFX_WeapType_C_Received_Notify::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(AnimNotify_PlayFX_WeapType_C_Received_Notify, CallFunc_GetSocketTransform_ReturnValue) == 0x000030, "Member 'AnimNotify_PlayFX_WeapType_C_Received_Notify::CallFunc_GetSocketTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_PlayFX_WeapType_C_Received_Notify, CallFunc_TransformLocation_ReturnValue) == 0x000060, "Member 'AnimNotify_PlayFX_WeapType_C_Received_Notify::CallFunc_TransformLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_PlayFX_WeapType_C_Received_Notify, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x00006C, "Member 'AnimNotify_PlayFX_WeapType_C_Received_Notify::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_PlayFX_WeapType_C_Received_Notify, CallFunc_GetSocketRotation_ReturnValue) == 0x000070, "Member 'AnimNotify_PlayFX_WeapType_C_Received_Notify::CallFunc_GetSocketRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_PlayFX_WeapType_C_Received_Notify, CallFunc_ComposeRotators_ReturnValue) == 0x00007C, "Member 'AnimNotify_PlayFX_WeapType_C_Received_Notify::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_PlayFX_WeapType_C_Received_Notify, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000088, "Member 'AnimNotify_PlayFX_WeapType_C_Received_Notify::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");

}

#pragma pack(pop)
