﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_BlasterMeleeDamage

#include "Basic.hpp"

#include "GET_DirectCreatureDamage_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass GE_BlasterMeleeDamage.GE_BlasterMeleeDamage_C
// 0x0000 (0x0368 - 0x0368)
class UGE_BlasterMeleeDamage_C final : public UGET_DirectCreatureDamage_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_BlasterMeleeDamage_C">();
	}
	static class UGE_BlasterMeleeDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_BlasterMeleeDamage_C>();
	}
};
static_assert(alignof(UGE_BlasterMeleeDamage_C) == 0x000004, "Wrong alignment on UGE_BlasterMeleeDamage_C");
static_assert(sizeof(UGE_BlasterMeleeDamage_C) == 0x000368, "Wrong size on UGE_BlasterMeleeDamage_C");

}

#pragma pack(pop)
