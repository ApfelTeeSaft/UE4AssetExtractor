﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Outlander_WhereWereGoingWeNeedRoadsApply

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "GAT_OutlanderTriggeredAbility_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass GA_Outlander_WhereWereGoingWeNeedRoadsApply.GA_Outlander_WhereWereGoingWeNeedRoadsApply_C
// 0x0034 (0x0774 - 0x0740)
class UGA_Outlander_WhereWereGoingWeNeedRoadsApply_C final : public UGAT_OutlanderTriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Outlander_WhereWereGoingWeNeedRoadsApply_C; // 0x0740(0x0004)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                           EventActivation;                                   // 0x0744(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_RoadsSpeed;                                     // 0x074C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                  TC_RoadsUpgrade;                                   // 0x0750(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         SpeedBonus;                                        // 0x0768(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         UpgradedSpeed;                                     // 0x076C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         BaseSpeedBonus;                                    // 0x0770(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GA_Outlander_WhereWereGoingWeNeedRoadsApply(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData_0);
	void SetVariables(struct FGameplayEffectSpecHandle* GameplaySpec);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Outlander_WhereWereGoingWeNeedRoadsApply_C">();
	}
	static class UGA_Outlander_WhereWereGoingWeNeedRoadsApply_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Outlander_WhereWereGoingWeNeedRoadsApply_C>();
	}
};
static_assert(alignof(UGA_Outlander_WhereWereGoingWeNeedRoadsApply_C) == 0x000004, "Wrong alignment on UGA_Outlander_WhereWereGoingWeNeedRoadsApply_C");
static_assert(sizeof(UGA_Outlander_WhereWereGoingWeNeedRoadsApply_C) == 0x000774, "Wrong size on UGA_Outlander_WhereWereGoingWeNeedRoadsApply_C");
static_assert(offsetof(UGA_Outlander_WhereWereGoingWeNeedRoadsApply_C, UberGraphFrame_GA_Outlander_WhereWereGoingWeNeedRoadsApply_C) == 0x000740, "Member 'UGA_Outlander_WhereWereGoingWeNeedRoadsApply_C::UberGraphFrame_GA_Outlander_WhereWereGoingWeNeedRoadsApply_C' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_WhereWereGoingWeNeedRoadsApply_C, EventActivation) == 0x000744, "Member 'UGA_Outlander_WhereWereGoingWeNeedRoadsApply_C::EventActivation' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_WhereWereGoingWeNeedRoadsApply_C, GE_RoadsSpeed) == 0x00074C, "Member 'UGA_Outlander_WhereWereGoingWeNeedRoadsApply_C::GE_RoadsSpeed' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_WhereWereGoingWeNeedRoadsApply_C, TC_RoadsUpgrade) == 0x000750, "Member 'UGA_Outlander_WhereWereGoingWeNeedRoadsApply_C::TC_RoadsUpgrade' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_WhereWereGoingWeNeedRoadsApply_C, SpeedBonus) == 0x000768, "Member 'UGA_Outlander_WhereWereGoingWeNeedRoadsApply_C::SpeedBonus' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_WhereWereGoingWeNeedRoadsApply_C, UpgradedSpeed) == 0x00076C, "Member 'UGA_Outlander_WhereWereGoingWeNeedRoadsApply_C::UpgradedSpeed' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_WhereWereGoingWeNeedRoadsApply_C, BaseSpeedBonus) == 0x000770, "Member 'UGA_Outlander_WhereWereGoingWeNeedRoadsApply_C::BaseSpeedBonus' has a wrong offset!");

}

#pragma pack(pop)
