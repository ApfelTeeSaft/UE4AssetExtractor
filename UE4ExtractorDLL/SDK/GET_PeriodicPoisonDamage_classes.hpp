﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GET_PeriodicPoisonDamage

#include "Basic.hpp"

#include "GET_PeriodicPhysicalDamage_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass GET_PeriodicPoisonDamage.GET_PeriodicPoisonDamage_C
// 0x0000 (0x0368 - 0x0368)
class UGET_PeriodicPoisonDamage_C : public UGET_PeriodicPhysicalDamage_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GET_PeriodicPoisonDamage_C">();
	}
	static class UGET_PeriodicPoisonDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGET_PeriodicPoisonDamage_C>();
	}
};
static_assert(alignof(UGET_PeriodicPoisonDamage_C) == 0x000004, "Wrong alignment on UGET_PeriodicPoisonDamage_C");
static_assert(sizeof(UGET_PeriodicPoisonDamage_C) == 0x000368, "Wrong size on UGET_PeriodicPoisonDamage_C");

}

#pragma pack(pop)
