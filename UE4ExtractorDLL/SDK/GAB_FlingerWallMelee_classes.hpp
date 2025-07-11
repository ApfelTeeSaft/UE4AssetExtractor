﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_FlingerWallMelee

#include "Basic.hpp"

#include "GAB_AIBaseMelee_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// GameplayAbilityBlueprintGeneratedClass GAB_FlingerWallMelee.GAB_FlingerWallMelee_C
// 0x0000 (0x06E8 - 0x06E8)
class UGAB_FlingerWallMelee_C final : public UGAB_AIBaseMelee_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_FlingerWallMelee_C">();
	}
	static class UGAB_FlingerWallMelee_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_FlingerWallMelee_C>();
	}
};
static_assert(alignof(UGAB_FlingerWallMelee_C) == 0x000004, "Wrong alignment on UGAB_FlingerWallMelee_C");
static_assert(sizeof(UGAB_FlingerWallMelee_C) == 0x0006E8, "Wrong size on UGAB_FlingerWallMelee_C");

}

#pragma pack(pop)
