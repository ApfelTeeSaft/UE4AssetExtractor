﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Outlander_OnDeathEffects

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass GA_Outlander_OnDeathEffects.GA_Outlander_OnDeathEffects_C
// 0x0078 (0x0754 - 0x06DC)
class UGA_Outlander_OnDeathEffects_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06DC(0x0004)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayEventData                     Event_Data;                                        // 0x06E0(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance)
	class APlayerPawn_Outlander_C*                Outlander_Pawn;                                    // 0x0738(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                  TC_InTheZone;                                      // 0x073C(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_Outlander_OnDeathEffects(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Outlander_OnDeathEffects_C">();
	}
	static class UGA_Outlander_OnDeathEffects_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Outlander_OnDeathEffects_C>();
	}
};
static_assert(alignof(UGA_Outlander_OnDeathEffects_C) == 0x000004, "Wrong alignment on UGA_Outlander_OnDeathEffects_C");
static_assert(sizeof(UGA_Outlander_OnDeathEffects_C) == 0x000754, "Wrong size on UGA_Outlander_OnDeathEffects_C");
static_assert(offsetof(UGA_Outlander_OnDeathEffects_C, UberGraphFrame) == 0x0006DC, "Member 'UGA_Outlander_OnDeathEffects_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_OnDeathEffects_C, Event_Data) == 0x0006E0, "Member 'UGA_Outlander_OnDeathEffects_C::Event_Data' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_OnDeathEffects_C, Outlander_Pawn) == 0x000738, "Member 'UGA_Outlander_OnDeathEffects_C::Outlander_Pawn' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_OnDeathEffects_C, TC_InTheZone) == 0x00073C, "Member 'UGA_Outlander_OnDeathEffects_C::TC_InTheZone' has a wrong offset!");

}

#pragma pack(pop)
