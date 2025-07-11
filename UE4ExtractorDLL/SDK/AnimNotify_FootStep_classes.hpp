﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_FootStep

#include "Basic.hpp"

#include "Engine_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass AnimNotify_FootStep.AnimNotify_FootStep_C
// 0x0004 (0x0024 - 0x0020)
class UAnimNotify_FootStep_C : public UAnimNotify
{
public:
	int32                                         FootIndex;                                         // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotify_FootStep_C">();
	}
	static class UAnimNotify_FootStep_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_FootStep_C>();
	}
};
static_assert(alignof(UAnimNotify_FootStep_C) == 0x000004, "Wrong alignment on UAnimNotify_FootStep_C");
static_assert(sizeof(UAnimNotify_FootStep_C) == 0x000024, "Wrong size on UAnimNotify_FootStep_C");
static_assert(offsetof(UAnimNotify_FootStep_C, FootIndex) == 0x000020, "Member 'UAnimNotify_FootStep_C::FootIndex' has a wrong offset!");

}

#pragma pack(pop)
