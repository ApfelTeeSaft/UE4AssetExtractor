﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HB_Dojo_3

#include "Basic.hpp"

#include "MyTown_Building_Master_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass HB_Dojo_3.HB_Dojo_3_C
// 0x0000 (0x0510 - 0x0510)
class AHB_Dojo_3_C final : public AMyTown_Building_Master_C
{
public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HB_Dojo_3_C">();
	}
	static class AHB_Dojo_3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AHB_Dojo_3_C>();
	}
};
static_assert(alignof(AHB_Dojo_3_C) == 0x000004, "Wrong alignment on AHB_Dojo_3_C");
static_assert(sizeof(AHB_Dojo_3_C) == 0x000510, "Wrong size on AHB_Dojo_3_C");

}

#pragma pack(pop)
