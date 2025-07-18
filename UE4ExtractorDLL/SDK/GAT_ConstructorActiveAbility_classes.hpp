﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAT_ConstructorActiveAbility

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GAT_ActiveAbility_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// GameplayAbilityBlueprintGeneratedClass GAT_ConstructorActiveAbility.GAT_ConstructorActiveAbility_C
// 0x0060 (0x0740 - 0x06E0)
class UGAT_ConstructorActiveAbility_C : public UGAT_ActiveAbility_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GAT_ConstructorActiveAbility_C;     // 0x06E0(0x0004)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayEventData                     Event_Data;                                        // 0x06E4(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance)
	class APlayerPawn_Constructor_C*              ConstructorPlayerPawn;                             // 0x073C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GAT_ConstructorActiveAbility(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAT_ConstructorActiveAbility_C">();
	}
	static class UGAT_ConstructorActiveAbility_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAT_ConstructorActiveAbility_C>();
	}
};
static_assert(alignof(UGAT_ConstructorActiveAbility_C) == 0x000004, "Wrong alignment on UGAT_ConstructorActiveAbility_C");
static_assert(sizeof(UGAT_ConstructorActiveAbility_C) == 0x000740, "Wrong size on UGAT_ConstructorActiveAbility_C");
static_assert(offsetof(UGAT_ConstructorActiveAbility_C, UberGraphFrame_GAT_ConstructorActiveAbility_C) == 0x0006E0, "Member 'UGAT_ConstructorActiveAbility_C::UberGraphFrame_GAT_ConstructorActiveAbility_C' has a wrong offset!");
static_assert(offsetof(UGAT_ConstructorActiveAbility_C, Event_Data) == 0x0006E4, "Member 'UGAT_ConstructorActiveAbility_C::Event_Data' has a wrong offset!");
static_assert(offsetof(UGAT_ConstructorActiveAbility_C, ConstructorPlayerPawn) == 0x00073C, "Member 'UGAT_ConstructorActiveAbility_C::ConstructorPlayerPawn' has a wrong offset!");

}

#pragma pack(pop)
