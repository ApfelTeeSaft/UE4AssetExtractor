﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: JournalEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// WidgetBlueprintGeneratedClass JournalEntry.JournalEntry_C
// 0x002C (0x0768 - 0x073C)
class UJournalEntry_C final : public UFortBaseButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x073C(0x0004)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 _Image__Background;                                // 0x0740(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                 _Image__Quest_Name__HR_;                           // 0x0744(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                 _Image__Top_Bevel;                                 // 0x0748(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                             _Text__Quest_Name;                                 // 0x074C(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UFortBangWrapper*                       FortBangWrapper;                                   // 0x0750(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                 ImageAlternabang;                                  // 0x0754(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UJournalProgressWidget_C*               JournalProgressWidget;                             // 0x0758(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                 QuestIcon_Fill;                                    // 0x075C(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                 QuestIcon_Shadow;                                  // 0x0760(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UFortQuestItem*                         QuestItem;                                         // 0x0764(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_JournalEntry(int32 EntryPoint);
	void HandleSelectedChanged(class UFortBaseButton* Button, bool SELECTED);
	void Construct();
	void UpdateProgress();
	void Setup(class UFortQuestItem* Quest);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"JournalEntry_C">();
	}
	static class UJournalEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJournalEntry_C>();
	}
};
static_assert(alignof(UJournalEntry_C) == 0x000004, "Wrong alignment on UJournalEntry_C");
static_assert(sizeof(UJournalEntry_C) == 0x000768, "Wrong size on UJournalEntry_C");
static_assert(offsetof(UJournalEntry_C, UberGraphFrame) == 0x00073C, "Member 'UJournalEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UJournalEntry_C, _Image__Background) == 0x000740, "Member 'UJournalEntry_C::_Image__Background' has a wrong offset!");
static_assert(offsetof(UJournalEntry_C, _Image__Quest_Name__HR_) == 0x000744, "Member 'UJournalEntry_C::_Image__Quest_Name__HR_' has a wrong offset!");
static_assert(offsetof(UJournalEntry_C, _Image__Top_Bevel) == 0x000748, "Member 'UJournalEntry_C::_Image__Top_Bevel' has a wrong offset!");
static_assert(offsetof(UJournalEntry_C, _Text__Quest_Name) == 0x00074C, "Member 'UJournalEntry_C::_Text__Quest_Name' has a wrong offset!");
static_assert(offsetof(UJournalEntry_C, FortBangWrapper) == 0x000750, "Member 'UJournalEntry_C::FortBangWrapper' has a wrong offset!");
static_assert(offsetof(UJournalEntry_C, ImageAlternabang) == 0x000754, "Member 'UJournalEntry_C::ImageAlternabang' has a wrong offset!");
static_assert(offsetof(UJournalEntry_C, JournalProgressWidget) == 0x000758, "Member 'UJournalEntry_C::JournalProgressWidget' has a wrong offset!");
static_assert(offsetof(UJournalEntry_C, QuestIcon_Fill) == 0x00075C, "Member 'UJournalEntry_C::QuestIcon_Fill' has a wrong offset!");
static_assert(offsetof(UJournalEntry_C, QuestIcon_Shadow) == 0x000760, "Member 'UJournalEntry_C::QuestIcon_Shadow' has a wrong offset!");
static_assert(offsetof(UJournalEntry_C, QuestItem) == 0x000764, "Member 'UJournalEntry_C::QuestItem' has a wrong offset!");

}

#pragma pack(pop)
