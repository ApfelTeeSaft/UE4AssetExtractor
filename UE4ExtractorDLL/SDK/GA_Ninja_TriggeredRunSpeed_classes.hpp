﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Ninja_TriggeredRunSpeed

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass GA_Ninja_TriggeredRunSpeed.GA_Ninja_TriggeredRunSpeed_C
// 0x009C (0x0778 - 0x06DC)
class UGA_Ninja_TriggeredRunSpeed_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06DC(0x0004)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                           TC_TriggeredTag;                                   // 0x06E0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   Effects_Location_Bone3;                            // 0x06E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class FName                                   Effects_Location_Bone4;                            // 0x06F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class FName                                   Effects_Location_Bone2;                            // 0x06F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class FName                                   Effects_Location_Bone1;                            // 0x0700(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                        P_RunTrails;                                       // 0x0708(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayEventData                     EventPayload;                                      // 0x070C(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           EventComplete;                                     // 0x0764(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           EventActivation;                                   // 0x076C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance)
	class APlayerPawn_Ninja_C*                    NinjaPawn;                                         // 0x0774(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void ApplyRunTrails(class UParticleSystem* Emitter_Template, class USceneComponent* Scene_Component);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Ninja_TriggeredRunSpeed_C">();
	}
	static class UGA_Ninja_TriggeredRunSpeed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Ninja_TriggeredRunSpeed_C>();
	}
};
static_assert(alignof(UGA_Ninja_TriggeredRunSpeed_C) == 0x000004, "Wrong alignment on UGA_Ninja_TriggeredRunSpeed_C");
static_assert(sizeof(UGA_Ninja_TriggeredRunSpeed_C) == 0x000778, "Wrong size on UGA_Ninja_TriggeredRunSpeed_C");
static_assert(offsetof(UGA_Ninja_TriggeredRunSpeed_C, UberGraphFrame) == 0x0006DC, "Member 'UGA_Ninja_TriggeredRunSpeed_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Ninja_TriggeredRunSpeed_C, TC_TriggeredTag) == 0x0006E0, "Member 'UGA_Ninja_TriggeredRunSpeed_C::TC_TriggeredTag' has a wrong offset!");
static_assert(offsetof(UGA_Ninja_TriggeredRunSpeed_C, Effects_Location_Bone3) == 0x0006E8, "Member 'UGA_Ninja_TriggeredRunSpeed_C::Effects_Location_Bone3' has a wrong offset!");
static_assert(offsetof(UGA_Ninja_TriggeredRunSpeed_C, Effects_Location_Bone4) == 0x0006F0, "Member 'UGA_Ninja_TriggeredRunSpeed_C::Effects_Location_Bone4' has a wrong offset!");
static_assert(offsetof(UGA_Ninja_TriggeredRunSpeed_C, Effects_Location_Bone2) == 0x0006F8, "Member 'UGA_Ninja_TriggeredRunSpeed_C::Effects_Location_Bone2' has a wrong offset!");
static_assert(offsetof(UGA_Ninja_TriggeredRunSpeed_C, Effects_Location_Bone1) == 0x000700, "Member 'UGA_Ninja_TriggeredRunSpeed_C::Effects_Location_Bone1' has a wrong offset!");
static_assert(offsetof(UGA_Ninja_TriggeredRunSpeed_C, P_RunTrails) == 0x000708, "Member 'UGA_Ninja_TriggeredRunSpeed_C::P_RunTrails' has a wrong offset!");
static_assert(offsetof(UGA_Ninja_TriggeredRunSpeed_C, EventPayload) == 0x00070C, "Member 'UGA_Ninja_TriggeredRunSpeed_C::EventPayload' has a wrong offset!");
static_assert(offsetof(UGA_Ninja_TriggeredRunSpeed_C, EventComplete) == 0x000764, "Member 'UGA_Ninja_TriggeredRunSpeed_C::EventComplete' has a wrong offset!");
static_assert(offsetof(UGA_Ninja_TriggeredRunSpeed_C, EventActivation) == 0x00076C, "Member 'UGA_Ninja_TriggeredRunSpeed_C::EventActivation' has a wrong offset!");
static_assert(offsetof(UGA_Ninja_TriggeredRunSpeed_C, NinjaPawn) == 0x000774, "Member 'UGA_Ninja_TriggeredRunSpeed_C::NinjaPawn' has a wrong offset!");

}

#pragma pack(pop)
