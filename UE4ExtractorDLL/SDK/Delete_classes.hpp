﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Delete

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass Delete.Delete_C
// 0x0000 (0x001C - 0x001C)
class IDelete_C final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Delete_C">();
	}
	static class IDelete_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IDelete_C>();
	}
};
static_assert(alignof(IDelete_C) == 0x000004, "Wrong alignment on IDelete_C");
static_assert(sizeof(IDelete_C) == 0x00001C, "Wrong size on IDelete_C");

}

#pragma pack(pop)
