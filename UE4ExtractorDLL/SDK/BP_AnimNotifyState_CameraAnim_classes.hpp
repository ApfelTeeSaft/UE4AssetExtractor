﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AnimNotifyState_CameraAnim

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass BP_AnimNotifyState_CameraAnim.BP_AnimNotifyState_CameraAnim_C
// 0x0018 (0x0034 - 0x001C)
class UBP_AnimNotifyState_CameraAnim_C final : public UAnimNotifyState
{
public:
	float                                         PlayRate;                                          // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         BlendInTime;                                       // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         BlendOutTime;                                      // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bLoop;                                             // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ECameraAnimPlaySpace                          Shake_Space;                                       // 0x0029(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A[0x2];                                       // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Shake_Scale;                                       // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UCameraAnim*                            CameraAnim;                                        // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration) const;
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AnimNotifyState_CameraAnim_C">();
	}
	static class UBP_AnimNotifyState_CameraAnim_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AnimNotifyState_CameraAnim_C>();
	}
};
static_assert(alignof(UBP_AnimNotifyState_CameraAnim_C) == 0x000004, "Wrong alignment on UBP_AnimNotifyState_CameraAnim_C");
static_assert(sizeof(UBP_AnimNotifyState_CameraAnim_C) == 0x000034, "Wrong size on UBP_AnimNotifyState_CameraAnim_C");
static_assert(offsetof(UBP_AnimNotifyState_CameraAnim_C, PlayRate) == 0x00001C, "Member 'UBP_AnimNotifyState_CameraAnim_C::PlayRate' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotifyState_CameraAnim_C, BlendInTime) == 0x000020, "Member 'UBP_AnimNotifyState_CameraAnim_C::BlendInTime' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotifyState_CameraAnim_C, BlendOutTime) == 0x000024, "Member 'UBP_AnimNotifyState_CameraAnim_C::BlendOutTime' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotifyState_CameraAnim_C, bLoop) == 0x000028, "Member 'UBP_AnimNotifyState_CameraAnim_C::bLoop' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotifyState_CameraAnim_C, Shake_Space) == 0x000029, "Member 'UBP_AnimNotifyState_CameraAnim_C::Shake_Space' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotifyState_CameraAnim_C, Shake_Scale) == 0x00002C, "Member 'UBP_AnimNotifyState_CameraAnim_C::Shake_Scale' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotifyState_CameraAnim_C, CameraAnim) == 0x000030, "Member 'UBP_AnimNotifyState_CameraAnim_C::CameraAnim' has a wrong offset!");

}

#pragma pack(pop)
