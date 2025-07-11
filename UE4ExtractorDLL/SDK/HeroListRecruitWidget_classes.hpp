﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeroListRecruitWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// WidgetBlueprintGeneratedClass HeroListRecruitWidget.HeroListRecruitWidget_C
// 0x006C (0x02B0 - 0x0244)
class UHeroListRecruitWidget_C final : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0244(0x0004)(ZeroConstructor, Transient, DuplicateTransient)
	class UButtonIconText_C*                      _Button__Cancel;                                   // 0x0248(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButtonIconText_C*                      _Button__Expand;                                   // 0x024C(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButton*                                _Button__Random_Name;                              // 0x0250(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButtonIconText_C*                      _Button__Recruit;                                  // 0x0254(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                 _Image__Class_Icon;                                // 0x0258(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                 _Image__Class_Icon__2_;                            // 0x025C(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                 _Image__Top_Bevel;                                 // 0x0260(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButtonIconText_C*                      _Radio__Female_Option;                             // 0x0264(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButtonIconText_C*                      _Radio__Male_Option;                               // 0x0268(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetSwitcher*                        _Switcher__Recruit_Details;                        // 0x026C(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                             _Text__Recruit_Text;                               // 0x0270(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                             _Text__Recruit_Text__2_;                           // 0x0274(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                             _Text__Slot_Count;                                 // 0x0278(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UEditableTextBox*                       _TextBox__Name_Input;                              // 0x027C(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetSwitcher*                        SwitcherErrorInfo;                                 // 0x0280(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                             TextError;                                         // 0x0284(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                             TextMaxLen;                                        // 0x0288(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UFortHeroType*                          HeroType;                                          // 0x028C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EFortCustomGender                             Gender;                                            // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_291[0x3];                                      // 0x0291(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEmptyHeroSlot                         Hero_Slot;                                         // 0x0294(0x000C)(Edit, BlueprintVisible, ExposeOnSpawn)
	UMulticastDelegateProperty_                   OnRequestCreateHero;                               // 0x02A0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          HasNameBeenChosen;                                 // 0x02AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ENameStatus                                   LastError;                                         // 0x02AD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_HeroListRecruitWidget(int32 EntryPoint);
	void BndEvt___TextBox__Name_Input_K2Node_ComponentBoundEvent_42_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& TEXT);
	void BndEvt___TextBox__Name_Input_K2Node_ComponentBoundEvent_100_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& TEXT, ETextCommit CommitMethod);
	void BndEvt___Button__Expand_K2Node_ComponentBoundEvent_631_FortSelectedStateChanged__DelegateSignature(class UFortBaseButton* Button, bool SELECTED);
	void BndEvt___Button__Recruit_K2Node_ComponentBoundEvent_1020_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button);
	void BndEvt___Radio__Female_Option_K2Node_ComponentBoundEvent_784_FortSelectedStateChanged__DelegateSignature(class UFortBaseButton* Button, bool SELECTED);
	void BndEvt___Radio__Male_Option_K2Node_ComponentBoundEvent_771_FortSelectedStateChanged__DelegateSignature(class UFortBaseButton* Button, bool SELECTED);
	void BndEvt___Button__Random_Name_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature();
	void BndEvt___Button__Cancel_K2Node_ComponentBoundEvent_150_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button);
	void Construct();
	void Initialize(const struct FEmptyHeroSlot& Hero_Slot_0);
	void Expand();
	void Collapse();
	void Get_Random_Name();
	void ValidateNameField();
	void Set_Error(const class FText& Error_Text);
	void Clear_Error();
	void Refresh_Info();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HeroListRecruitWidget_C">();
	}
	static class UHeroListRecruitWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHeroListRecruitWidget_C>();
	}
};
static_assert(alignof(UHeroListRecruitWidget_C) == 0x000004, "Wrong alignment on UHeroListRecruitWidget_C");
static_assert(sizeof(UHeroListRecruitWidget_C) == 0x0002B0, "Wrong size on UHeroListRecruitWidget_C");
static_assert(offsetof(UHeroListRecruitWidget_C, UberGraphFrame) == 0x000244, "Member 'UHeroListRecruitWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHeroListRecruitWidget_C, _Button__Cancel) == 0x000248, "Member 'UHeroListRecruitWidget_C::_Button__Cancel' has a wrong offset!");
static_assert(offsetof(UHeroListRecruitWidget_C, _Button__Expand) == 0x00024C, "Member 'UHeroListRecruitWidget_C::_Button__Expand' has a wrong offset!");
static_assert(offsetof(UHeroListRecruitWidget_C, _Button__Random_Name) == 0x000250, "Member 'UHeroListRecruitWidget_C::_Button__Random_Name' has a wrong offset!");
static_assert(offsetof(UHeroListRecruitWidget_C, _Button__Recruit) == 0x000254, "Member 'UHeroListRecruitWidget_C::_Button__Recruit' has a wrong offset!");
static_assert(offsetof(UHeroListRecruitWidget_C, _Image__Class_Icon) == 0x000258, "Member 'UHeroListRecruitWidget_C::_Image__Class_Icon' has a wrong offset!");
static_assert(offsetof(UHeroListRecruitWidget_C, _Image__Class_Icon__2_) == 0x00025C, "Member 'UHeroListRecruitWidget_C::_Image__Class_Icon__2_' has a wrong offset!");
static_assert(offsetof(UHeroListRecruitWidget_C, _Image__Top_Bevel) == 0x000260, "Member 'UHeroListRecruitWidget_C::_Image__Top_Bevel' has a wrong offset!");
static_assert(offsetof(UHeroListRecruitWidget_C, _Radio__Female_Option) == 0x000264, "Member 'UHeroListRecruitWidget_C::_Radio__Female_Option' has a wrong offset!");
static_assert(offsetof(UHeroListRecruitWidget_C, _Radio__Male_Option) == 0x000268, "Member 'UHeroListRecruitWidget_C::_Radio__Male_Option' has a wrong offset!");
static_assert(offsetof(UHeroListRecruitWidget_C, _Switcher__Recruit_Details) == 0x00026C, "Member 'UHeroListRecruitWidget_C::_Switcher__Recruit_Details' has a wrong offset!");
static_assert(offsetof(UHeroListRecruitWidget_C, _Text__Recruit_Text) == 0x000270, "Member 'UHeroListRecruitWidget_C::_Text__Recruit_Text' has a wrong offset!");
static_assert(offsetof(UHeroListRecruitWidget_C, _Text__Recruit_Text__2_) == 0x000274, "Member 'UHeroListRecruitWidget_C::_Text__Recruit_Text__2_' has a wrong offset!");
static_assert(offsetof(UHeroListRecruitWidget_C, _Text__Slot_Count) == 0x000278, "Member 'UHeroListRecruitWidget_C::_Text__Slot_Count' has a wrong offset!");
static_assert(offsetof(UHeroListRecruitWidget_C, _TextBox__Name_Input) == 0x00027C, "Member 'UHeroListRecruitWidget_C::_TextBox__Name_Input' has a wrong offset!");
static_assert(offsetof(UHeroListRecruitWidget_C, SwitcherErrorInfo) == 0x000280, "Member 'UHeroListRecruitWidget_C::SwitcherErrorInfo' has a wrong offset!");
static_assert(offsetof(UHeroListRecruitWidget_C, TextError) == 0x000284, "Member 'UHeroListRecruitWidget_C::TextError' has a wrong offset!");
static_assert(offsetof(UHeroListRecruitWidget_C, TextMaxLen) == 0x000288, "Member 'UHeroListRecruitWidget_C::TextMaxLen' has a wrong offset!");
static_assert(offsetof(UHeroListRecruitWidget_C, HeroType) == 0x00028C, "Member 'UHeroListRecruitWidget_C::HeroType' has a wrong offset!");
static_assert(offsetof(UHeroListRecruitWidget_C, Gender) == 0x000290, "Member 'UHeroListRecruitWidget_C::Gender' has a wrong offset!");
static_assert(offsetof(UHeroListRecruitWidget_C, Hero_Slot) == 0x000294, "Member 'UHeroListRecruitWidget_C::Hero_Slot' has a wrong offset!");
static_assert(offsetof(UHeroListRecruitWidget_C, OnRequestCreateHero) == 0x0002A0, "Member 'UHeroListRecruitWidget_C::OnRequestCreateHero' has a wrong offset!");
static_assert(offsetof(UHeroListRecruitWidget_C, HasNameBeenChosen) == 0x0002AC, "Member 'UHeroListRecruitWidget_C::HasNameBeenChosen' has a wrong offset!");
static_assert(offsetof(UHeroListRecruitWidget_C, LastError) == 0x0002AD, "Member 'UHeroListRecruitWidget_C::LastError' has a wrong offset!");

}

#pragma pack(pop)
