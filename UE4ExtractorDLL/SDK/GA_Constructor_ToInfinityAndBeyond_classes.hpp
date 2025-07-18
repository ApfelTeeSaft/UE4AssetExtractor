﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Constructor_ToInfinityAndBeyond

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass GA_Constructor_ToInfinityAndBeyond.GA_Constructor_ToInfinityAndBeyond_C
// 0x008C (0x0768 - 0x06DC)
class UGA_Constructor_ToInfinityAndBeyond_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06DC(0x0004)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayEventData                     EventData;                                         // 0x06E0(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance)
	class APlayerPawn_Constructor_C*              Constructor_Pawn;                                  // 0x0738(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                           EventActivation;                                   // 0x073C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           EventComplete;                                     // 0x0744(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         ExplosionDelay;                                    // 0x074C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                  TC_InBase;                                         // 0x0750(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData_0);
	void Targeted_35315E614EE08E9B38A0B1BBADAA3319(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_35315E614EE08E9B38A0B1BBADAA3319(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);

	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Constructor_ToInfinityAndBeyond_C">();
	}
	static class UGA_Constructor_ToInfinityAndBeyond_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Constructor_ToInfinityAndBeyond_C>();
	}
};
static_assert(alignof(UGA_Constructor_ToInfinityAndBeyond_C) == 0x000004, "Wrong alignment on UGA_Constructor_ToInfinityAndBeyond_C");
static_assert(sizeof(UGA_Constructor_ToInfinityAndBeyond_C) == 0x000768, "Wrong size on UGA_Constructor_ToInfinityAndBeyond_C");
static_assert(offsetof(UGA_Constructor_ToInfinityAndBeyond_C, UberGraphFrame) == 0x0006DC, "Member 'UGA_Constructor_ToInfinityAndBeyond_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Constructor_ToInfinityAndBeyond_C, EventData) == 0x0006E0, "Member 'UGA_Constructor_ToInfinityAndBeyond_C::EventData' has a wrong offset!");
static_assert(offsetof(UGA_Constructor_ToInfinityAndBeyond_C, Constructor_Pawn) == 0x000738, "Member 'UGA_Constructor_ToInfinityAndBeyond_C::Constructor_Pawn' has a wrong offset!");
static_assert(offsetof(UGA_Constructor_ToInfinityAndBeyond_C, EventActivation) == 0x00073C, "Member 'UGA_Constructor_ToInfinityAndBeyond_C::EventActivation' has a wrong offset!");
static_assert(offsetof(UGA_Constructor_ToInfinityAndBeyond_C, EventComplete) == 0x000744, "Member 'UGA_Constructor_ToInfinityAndBeyond_C::EventComplete' has a wrong offset!");
static_assert(offsetof(UGA_Constructor_ToInfinityAndBeyond_C, ExplosionDelay) == 0x00074C, "Member 'UGA_Constructor_ToInfinityAndBeyond_C::ExplosionDelay' has a wrong offset!");
static_assert(offsetof(UGA_Constructor_ToInfinityAndBeyond_C, TC_InBase) == 0x000750, "Member 'UGA_Constructor_ToInfinityAndBeyond_C::TC_InBase' has a wrong offset!");

}

#pragma pack(pop)
