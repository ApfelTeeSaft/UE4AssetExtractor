﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DefaultBuildingTool

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass DefaultBuildingTool.DefaultBuildingTool_C
// 0x0000 (0x06C0 - 0x06C0)
class ADefaultBuildingTool_C final : public AFortWeap_BuildingTool
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DefaultBuildingTool_C">();
	}
	static class ADefaultBuildingTool_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADefaultBuildingTool_C>();
	}
};
static_assert(alignof(ADefaultBuildingTool_C) == 0x000004, "Wrong alignment on ADefaultBuildingTool_C");
static_assert(sizeof(ADefaultBuildingTool_C) == 0x0006C0, "Wrong size on ADefaultBuildingTool_C");

}

#pragma pack(pop)
