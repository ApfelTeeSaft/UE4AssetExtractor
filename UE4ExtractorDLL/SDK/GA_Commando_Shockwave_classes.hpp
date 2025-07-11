﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Commando_Shockwave

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass GA_Commando_Shockwave.GA_Commando_Shockwave_C
// 0x0124 (0x0800 - 0x06DC)
class UGA_Commando_Shockwave_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06DC(0x0004)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayEventData                     EventData;                                         // 0x06E0(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance)
	class APlayerPawn_Commando_C*                 Commando_Pawn;                                     // 0x0738(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                           Event_Activation;                                  // 0x073C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           Event_Complete;                                    // 0x0744(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                           M_ShockwaveAnim;                                   // 0x074C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                           EC_AppliedEffect;                                  // 0x0750(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_ShouldKnockback;                                // 0x0758(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           EC_BasicRadius;                                    // 0x0770(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           EC_UpgradeRadius;                                  // 0x0778(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_ApplyVulnerability;                             // 0x0780(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          ShouldApplyVulnerability;                          // 0x0798(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_799[0x3];                                      // 0x0799(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 GE_ShockwaveVulnerability;                         // 0x079C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         VulnerableDuration;                                // 0x07A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         VulnerableAmount;                                  // 0x07A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayEffectSpecHandle              VulnerabilitySpec;                                 // 0x07A8(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_PerfectEngineering;                             // 0x07B4(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         Perfect_Engineering_Upgrade;                       // 0x07CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                  TC_ShockAndAwe;                                    // 0x07D0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayEffectSpecHandle              Slow_Spec;                                         // 0x07E8(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         Slow_Duration;                                     // 0x07F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                 GE_ShockwaveSlow;                                  // 0x07F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ShouldSlow;                                        // 0x07FC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GA_Commando_Shockwave(int32 EntryPoint);
	void K2_ActivateAbility();
	void Targeted_F7C7341E49C6B93C7D967988C9C4848C(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_F7C7341E49C6B93C7D967988C9C4848C(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_60F6207840ECA0EA5707139982AC6691(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_60F6207840ECA0EA5707139982AC6691(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_60F6207840ECA0EA5707139982AC6691(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void SetupVariables();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Commando_Shockwave_C">();
	}
	static class UGA_Commando_Shockwave_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Commando_Shockwave_C>();
	}
};
static_assert(alignof(UGA_Commando_Shockwave_C) == 0x000004, "Wrong alignment on UGA_Commando_Shockwave_C");
static_assert(sizeof(UGA_Commando_Shockwave_C) == 0x000800, "Wrong size on UGA_Commando_Shockwave_C");
static_assert(offsetof(UGA_Commando_Shockwave_C, UberGraphFrame) == 0x0006DC, "Member 'UGA_Commando_Shockwave_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Commando_Shockwave_C, EventData) == 0x0006E0, "Member 'UGA_Commando_Shockwave_C::EventData' has a wrong offset!");
static_assert(offsetof(UGA_Commando_Shockwave_C, Commando_Pawn) == 0x000738, "Member 'UGA_Commando_Shockwave_C::Commando_Pawn' has a wrong offset!");
static_assert(offsetof(UGA_Commando_Shockwave_C, Event_Activation) == 0x00073C, "Member 'UGA_Commando_Shockwave_C::Event_Activation' has a wrong offset!");
static_assert(offsetof(UGA_Commando_Shockwave_C, Event_Complete) == 0x000744, "Member 'UGA_Commando_Shockwave_C::Event_Complete' has a wrong offset!");
static_assert(offsetof(UGA_Commando_Shockwave_C, M_ShockwaveAnim) == 0x00074C, "Member 'UGA_Commando_Shockwave_C::M_ShockwaveAnim' has a wrong offset!");
static_assert(offsetof(UGA_Commando_Shockwave_C, EC_AppliedEffect) == 0x000750, "Member 'UGA_Commando_Shockwave_C::EC_AppliedEffect' has a wrong offset!");
static_assert(offsetof(UGA_Commando_Shockwave_C, TC_ShouldKnockback) == 0x000758, "Member 'UGA_Commando_Shockwave_C::TC_ShouldKnockback' has a wrong offset!");
static_assert(offsetof(UGA_Commando_Shockwave_C, EC_BasicRadius) == 0x000770, "Member 'UGA_Commando_Shockwave_C::EC_BasicRadius' has a wrong offset!");
static_assert(offsetof(UGA_Commando_Shockwave_C, EC_UpgradeRadius) == 0x000778, "Member 'UGA_Commando_Shockwave_C::EC_UpgradeRadius' has a wrong offset!");
static_assert(offsetof(UGA_Commando_Shockwave_C, TC_ApplyVulnerability) == 0x000780, "Member 'UGA_Commando_Shockwave_C::TC_ApplyVulnerability' has a wrong offset!");
static_assert(offsetof(UGA_Commando_Shockwave_C, ShouldApplyVulnerability) == 0x000798, "Member 'UGA_Commando_Shockwave_C::ShouldApplyVulnerability' has a wrong offset!");
static_assert(offsetof(UGA_Commando_Shockwave_C, GE_ShockwaveVulnerability) == 0x00079C, "Member 'UGA_Commando_Shockwave_C::GE_ShockwaveVulnerability' has a wrong offset!");
static_assert(offsetof(UGA_Commando_Shockwave_C, VulnerableDuration) == 0x0007A0, "Member 'UGA_Commando_Shockwave_C::VulnerableDuration' has a wrong offset!");
static_assert(offsetof(UGA_Commando_Shockwave_C, VulnerableAmount) == 0x0007A4, "Member 'UGA_Commando_Shockwave_C::VulnerableAmount' has a wrong offset!");
static_assert(offsetof(UGA_Commando_Shockwave_C, VulnerabilitySpec) == 0x0007A8, "Member 'UGA_Commando_Shockwave_C::VulnerabilitySpec' has a wrong offset!");
static_assert(offsetof(UGA_Commando_Shockwave_C, TC_PerfectEngineering) == 0x0007B4, "Member 'UGA_Commando_Shockwave_C::TC_PerfectEngineering' has a wrong offset!");
static_assert(offsetof(UGA_Commando_Shockwave_C, Perfect_Engineering_Upgrade) == 0x0007CC, "Member 'UGA_Commando_Shockwave_C::Perfect_Engineering_Upgrade' has a wrong offset!");
static_assert(offsetof(UGA_Commando_Shockwave_C, TC_ShockAndAwe) == 0x0007D0, "Member 'UGA_Commando_Shockwave_C::TC_ShockAndAwe' has a wrong offset!");
static_assert(offsetof(UGA_Commando_Shockwave_C, Slow_Spec) == 0x0007E8, "Member 'UGA_Commando_Shockwave_C::Slow_Spec' has a wrong offset!");
static_assert(offsetof(UGA_Commando_Shockwave_C, Slow_Duration) == 0x0007F4, "Member 'UGA_Commando_Shockwave_C::Slow_Duration' has a wrong offset!");
static_assert(offsetof(UGA_Commando_Shockwave_C, GE_ShockwaveSlow) == 0x0007F8, "Member 'UGA_Commando_Shockwave_C::GE_ShockwaveSlow' has a wrong offset!");
static_assert(offsetof(UGA_Commando_Shockwave_C, ShouldSlow) == 0x0007FC, "Member 'UGA_Commando_Shockwave_C::ShouldSlow' has a wrong offset!");

}

#pragma pack(pop)
