﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_HuskPoisonLobberRanged

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GAB_AIBaseRanged_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass GAB_HuskPoisonLobberRanged.GAB_HuskPoisonLobberRanged_C
// 0x000C (0x06F8 - 0x06EC)
class UGAB_HuskPoisonLobberRanged_C final : public UGAB_AIBaseRanged_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GAB_HuskPoisonLobberRanged_C;       // 0x06EC(0x0004)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                           EC_NPCAbilityAttackAOE;                            // 0x06F0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GAB_HuskPoisonLobberRanged(int32 EntryPoint);
	void K2_TriggerFromAnimation(const struct FGameplayTag& ApplicationTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_HuskPoisonLobberRanged_C">();
	}
	static class UGAB_HuskPoisonLobberRanged_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_HuskPoisonLobberRanged_C>();
	}
};
static_assert(alignof(UGAB_HuskPoisonLobberRanged_C) == 0x000004, "Wrong alignment on UGAB_HuskPoisonLobberRanged_C");
static_assert(sizeof(UGAB_HuskPoisonLobberRanged_C) == 0x0006F8, "Wrong size on UGAB_HuskPoisonLobberRanged_C");
static_assert(offsetof(UGAB_HuskPoisonLobberRanged_C, UberGraphFrame_GAB_HuskPoisonLobberRanged_C) == 0x0006EC, "Member 'UGAB_HuskPoisonLobberRanged_C::UberGraphFrame_GAB_HuskPoisonLobberRanged_C' has a wrong offset!");
static_assert(offsetof(UGAB_HuskPoisonLobberRanged_C, EC_NPCAbilityAttackAOE) == 0x0006F0, "Member 'UGAB_HuskPoisonLobberRanged_C::EC_NPCAbilityAttackAOE' has a wrong offset!");

}

#pragma pack(pop)
