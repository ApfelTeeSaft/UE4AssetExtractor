﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Get_DirectDamageParent

#include "Basic.hpp"

#include "GET_DamageParent_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass Get_DirectDamageParent.Get_DirectDamageParent_C
// 0x0000 (0x0368 - 0x0368)
class UGet_DirectDamageParent_C : public UGET_DamageParent_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Get_DirectDamageParent_C">();
	}
	static class UGet_DirectDamageParent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGet_DirectDamageParent_C>();
	}
};
static_assert(alignof(UGet_DirectDamageParent_C) == 0x000004, "Wrong alignment on UGet_DirectDamageParent_C");
static_assert(sizeof(UGet_DirectDamageParent_C) == 0x000368, "Wrong size on UGet_DirectDamageParent_C");

}

#pragma pack(pop)
