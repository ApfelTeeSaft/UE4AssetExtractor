﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Generic_ProximityMines

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass GA_Generic_ProximityMines.GA_Generic_ProximityMines_C
// 0x0160 (0x083C - 0x06DC)
class UGA_Generic_ProximityMines_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06DC(0x0004)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x06E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayEventData                     EventData;                                         // 0x06E4(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         Prj_Speed;                                         // 0x073C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Prj_Gravity;                                       // 0x0740(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         VerticleThrow;                                     // 0x0744(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FFortGameplayAbilityMontageInfo        ThrowMontage;                                      // 0x0748(0x0044)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           EventActivation;                                   // 0x078C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 ProxyMine_BGA;                                     // 0x0794(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                           EventComplete;                                     // 0x0798(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                           M_ThrowMine;                                       // 0x07A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                           TargetAOE;                                         // 0x07A4(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayAttribute                     GadgetWorkshopSubBuilding3;                        // 0x07AC(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         ExplosionLevel;                                    // 0x07B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                 Bonus_Damage;                                      // 0x07B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         DamageMultiplier;                                  // 0x07B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Damage_Multiplier_base;                            // 0x07BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         DamageMultiplier_Lv1;                              // 0x07C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         DamageMultiplier2;                                 // 0x07C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         DamageMultiplier_Lv2;                              // 0x07C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         DamageMultiplier_Lv3;                              // 0x07CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         DamageMultiplier_Lv4;                              // 0x07D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         DamageMultiplier_Lv5;                              // 0x07D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         RangeBase;                                         // 0x07D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         Range_Lv1;                                         // 0x07DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         Range_Lv2;                                         // 0x07E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         Range_Lv3;                                         // 0x07E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         Range_Lv4;                                         // 0x07E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         Range_Lv5;                                         // 0x07EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Activation_Radius;                                 // 0x07F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Activation_Radius_Lv1;                             // 0x07F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Activation_Radius_Lv2;                             // 0x07F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Activation_Radius_Lv3;                             // 0x07FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Activation_Radius_Lv4;                             // 0x0800(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Activation_Radius_Lv5;                             // 0x0804(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Activation_Delay;                                  // 0x0808(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Activation_Delay_Lv1;                              // 0x080C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Activation_Delay_Lv2;                              // 0x0810(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Activation_Delay_Lv3;                              // 0x0814(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Activation_Delay_Lv4;                              // 0x0818(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Activation_Delay_Lv5;                              // 0x081C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FFortFeedbackHandle                    ProximityMineFeedback;                             // 0x0820(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	float                                         LocalDamageBoost;                                  // 0x0830(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                 GE_BGA_Buff;                                       // 0x0834(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AB_BGA_ProximityMine_C*                 Ref_To_Mine;                                       // 0x0838(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GA_Generic_ProximityMines(int32 EntryPoint);
	void K2_ActivateAbility();
	void OnComplete_3526FD6A4CBC2AA7699541A0CD0D006C();
	void OnInterrupted_3526FD6A4CBC2AA7699541A0CD0D006C();
	void OnCancelled_3526FD6A4CBC2AA7699541A0CD0D006C();
	void Set_Level_Upgrades();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Generic_ProximityMines_C">();
	}
	static class UGA_Generic_ProximityMines_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Generic_ProximityMines_C>();
	}
};
static_assert(alignof(UGA_Generic_ProximityMines_C) == 0x000004, "Wrong alignment on UGA_Generic_ProximityMines_C");
static_assert(sizeof(UGA_Generic_ProximityMines_C) == 0x00083C, "Wrong size on UGA_Generic_ProximityMines_C");
static_assert(offsetof(UGA_Generic_ProximityMines_C, UberGraphFrame) == 0x0006DC, "Member 'UGA_Generic_ProximityMines_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, PlayerPawn) == 0x0006E0, "Member 'UGA_Generic_ProximityMines_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, EventData) == 0x0006E4, "Member 'UGA_Generic_ProximityMines_C::EventData' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, Prj_Speed) == 0x00073C, "Member 'UGA_Generic_ProximityMines_C::Prj_Speed' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, Prj_Gravity) == 0x000740, "Member 'UGA_Generic_ProximityMines_C::Prj_Gravity' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, VerticleThrow) == 0x000744, "Member 'UGA_Generic_ProximityMines_C::VerticleThrow' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, ThrowMontage) == 0x000748, "Member 'UGA_Generic_ProximityMines_C::ThrowMontage' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, EventActivation) == 0x00078C, "Member 'UGA_Generic_ProximityMines_C::EventActivation' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, ProxyMine_BGA) == 0x000794, "Member 'UGA_Generic_ProximityMines_C::ProxyMine_BGA' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, EventComplete) == 0x000798, "Member 'UGA_Generic_ProximityMines_C::EventComplete' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, M_ThrowMine) == 0x0007A0, "Member 'UGA_Generic_ProximityMines_C::M_ThrowMine' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, TargetAOE) == 0x0007A4, "Member 'UGA_Generic_ProximityMines_C::TargetAOE' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, GadgetWorkshopSubBuilding3) == 0x0007AC, "Member 'UGA_Generic_ProximityMines_C::GadgetWorkshopSubBuilding3' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, ExplosionLevel) == 0x0007B0, "Member 'UGA_Generic_ProximityMines_C::ExplosionLevel' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, Bonus_Damage) == 0x0007B4, "Member 'UGA_Generic_ProximityMines_C::Bonus_Damage' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, DamageMultiplier) == 0x0007B8, "Member 'UGA_Generic_ProximityMines_C::DamageMultiplier' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, Damage_Multiplier_base) == 0x0007BC, "Member 'UGA_Generic_ProximityMines_C::Damage_Multiplier_base' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, DamageMultiplier_Lv1) == 0x0007C0, "Member 'UGA_Generic_ProximityMines_C::DamageMultiplier_Lv1' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, DamageMultiplier2) == 0x0007C4, "Member 'UGA_Generic_ProximityMines_C::DamageMultiplier2' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, DamageMultiplier_Lv2) == 0x0007C8, "Member 'UGA_Generic_ProximityMines_C::DamageMultiplier_Lv2' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, DamageMultiplier_Lv3) == 0x0007CC, "Member 'UGA_Generic_ProximityMines_C::DamageMultiplier_Lv3' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, DamageMultiplier_Lv4) == 0x0007D0, "Member 'UGA_Generic_ProximityMines_C::DamageMultiplier_Lv4' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, DamageMultiplier_Lv5) == 0x0007D4, "Member 'UGA_Generic_ProximityMines_C::DamageMultiplier_Lv5' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, RangeBase) == 0x0007D8, "Member 'UGA_Generic_ProximityMines_C::RangeBase' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, Range_Lv1) == 0x0007DC, "Member 'UGA_Generic_ProximityMines_C::Range_Lv1' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, Range_Lv2) == 0x0007E0, "Member 'UGA_Generic_ProximityMines_C::Range_Lv2' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, Range_Lv3) == 0x0007E4, "Member 'UGA_Generic_ProximityMines_C::Range_Lv3' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, Range_Lv4) == 0x0007E8, "Member 'UGA_Generic_ProximityMines_C::Range_Lv4' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, Range_Lv5) == 0x0007EC, "Member 'UGA_Generic_ProximityMines_C::Range_Lv5' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, Activation_Radius) == 0x0007F0, "Member 'UGA_Generic_ProximityMines_C::Activation_Radius' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, Activation_Radius_Lv1) == 0x0007F4, "Member 'UGA_Generic_ProximityMines_C::Activation_Radius_Lv1' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, Activation_Radius_Lv2) == 0x0007F8, "Member 'UGA_Generic_ProximityMines_C::Activation_Radius_Lv2' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, Activation_Radius_Lv3) == 0x0007FC, "Member 'UGA_Generic_ProximityMines_C::Activation_Radius_Lv3' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, Activation_Radius_Lv4) == 0x000800, "Member 'UGA_Generic_ProximityMines_C::Activation_Radius_Lv4' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, Activation_Radius_Lv5) == 0x000804, "Member 'UGA_Generic_ProximityMines_C::Activation_Radius_Lv5' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, Activation_Delay) == 0x000808, "Member 'UGA_Generic_ProximityMines_C::Activation_Delay' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, Activation_Delay_Lv1) == 0x00080C, "Member 'UGA_Generic_ProximityMines_C::Activation_Delay_Lv1' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, Activation_Delay_Lv2) == 0x000810, "Member 'UGA_Generic_ProximityMines_C::Activation_Delay_Lv2' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, Activation_Delay_Lv3) == 0x000814, "Member 'UGA_Generic_ProximityMines_C::Activation_Delay_Lv3' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, Activation_Delay_Lv4) == 0x000818, "Member 'UGA_Generic_ProximityMines_C::Activation_Delay_Lv4' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, Activation_Delay_Lv5) == 0x00081C, "Member 'UGA_Generic_ProximityMines_C::Activation_Delay_Lv5' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, ProximityMineFeedback) == 0x000820, "Member 'UGA_Generic_ProximityMines_C::ProximityMineFeedback' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, LocalDamageBoost) == 0x000830, "Member 'UGA_Generic_ProximityMines_C::LocalDamageBoost' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, GE_BGA_Buff) == 0x000834, "Member 'UGA_Generic_ProximityMines_C::GE_BGA_Buff' has a wrong offset!");
static_assert(offsetof(UGA_Generic_ProximityMines_C, Ref_To_Mine) == 0x000838, "Member 'UGA_Generic_ProximityMines_C::Ref_To_Mine' has a wrong offset!");

}

#pragma pack(pop)
