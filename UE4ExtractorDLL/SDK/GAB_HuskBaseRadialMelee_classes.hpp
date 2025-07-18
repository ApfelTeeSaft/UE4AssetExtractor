﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_HuskBaseRadialMelee

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C
// 0x0010 (0x06EC - 0x06DC)
class UGAB_HuskBaseRadialMelee_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06DC(0x0004)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   MontageSectionToPlay;                              // 0x06E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Debug;                                             // 0x06E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GAB_HuskBaseRadialMelee(int32 EntryPoint);
	void K2_ActivateAbility();
	void Triggered_A0D25C0C4C9CDEEB0EB0018B3334307D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_A0D25C0C4C9CDEEB0EB0018B3334307D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_A0D25C0C4C9CDEEB0EB0018B3334307D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_HuskBaseRadialMelee_C">();
	}
	static class UGAB_HuskBaseRadialMelee_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_HuskBaseRadialMelee_C>();
	}
};
static_assert(alignof(UGAB_HuskBaseRadialMelee_C) == 0x000004, "Wrong alignment on UGAB_HuskBaseRadialMelee_C");
static_assert(sizeof(UGAB_HuskBaseRadialMelee_C) == 0x0006EC, "Wrong size on UGAB_HuskBaseRadialMelee_C");
static_assert(offsetof(UGAB_HuskBaseRadialMelee_C, UberGraphFrame) == 0x0006DC, "Member 'UGAB_HuskBaseRadialMelee_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAB_HuskBaseRadialMelee_C, MontageSectionToPlay) == 0x0006E0, "Member 'UGAB_HuskBaseRadialMelee_C::MontageSectionToPlay' has a wrong offset!");
static_assert(offsetof(UGAB_HuskBaseRadialMelee_C, Debug) == 0x0006E8, "Member 'UGAB_HuskBaseRadialMelee_C::Debug' has a wrong offset!");

}

#pragma pack(pop)
