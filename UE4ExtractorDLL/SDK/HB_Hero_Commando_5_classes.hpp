﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HB_Hero_Commando_5

#include "Basic.hpp"

#include "MyTown_Building_Master_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass HB_Hero_Commando_5.HB_Hero_Commando_5_C
// 0x0000 (0x0510 - 0x0510)
class AHB_Hero_Commando_5_C final : public AMyTown_Building_Master_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HB_Hero_Commando_5_C">();
	}
	static class AHB_Hero_Commando_5_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AHB_Hero_Commando_5_C>();
	}
};
static_assert(alignof(AHB_Hero_Commando_5_C) == 0x000004, "Wrong alignment on AHB_Hero_Commando_5_C");
static_assert(sizeof(AHB_Hero_Commando_5_C) == 0x000510, "Wrong size on AHB_Hero_Commando_5_C");

}

#pragma pack(pop)
