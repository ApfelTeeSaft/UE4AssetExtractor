﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_HuskLobberFloorMelee

#include "Basic.hpp"

#include "GAB_HuskFloorMelee_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// GameplayAbilityBlueprintGeneratedClass GAB_HuskLobberFloorMelee.GAB_HuskLobberFloorMelee_C
// 0x0000 (0x06EC - 0x06EC)
class UGAB_HuskLobberFloorMelee_C final : public UGAB_HuskFloorMelee_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_HuskLobberFloorMelee_C">();
	}
	static class UGAB_HuskLobberFloorMelee_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_HuskLobberFloorMelee_C>();
	}
};
static_assert(alignof(UGAB_HuskLobberFloorMelee_C) == 0x000004, "Wrong alignment on UGAB_HuskLobberFloorMelee_C");
static_assert(sizeof(UGAB_HuskLobberFloorMelee_C) == 0x0006EC, "Wrong size on UGAB_HuskLobberFloorMelee_C");

}

#pragma pack(pop)
