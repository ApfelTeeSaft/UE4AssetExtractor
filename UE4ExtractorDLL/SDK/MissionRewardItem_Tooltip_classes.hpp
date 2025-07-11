﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionRewardItem_Tooltip

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "UMG_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// WidgetBlueprintGeneratedClass MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C
// 0x001C (0x01D4 - 0x01B8)
class UMissionRewardItem_Tooltip_C final : public UUserWidget
{
public:
	class UBorder*                                Border;                                            // 0x01B8(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                 Icon;                                              // 0x01BC(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                             TextField;                                         // 0x01C0(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UFortItem*                              Item;                                              // 0x01C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	class FText                                   DisplayName;                                       // 0x01C8(0x000C)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	class FText Get_Reward_Name();
	struct FSlateBrush Get_Reward_Icon();
	struct FLinearColor Get_Rarity_Color();
	struct FSlateColor Get_Rarity_Color__SlateColor_();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionRewardItem-Tooltip_C">();
	}
	static class UMissionRewardItem_Tooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionRewardItem_Tooltip_C>();
	}
};
static_assert(alignof(UMissionRewardItem_Tooltip_C) == 0x000004, "Wrong alignment on UMissionRewardItem_Tooltip_C");
static_assert(sizeof(UMissionRewardItem_Tooltip_C) == 0x0001D4, "Wrong size on UMissionRewardItem_Tooltip_C");
static_assert(offsetof(UMissionRewardItem_Tooltip_C, Border) == 0x0001B8, "Member 'UMissionRewardItem_Tooltip_C::Border' has a wrong offset!");
static_assert(offsetof(UMissionRewardItem_Tooltip_C, Icon) == 0x0001BC, "Member 'UMissionRewardItem_Tooltip_C::Icon' has a wrong offset!");
static_assert(offsetof(UMissionRewardItem_Tooltip_C, TextField) == 0x0001C0, "Member 'UMissionRewardItem_Tooltip_C::TextField' has a wrong offset!");
static_assert(offsetof(UMissionRewardItem_Tooltip_C, Item) == 0x0001C4, "Member 'UMissionRewardItem_Tooltip_C::Item' has a wrong offset!");
static_assert(offsetof(UMissionRewardItem_Tooltip_C, DisplayName) == 0x0001C8, "Member 'UMissionRewardItem_Tooltip_C::DisplayName' has a wrong offset!");

}

#pragma pack(pop)
