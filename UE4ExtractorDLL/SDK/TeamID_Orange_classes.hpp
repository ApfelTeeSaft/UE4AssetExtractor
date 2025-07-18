﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TeamID_Orange

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass TeamID_Orange.TeamID_Orange_C
// 0x0000 (0x0024 - 0x0024)
class UTeamID_Orange_C final : public UFortTeamIdentification
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TeamID_Orange_C">();
	}
	static class UTeamID_Orange_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTeamID_Orange_C>();
	}
};
static_assert(alignof(UTeamID_Orange_C) == 0x000004, "Wrong alignment on UTeamID_Orange_C");
static_assert(sizeof(UTeamID_Orange_C) == 0x000024, "Wrong size on UTeamID_Orange_C");

}

#pragma pack(pop)
