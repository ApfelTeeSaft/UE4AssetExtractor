﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GET_PeriodicCreatureDamage

#include "Basic.hpp"

#include "GET_PeriodicPhysicalDamage_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass GET_PeriodicCreatureDamage.GET_PeriodicCreatureDamage_C
// 0x0000 (0x0368 - 0x0368)
class UGET_PeriodicCreatureDamage_C : public UGET_PeriodicPhysicalDamage_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GET_PeriodicCreatureDamage_C">();
	}
	static class UGET_PeriodicCreatureDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGET_PeriodicCreatureDamage_C>();
	}
};
static_assert(alignof(UGET_PeriodicCreatureDamage_C) == 0x000004, "Wrong alignment on UGET_PeriodicCreatureDamage_C");
static_assert(sizeof(UGET_PeriodicCreatureDamage_C) == 0x000368, "Wrong size on UGET_PeriodicCreatureDamage_C");

}

#pragma pack(pop)
