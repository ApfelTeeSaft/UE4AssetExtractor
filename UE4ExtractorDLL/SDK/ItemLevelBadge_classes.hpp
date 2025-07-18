﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemLevelBadge

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "ItemDisplayMode_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// WidgetBlueprintGeneratedClass ItemLevelBadge.ItemLevelBadge_C
// 0x0414 (0x05CC - 0x01B8)
class UItemLevelBadge_C final : public UUserWidget
{
public:
	class UBorder*                                _Border__Base;                                     // 0x01B8(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                             _Text__Level;                                      // 0x01BC(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class USizeBox*                               Size_Box;                                          // 0x01C0(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	struct FFortMultiSizeFont                     MultiFont;                                         // 0x01C4(0x00F0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortMultiSizeMargin                   MultiMargin;                                       // 0x02B4(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortMultiSizeBrush                    MultiBrush;                                        // 0x0314(0x02B8)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void Update(int32 Max, int32 Level, EFortBrushSize Brush_Size, const struct FFortRarityItemData& Rarity_Data, EItemDisplayMode Display_Mode);
	void Refresh(EItemDisplayMode Display_Mode, int32 Max, int32 Level);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemLevelBadge_C">();
	}
	static class UItemLevelBadge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemLevelBadge_C>();
	}
};
static_assert(alignof(UItemLevelBadge_C) == 0x000004, "Wrong alignment on UItemLevelBadge_C");
static_assert(sizeof(UItemLevelBadge_C) == 0x0005CC, "Wrong size on UItemLevelBadge_C");
static_assert(offsetof(UItemLevelBadge_C, _Border__Base) == 0x0001B8, "Member 'UItemLevelBadge_C::_Border__Base' has a wrong offset!");
static_assert(offsetof(UItemLevelBadge_C, _Text__Level) == 0x0001BC, "Member 'UItemLevelBadge_C::_Text__Level' has a wrong offset!");
static_assert(offsetof(UItemLevelBadge_C, Size_Box) == 0x0001C0, "Member 'UItemLevelBadge_C::Size_Box' has a wrong offset!");
static_assert(offsetof(UItemLevelBadge_C, MultiFont) == 0x0001C4, "Member 'UItemLevelBadge_C::MultiFont' has a wrong offset!");
static_assert(offsetof(UItemLevelBadge_C, MultiMargin) == 0x0002B4, "Member 'UItemLevelBadge_C::MultiMargin' has a wrong offset!");
static_assert(offsetof(UItemLevelBadge_C, MultiBrush) == 0x000314, "Member 'UItemLevelBadge_C::MultiBrush' has a wrong offset!");

}

#pragma pack(pop)
