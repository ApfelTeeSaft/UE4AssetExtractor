﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HB_Hospital_4

#include "Basic.hpp"

#include "MyTown_Building_Master_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass HB_Hospital_4.HB_Hospital_4_C
// 0x0000 (0x0510 - 0x0510)
class AHB_Hospital_4_C final : public AMyTown_Building_Master_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HB_Hospital_4_C">();
	}
	static class AHB_Hospital_4_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AHB_Hospital_4_C>();
	}
};
static_assert(alignof(AHB_Hospital_4_C) == 0x000004, "Wrong alignment on AHB_Hospital_4_C");
static_assert(sizeof(AHB_Hospital_4_C) == 0x000510, "Wrong size on AHB_Hospital_4_C");

}

#pragma pack(pop)
