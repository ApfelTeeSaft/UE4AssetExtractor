﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GET_DirectCreatureDamage

#include "Basic.hpp"

#include "GET_DirectPhysicalDamage_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass GET_DirectCreatureDamage.GET_DirectCreatureDamage_C
// 0x0000 (0x0368 - 0x0368)
class UGET_DirectCreatureDamage_C : public UGET_DirectPhysicalDamage_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GET_DirectCreatureDamage_C">();
	}
	static class UGET_DirectCreatureDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGET_DirectCreatureDamage_C>();
	}
};
static_assert(alignof(UGET_DirectCreatureDamage_C) == 0x000004, "Wrong alignment on UGET_DirectCreatureDamage_C");
static_assert(sizeof(UGET_DirectCreatureDamage_C) == 0x000368, "Wrong size on UGET_DirectCreatureDamage_C");

}

#pragma pack(pop)
