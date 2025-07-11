﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Outlander_InTheZone

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass GA_Outlander_InTheZone.GA_Outlander_InTheZone_C
// 0x009C (0x0778 - 0x06DC)
class UGA_Outlander_InTheZone_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06DC(0x0004)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayEventData                     EventData;                                         // 0x06E0(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance)
	class APlayerPawn_Outlander_C*                OutlanderPawn;                                     // 0x0738(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                           EventActivation;                                   // 0x073C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         HitCount;                                          // 0x0744(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         HitThreshold;                                      // 0x0748(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                           EventEnterTheZone;                                 // 0x074C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_InTheZoneHit;                                   // 0x0754(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                           EventActivateKeenEyes;                             // 0x0758(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_InTheZone;                                      // 0x0760(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_Outlander_InTheZone(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Outlander_InTheZone_C">();
	}
	static class UGA_Outlander_InTheZone_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Outlander_InTheZone_C>();
	}
};
static_assert(alignof(UGA_Outlander_InTheZone_C) == 0x000004, "Wrong alignment on UGA_Outlander_InTheZone_C");
static_assert(sizeof(UGA_Outlander_InTheZone_C) == 0x000778, "Wrong size on UGA_Outlander_InTheZone_C");
static_assert(offsetof(UGA_Outlander_InTheZone_C, UberGraphFrame) == 0x0006DC, "Member 'UGA_Outlander_InTheZone_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_InTheZone_C, EventData) == 0x0006E0, "Member 'UGA_Outlander_InTheZone_C::EventData' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_InTheZone_C, OutlanderPawn) == 0x000738, "Member 'UGA_Outlander_InTheZone_C::OutlanderPawn' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_InTheZone_C, EventActivation) == 0x00073C, "Member 'UGA_Outlander_InTheZone_C::EventActivation' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_InTheZone_C, HitCount) == 0x000744, "Member 'UGA_Outlander_InTheZone_C::HitCount' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_InTheZone_C, HitThreshold) == 0x000748, "Member 'UGA_Outlander_InTheZone_C::HitThreshold' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_InTheZone_C, EventEnterTheZone) == 0x00074C, "Member 'UGA_Outlander_InTheZone_C::EventEnterTheZone' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_InTheZone_C, GE_InTheZoneHit) == 0x000754, "Member 'UGA_Outlander_InTheZone_C::GE_InTheZoneHit' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_InTheZone_C, EventActivateKeenEyes) == 0x000758, "Member 'UGA_Outlander_InTheZone_C::EventActivateKeenEyes' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_InTheZone_C, TC_InTheZone) == 0x000760, "Member 'UGA_Outlander_InTheZone_C::TC_InTheZone' has a wrong offset!");

}

#pragma pack(pop)
