﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_ControlResistance_Medium

#include "Basic.hpp"

#include "GE_BaseControlResistance_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass GE_ControlResistance_Medium.GE_ControlResistance_Medium_C
// 0x0000 (0x0368 - 0x0368)
class UGE_ControlResistance_Medium_C final : public UGE_BaseControlResistance_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_ControlResistance_Medium_C">();
	}
	static class UGE_ControlResistance_Medium_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_ControlResistance_Medium_C>();
	}
};
static_assert(alignof(UGE_ControlResistance_Medium_C) == 0x000004, "Wrong alignment on UGE_ControlResistance_Medium_C");
static_assert(sizeof(UGE_ControlResistance_Medium_C) == 0x000368, "Wrong size on UGE_ControlResistance_Medium_C");

}

#pragma pack(pop)
