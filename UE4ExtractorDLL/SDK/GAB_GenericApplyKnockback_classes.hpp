﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_GenericApplyKnockback

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C
// 0x006C (0x0748 - 0x06DC)
class UGAB_GenericApplyKnockback_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06DC(0x0004)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                 KnockbackTransferEffect;                           // 0x06E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                 KnockbackActiveEffect;                             // 0x06E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         KnockbackPropagationThreshold;                     // 0x06E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UAnimMontage*                           KnockbackGetUpMontage;                             // 0x06EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UAnimMontage*                           KnockbackJumpUpMontage;                            // 0x06F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UAnimMontage*                           KnockbackFallDownMontage;                          // 0x06F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DebugDraw;                                         // 0x06F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DebugNumbers;                                      // 0x06F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DebugForceKnockbackValues;                         // 0x06FA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bOrientToImpulse;                                  // 0x06FB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FActiveGameplayEffectHandle            Active_Gameplay_Effect;                            // 0x06FC(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                OrientDirection;                                   // 0x0700(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class FName                                   JumpUpMontageSection;                              // 0x070C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                HitDirection;                                      // 0x0714(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class FName                                   FallDownMontageSection;                            // 0x0720(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class FName                                   GetUpMontageSection;                               // 0x0728(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                ImpulseDirectionVelocityOrRotation;                // 0x0730(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                DebugLastLocation;                                 // 0x073C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GAB_GenericApplyKnockback(int32 EntryPoint);
	void DebugLine();
	void OnHitPawn_Event(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnPawnLanded_Event(const struct FHitResult& Hit);
	void SetupMontageSectionsAndOrientDirection();
	void OnReachedJumpApex();
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_OnEndAbility();
	void OnComplete_1F181048470CEB2EB6CC648039C5913C();
	void OnInterrupted_1F181048470CEB2EB6CC648039C5913C();
	void OnCancelled_1F181048470CEB2EB6CC648039C5913C();
	void OnComplete_D744890E4C485F1C80B3E7864AE506FF();
	void OnInterrupted_D744890E4C485F1C80B3E7864AE506FF();
	void OnCancelled_D744890E4C485F1C80B3E7864AE506FF();
	void OnComplete_07DF210D46EDFA929CDBFFB162E8E4CF();
	void OnInterrupted_07DF210D46EDFA929CDBFFB162E8E4CF();
	void OnCancelled_07DF210D46EDFA929CDBFFB162E8E4CF();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_GenericApplyKnockback_C">();
	}
	static class UGAB_GenericApplyKnockback_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_GenericApplyKnockback_C>();
	}
};
static_assert(alignof(UGAB_GenericApplyKnockback_C) == 0x000004, "Wrong alignment on UGAB_GenericApplyKnockback_C");
static_assert(sizeof(UGAB_GenericApplyKnockback_C) == 0x000748, "Wrong size on UGAB_GenericApplyKnockback_C");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, UberGraphFrame) == 0x0006DC, "Member 'UGAB_GenericApplyKnockback_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, KnockbackTransferEffect) == 0x0006E0, "Member 'UGAB_GenericApplyKnockback_C::KnockbackTransferEffect' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, KnockbackActiveEffect) == 0x0006E4, "Member 'UGAB_GenericApplyKnockback_C::KnockbackActiveEffect' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, KnockbackPropagationThreshold) == 0x0006E8, "Member 'UGAB_GenericApplyKnockback_C::KnockbackPropagationThreshold' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, KnockbackGetUpMontage) == 0x0006EC, "Member 'UGAB_GenericApplyKnockback_C::KnockbackGetUpMontage' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, KnockbackJumpUpMontage) == 0x0006F0, "Member 'UGAB_GenericApplyKnockback_C::KnockbackJumpUpMontage' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, KnockbackFallDownMontage) == 0x0006F4, "Member 'UGAB_GenericApplyKnockback_C::KnockbackFallDownMontage' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, DebugDraw) == 0x0006F8, "Member 'UGAB_GenericApplyKnockback_C::DebugDraw' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, DebugNumbers) == 0x0006F9, "Member 'UGAB_GenericApplyKnockback_C::DebugNumbers' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, DebugForceKnockbackValues) == 0x0006FA, "Member 'UGAB_GenericApplyKnockback_C::DebugForceKnockbackValues' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, bOrientToImpulse) == 0x0006FB, "Member 'UGAB_GenericApplyKnockback_C::bOrientToImpulse' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, Active_Gameplay_Effect) == 0x0006FC, "Member 'UGAB_GenericApplyKnockback_C::Active_Gameplay_Effect' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, OrientDirection) == 0x000700, "Member 'UGAB_GenericApplyKnockback_C::OrientDirection' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, JumpUpMontageSection) == 0x00070C, "Member 'UGAB_GenericApplyKnockback_C::JumpUpMontageSection' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, HitDirection) == 0x000714, "Member 'UGAB_GenericApplyKnockback_C::HitDirection' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, FallDownMontageSection) == 0x000720, "Member 'UGAB_GenericApplyKnockback_C::FallDownMontageSection' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, GetUpMontageSection) == 0x000728, "Member 'UGAB_GenericApplyKnockback_C::GetUpMontageSection' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, ImpulseDirectionVelocityOrRotation) == 0x000730, "Member 'UGAB_GenericApplyKnockback_C::ImpulseDirectionVelocityOrRotation' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, DebugLastLocation) == 0x00073C, "Member 'UGAB_GenericApplyKnockback_C::DebugLastLocation' has a wrong offset!");

}

#pragma pack(pop)
