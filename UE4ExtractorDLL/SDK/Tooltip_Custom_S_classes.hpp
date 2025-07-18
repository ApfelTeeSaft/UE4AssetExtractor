﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tooltip_Custom_S

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// WidgetBlueprintGeneratedClass Tooltip-Custom-S.Tooltip-Custom-S_C
// 0x0038 (0x01F0 - 0x01B8)
class UTooltip_Custom_S_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01B8(0x0004)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 _hr_;                                              // 0x01BC(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UHorizontalBox*                         Body_HBox;                                         // 0x01C0(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UNamedSlot*                             Content_Slot;                                      // 0x01C4(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UHorizontalBox*                         Header_HBox;                                       // 0x01C8(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                 Icon_Header;                                       // 0x01CC(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class USpacer*                                Spacer_Header;                                     // 0x01D0(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class USpacer*                                Spacer_Icon;                                       // 0x01D4(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                             Text_Header;                                       // 0x01D8(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class FText                                   HeaderText;                                        // 0x01DC(0x000C)(Edit, BlueprintVisible, ExposeOnSpawn)
	class USlateBrushAsset*                       Icon_Brush;                                        // 0x01E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	class UUserWidget*                            ContentWidget;                                     // 0x01EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_Tooltip_Custom_S(int32 EntryPoint);
	void Construct();
	class FText Get_Body_Text();
	class FText Get_Header_Text();
	struct FSlateBrush Get_Icon_Brush();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Tooltip-Custom-S_C">();
	}
	static class UTooltip_Custom_S_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTooltip_Custom_S_C>();
	}
};
static_assert(alignof(UTooltip_Custom_S_C) == 0x000004, "Wrong alignment on UTooltip_Custom_S_C");
static_assert(sizeof(UTooltip_Custom_S_C) == 0x0001F0, "Wrong size on UTooltip_Custom_S_C");
static_assert(offsetof(UTooltip_Custom_S_C, UberGraphFrame) == 0x0001B8, "Member 'UTooltip_Custom_S_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTooltip_Custom_S_C, _hr_) == 0x0001BC, "Member 'UTooltip_Custom_S_C::_hr_' has a wrong offset!");
static_assert(offsetof(UTooltip_Custom_S_C, Body_HBox) == 0x0001C0, "Member 'UTooltip_Custom_S_C::Body_HBox' has a wrong offset!");
static_assert(offsetof(UTooltip_Custom_S_C, Content_Slot) == 0x0001C4, "Member 'UTooltip_Custom_S_C::Content_Slot' has a wrong offset!");
static_assert(offsetof(UTooltip_Custom_S_C, Header_HBox) == 0x0001C8, "Member 'UTooltip_Custom_S_C::Header_HBox' has a wrong offset!");
static_assert(offsetof(UTooltip_Custom_S_C, Icon_Header) == 0x0001CC, "Member 'UTooltip_Custom_S_C::Icon_Header' has a wrong offset!");
static_assert(offsetof(UTooltip_Custom_S_C, Spacer_Header) == 0x0001D0, "Member 'UTooltip_Custom_S_C::Spacer_Header' has a wrong offset!");
static_assert(offsetof(UTooltip_Custom_S_C, Spacer_Icon) == 0x0001D4, "Member 'UTooltip_Custom_S_C::Spacer_Icon' has a wrong offset!");
static_assert(offsetof(UTooltip_Custom_S_C, Text_Header) == 0x0001D8, "Member 'UTooltip_Custom_S_C::Text_Header' has a wrong offset!");
static_assert(offsetof(UTooltip_Custom_S_C, HeaderText) == 0x0001DC, "Member 'UTooltip_Custom_S_C::HeaderText' has a wrong offset!");
static_assert(offsetof(UTooltip_Custom_S_C, Icon_Brush) == 0x0001E8, "Member 'UTooltip_Custom_S_C::Icon_Brush' has a wrong offset!");
static_assert(offsetof(UTooltip_Custom_S_C, ContentWidget) == 0x0001EC, "Member 'UTooltip_Custom_S_C::ContentWidget' has a wrong offset!");

}

#pragma pack(pop)
