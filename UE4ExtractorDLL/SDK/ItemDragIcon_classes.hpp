﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemDragIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// WidgetBlueprintGeneratedClass ItemDragIcon.ItemDragIcon_C
// 0x000C (0x0250 - 0x0244)
class UItemDragIcon_C final : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0244(0x0004)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 IconImage;                                         // 0x0248(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTexture2D*                             IconTexture;                                       // 0x024C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_ItemDragIcon(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemDragIcon_C">();
	}
	static class UItemDragIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemDragIcon_C>();
	}
};
static_assert(alignof(UItemDragIcon_C) == 0x000004, "Wrong alignment on UItemDragIcon_C");
static_assert(sizeof(UItemDragIcon_C) == 0x000250, "Wrong size on UItemDragIcon_C");
static_assert(offsetof(UItemDragIcon_C, UberGraphFrame) == 0x000244, "Member 'UItemDragIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemDragIcon_C, IconImage) == 0x000248, "Member 'UItemDragIcon_C::IconImage' has a wrong offset!");
static_assert(offsetof(UItemDragIcon_C, IconTexture) == 0x00024C, "Member 'UItemDragIcon_C::IconTexture' has a wrong offset!");

}

#pragma pack(pop)
