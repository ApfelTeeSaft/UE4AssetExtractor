﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SetBonus_TrapDamage_Low

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass SetBonus_TrapDamage_Low.SetBonus_TrapDamage_Low_C
// 0x0000 (0x0368 - 0x0368)
class USetBonus_TrapDamage_Low_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SetBonus_TrapDamage_Low_C">();
	}
	static class USetBonus_TrapDamage_Low_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USetBonus_TrapDamage_Low_C>();
	}
};
static_assert(alignof(USetBonus_TrapDamage_Low_C) == 0x000004, "Wrong alignment on USetBonus_TrapDamage_Low_C");
static_assert(sizeof(USetBonus_TrapDamage_Low_C) == 0x000368, "Wrong size on USetBonus_TrapDamage_Low_C");

}

#pragma pack(pop)
