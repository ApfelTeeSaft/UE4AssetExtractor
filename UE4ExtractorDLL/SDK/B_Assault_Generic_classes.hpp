﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Assault_Generic

#include "Basic.hpp"

#include "B_Ranged_Generic_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass B_Assault_Generic.B_Assault_Generic_C
// 0x0000 (0x0774 - 0x0774)
class AB_Assault_Generic_C : public AB_Ranged_Generic_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Assault_Generic_C">();
	}
	static class AB_Assault_Generic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Assault_Generic_C>();
	}
};
static_assert(alignof(AB_Assault_Generic_C) == 0x000004, "Wrong alignment on AB_Assault_Generic_C");
static_assert(sizeof(AB_Assault_Generic_C) == 0x000774, "Wrong size on AB_Assault_Generic_C");

}

#pragma pack(pop)
