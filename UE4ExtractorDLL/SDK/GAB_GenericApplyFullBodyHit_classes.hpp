﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_GenericApplyFullBodyHit

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// GameplayAbilityBlueprintGeneratedClass GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C
// 0x002C (0x0708 - 0x06DC)
class UGAB_GenericApplyFullBodyHit_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06DC(0x0004)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                 FullBodyHitTransferEffect;                         // 0x06E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                 FullBodyHitActiveEffect;                           // 0x06E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UAnimMontage*                           FullBodyHitMontage;                                // 0x06E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class FName                                   FullBodyHitMontageSection;                         // 0x06EC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                HitImpulse;                                        // 0x06F4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         PushDuration;                                      // 0x0700(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         PushMagnitude;                                     // 0x0704(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GAB_GenericApplyFullBodyHit(int32 EntryPoint);
	void ApplyPushMomentum();
	void PickFullBodyHitMontageSection();
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void OnHitPawn(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void K2_OnEndAbility();
	void OnComplete_25E5E66442E815EB40A6DB8205FE0D98();
	void OnInterrupted_25E5E66442E815EB40A6DB8205FE0D98();
	void OnCancelled_25E5E66442E815EB40A6DB8205FE0D98();
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_GenericApplyFullBodyHit_C">();
	}
	static class UGAB_GenericApplyFullBodyHit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_GenericApplyFullBodyHit_C>();
	}
};
static_assert(alignof(UGAB_GenericApplyFullBodyHit_C) == 0x000004, "Wrong alignment on UGAB_GenericApplyFullBodyHit_C");
static_assert(sizeof(UGAB_GenericApplyFullBodyHit_C) == 0x000708, "Wrong size on UGAB_GenericApplyFullBodyHit_C");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, UberGraphFrame) == 0x0006DC, "Member 'UGAB_GenericApplyFullBodyHit_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, FullBodyHitTransferEffect) == 0x0006E0, "Member 'UGAB_GenericApplyFullBodyHit_C::FullBodyHitTransferEffect' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, FullBodyHitActiveEffect) == 0x0006E4, "Member 'UGAB_GenericApplyFullBodyHit_C::FullBodyHitActiveEffect' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, FullBodyHitMontage) == 0x0006E8, "Member 'UGAB_GenericApplyFullBodyHit_C::FullBodyHitMontage' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, FullBodyHitMontageSection) == 0x0006EC, "Member 'UGAB_GenericApplyFullBodyHit_C::FullBodyHitMontageSection' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, HitImpulse) == 0x0006F4, "Member 'UGAB_GenericApplyFullBodyHit_C::HitImpulse' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, PushDuration) == 0x000700, "Member 'UGAB_GenericApplyFullBodyHit_C::PushDuration' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, PushMagnitude) == 0x000704, "Member 'UGAB_GenericApplyFullBodyHit_C::PushMagnitude' has a wrong offset!");

}

#pragma pack(pop)
