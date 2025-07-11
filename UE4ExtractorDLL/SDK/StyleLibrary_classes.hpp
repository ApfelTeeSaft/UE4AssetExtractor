﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StyleLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "EFortUIThemeColor_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "EFortUITheme_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass StyleLibrary.StyleLibrary_C
// 0x0000 (0x001C - 0x001C)
class UStyleLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void Get_Theme_Color(const struct FFortUIStylesheet& Stylesheet, EFortUITheme Theme_Type, EFortUIThemeColor Color_Type, class UObject* __WorldContext, struct FLinearColor* Theme_Color);
	static void Get_Theme(const struct FFortUIStylesheet& Stylesheet, EFortUITheme Theme_Type, class UObject* __WorldContext, struct FFortUITheme* Theme);
	static void Get_Standard_Icon_Size(const struct FFortUIStylesheet& Stylesheet, EFortBrushSize Brush_Size, class UObject* __WorldContext, struct FVector2D* Icon_Size);
	static void Get_Item_Icon_Size(const struct FFortUIStylesheet& Stylesheet, EFortBrushSize Brush_Size, class UObject* __WorldContext, struct FVector2D* Icon_Size);
	static void Get_Additive_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	static void Get_Negative_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	static void Get_Item_Size(const struct FFortUIStylesheet& Stylesheet, EFortBrushSize Brush_Size, class UObject* __WorldContext, struct FVector2D* Item_Size);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StyleLibrary_C">();
	}
	static class UStyleLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStyleLibrary_C>();
	}
};
static_assert(alignof(UStyleLibrary_C) == 0x000004, "Wrong alignment on UStyleLibrary_C");
static_assert(sizeof(UStyleLibrary_C) == 0x00001C, "Wrong size on UStyleLibrary_C");

}

#pragma pack(pop)
