﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotifyState_AttachAsset

#include "Basic.hpp"


#pragma pack(push, 0x4)
namespace SDK::Params
{

// Function AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C.Received_NotifyBegin
// 0x0024 (0x0024 - 0x0000)
struct AnimNotifyState_AttachAsset_C_Received_NotifyBegin final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAnimSequenceBase*                      Animation_0;                                       // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         TotalDuration;                                     // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ReturnValue;                                       // 0x000C(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x2];                                       // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 CallFunc_GetAssetSkeletalMeshComponentAttachment_ReturnValue; // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin) == 0x000004, "Wrong alignment on AnimNotifyState_AttachAsset_C_Received_NotifyBegin");
static_assert(sizeof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin) == 0x000024, "Wrong size on AnimNotifyState_AttachAsset_C_Received_NotifyBegin");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, MeshComp) == 0x000000, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, Animation_0) == 0x000004, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::Animation_0' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, TotalDuration) == 0x000008, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::TotalDuration' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, ReturnValue) == 0x00000C, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, CallFunc_GetOwner_ReturnValue) == 0x000010, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, K2Node_DynamicCast_AsFort_Pawn) == 0x000014, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, CallFunc_GetAssetSkeletalMeshComponentAttachment_ReturnValue) == 0x00001C, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::CallFunc_GetAssetSkeletalMeshComponentAttachment_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, CallFunc_IsValid_ReturnValue2) == 0x000020, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::CallFunc_IsValid_ReturnValue2' has a wrong offset!");

// Function AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C.Received_NotifyEnd
// 0x0018 (0x0018 - 0x0000)
struct AnimNotifyState_AttachAsset_C_Received_NotifyEnd final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAnimSequenceBase*                      Animation_0;                                       // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AnimNotifyState_AttachAsset_C_Received_NotifyEnd) == 0x000004, "Wrong alignment on AnimNotifyState_AttachAsset_C_Received_NotifyEnd");
static_assert(sizeof(AnimNotifyState_AttachAsset_C_Received_NotifyEnd) == 0x000018, "Wrong size on AnimNotifyState_AttachAsset_C_Received_NotifyEnd");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyEnd, MeshComp) == 0x000000, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyEnd::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyEnd, Animation_0) == 0x000004, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyEnd::Animation_0' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyEnd, ReturnValue) == 0x000008, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyEnd::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyEnd, CallFunc_GetOwner_ReturnValue) == 0x00000C, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyEnd::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyEnd, K2Node_DynamicCast_AsFort_Pawn) == 0x000010, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyEnd::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyEnd, K2Node_DynamicCast_bSuccess) == 0x000014, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyEnd::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

#pragma pack(pop)
