﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ReflectDamage_WithSource

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass GA_ReflectDamage_WithSource.GA_ReflectDamage_WithSource_C
// 0x0024 (0x0700 - 0x06DC)
class UGA_ReflectDamage_WithSource_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06DC(0x0004)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                           ReflectedTag;                                      // 0x06E0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 DamageGE;                                          // 0x06E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UAbilitySystemComponent*                OriginalDamageInstigator;                          // 0x06EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UAbilitySystemComponent*                OriginalDamageTarget;                              // 0x06F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class ABuildingGameplayActor*                 Base;                                              // 0x06F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                           RequestReflectionTag;                              // 0x06F8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_ReflectDamage_WithSource(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_ReflectDamage_WithSource_C">();
	}
	static class UGA_ReflectDamage_WithSource_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_ReflectDamage_WithSource_C>();
	}
};
static_assert(alignof(UGA_ReflectDamage_WithSource_C) == 0x000004, "Wrong alignment on UGA_ReflectDamage_WithSource_C");
static_assert(sizeof(UGA_ReflectDamage_WithSource_C) == 0x000700, "Wrong size on UGA_ReflectDamage_WithSource_C");
static_assert(offsetof(UGA_ReflectDamage_WithSource_C, UberGraphFrame) == 0x0006DC, "Member 'UGA_ReflectDamage_WithSource_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_ReflectDamage_WithSource_C, ReflectedTag) == 0x0006E0, "Member 'UGA_ReflectDamage_WithSource_C::ReflectedTag' has a wrong offset!");
static_assert(offsetof(UGA_ReflectDamage_WithSource_C, DamageGE) == 0x0006E8, "Member 'UGA_ReflectDamage_WithSource_C::DamageGE' has a wrong offset!");
static_assert(offsetof(UGA_ReflectDamage_WithSource_C, OriginalDamageInstigator) == 0x0006EC, "Member 'UGA_ReflectDamage_WithSource_C::OriginalDamageInstigator' has a wrong offset!");
static_assert(offsetof(UGA_ReflectDamage_WithSource_C, OriginalDamageTarget) == 0x0006F0, "Member 'UGA_ReflectDamage_WithSource_C::OriginalDamageTarget' has a wrong offset!");
static_assert(offsetof(UGA_ReflectDamage_WithSource_C, Base) == 0x0006F4, "Member 'UGA_ReflectDamage_WithSource_C::Base' has a wrong offset!");
static_assert(offsetof(UGA_ReflectDamage_WithSource_C, RequestReflectionTag) == 0x0006F8, "Member 'UGA_ReflectDamage_WithSource_C::RequestReflectionTag' has a wrong offset!");

}

#pragma pack(pop)
