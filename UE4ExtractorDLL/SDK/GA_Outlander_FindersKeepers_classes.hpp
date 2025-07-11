﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Outlander_FindersKeepers

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GAT_OutlanderTriggeredAbility_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass GA_Outlander_FindersKeepers.GA_Outlander_FindersKeepers_C
// 0x0008 (0x0748 - 0x0740)
class UGA_Outlander_FindersKeepers_C final : public UGAT_OutlanderTriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Outlander_FindersKeepers_C;      // 0x0740(0x0004)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                 GE_FindersKeepers;                                 // 0x0744(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GA_Outlander_FindersKeepers(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Outlander_FindersKeepers_C">();
	}
	static class UGA_Outlander_FindersKeepers_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Outlander_FindersKeepers_C>();
	}
};
static_assert(alignof(UGA_Outlander_FindersKeepers_C) == 0x000004, "Wrong alignment on UGA_Outlander_FindersKeepers_C");
static_assert(sizeof(UGA_Outlander_FindersKeepers_C) == 0x000748, "Wrong size on UGA_Outlander_FindersKeepers_C");
static_assert(offsetof(UGA_Outlander_FindersKeepers_C, UberGraphFrame_GA_Outlander_FindersKeepers_C) == 0x000740, "Member 'UGA_Outlander_FindersKeepers_C::UberGraphFrame_GA_Outlander_FindersKeepers_C' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_FindersKeepers_C, GE_FindersKeepers) == 0x000744, "Member 'UGA_Outlander_FindersKeepers_C::GE_FindersKeepers' has a wrong offset!");

}

#pragma pack(pop)
