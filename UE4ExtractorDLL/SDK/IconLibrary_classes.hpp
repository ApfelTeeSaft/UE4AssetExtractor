﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IconLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "FortniteGame_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass IconLibrary.IconLibrary_C
// 0x0000 (0x001C - 0x001C)
class UIconLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void Get_Item_Tier_Icon(const struct FItemTierIconSet& TierIconSet, EFortItemTier Tier, EFortBrushSize Size, class UObject* __WorldContext, struct FSlateBrush* Tier_Brush);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconLibrary_C">();
	}
	static class UIconLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconLibrary_C>();
	}
};
static_assert(alignof(UIconLibrary_C) == 0x000004, "Wrong alignment on UIconLibrary_C");
static_assert(sizeof(UIconLibrary_C) == 0x00001C, "Wrong size on UIconLibrary_C");

}

#pragma pack(pop)
