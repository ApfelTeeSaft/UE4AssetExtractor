﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ButtonIconText

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Slate_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// WidgetBlueprintGeneratedClass ButtonIconText.ButtonIconText_C
// 0x00AC (0x07E8 - 0x073C)
class UButtonIconText_C final : public UFortBaseButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x073C(0x0004)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         ContentHBox;                                       // 0x0740(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                 Icon;                                              // 0x0744(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UOverlay*                               IconOverlay;                                       // 0x0748(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                 Shadow;                                            // 0x074C(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class USizeBox*                               SizeBox;                                           // 0x0750(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                             TextBlock;                                         // 0x0754(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class FText                                   DisplayText;                                       // 0x0758(0x000C)(Edit, BlueprintVisible, Config, ExposeOnSpawn)
	struct FSlateBrush                            IconBrush;                                         // 0x0764(0x0074)(Edit, BlueprintVisible, Config, ExposeOnSpawn)
	bool                                          HasIcon;                                           // 0x07D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          HasText;                                           // 0x07D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ETextJustify                                  Content_Align;                                     // 0x07DA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DB[0x1];                                      // 0x07DB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   On_Mouse_Hovered_Changed;                          // 0x07DC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_ButtonIconText(int32 EntryPoint);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void PreConstruct(bool IsDesignTime);
	void Set_Text(const class FText& InText, bool RefreshPadding);
	void Set_Icon(const struct FSlateBrush& InBrush, bool RefreshPadding);
	void Update_Padding();
	struct FLinearColor Get_Secondary_Color();
	struct FSlateColor Get_Primary_Color();
	void Update_Size_Box();
	void Set_Alignment(ETextJustify Align);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonIconText_C">();
	}
	static class UButtonIconText_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonIconText_C>();
	}
};
static_assert(alignof(UButtonIconText_C) == 0x000004, "Wrong alignment on UButtonIconText_C");
static_assert(sizeof(UButtonIconText_C) == 0x0007E8, "Wrong size on UButtonIconText_C");
static_assert(offsetof(UButtonIconText_C, UberGraphFrame) == 0x00073C, "Member 'UButtonIconText_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UButtonIconText_C, ContentHBox) == 0x000740, "Member 'UButtonIconText_C::ContentHBox' has a wrong offset!");
static_assert(offsetof(UButtonIconText_C, Icon) == 0x000744, "Member 'UButtonIconText_C::Icon' has a wrong offset!");
static_assert(offsetof(UButtonIconText_C, IconOverlay) == 0x000748, "Member 'UButtonIconText_C::IconOverlay' has a wrong offset!");
static_assert(offsetof(UButtonIconText_C, Shadow) == 0x00074C, "Member 'UButtonIconText_C::Shadow' has a wrong offset!");
static_assert(offsetof(UButtonIconText_C, SizeBox) == 0x000750, "Member 'UButtonIconText_C::SizeBox' has a wrong offset!");
static_assert(offsetof(UButtonIconText_C, TextBlock) == 0x000754, "Member 'UButtonIconText_C::TextBlock' has a wrong offset!");
static_assert(offsetof(UButtonIconText_C, DisplayText) == 0x000758, "Member 'UButtonIconText_C::DisplayText' has a wrong offset!");
static_assert(offsetof(UButtonIconText_C, IconBrush) == 0x000764, "Member 'UButtonIconText_C::IconBrush' has a wrong offset!");
static_assert(offsetof(UButtonIconText_C, HasIcon) == 0x0007D8, "Member 'UButtonIconText_C::HasIcon' has a wrong offset!");
static_assert(offsetof(UButtonIconText_C, HasText) == 0x0007D9, "Member 'UButtonIconText_C::HasText' has a wrong offset!");
static_assert(offsetof(UButtonIconText_C, Content_Align) == 0x0007DA, "Member 'UButtonIconText_C::Content_Align' has a wrong offset!");
static_assert(offsetof(UButtonIconText_C, On_Mouse_Hovered_Changed) == 0x0007DC, "Member 'UButtonIconText_C::On_Mouse_Hovered_Changed' has a wrong offset!");

}

#pragma pack(pop)
