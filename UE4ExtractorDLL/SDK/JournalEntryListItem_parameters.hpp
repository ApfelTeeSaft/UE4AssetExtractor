﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: JournalEntryListItem

#include "Basic.hpp"


#pragma pack(push, 0x4)
namespace SDK::Params
{

// Function JournalEntryListItem.JournalEntryListItem_C.ExecuteUbergraph_JournalEntryListItem
// 0x0008 (0x0008 - 0x0000)
struct JournalEntryListItem_C_ExecuteUbergraph_JournalEntryListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bSelected;                            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(JournalEntryListItem_C_ExecuteUbergraph_JournalEntryListItem) == 0x000004, "Wrong alignment on JournalEntryListItem_C_ExecuteUbergraph_JournalEntryListItem");
static_assert(sizeof(JournalEntryListItem_C_ExecuteUbergraph_JournalEntryListItem) == 0x000008, "Wrong size on JournalEntryListItem_C_ExecuteUbergraph_JournalEntryListItem");
static_assert(offsetof(JournalEntryListItem_C_ExecuteUbergraph_JournalEntryListItem, EntryPoint) == 0x000000, "Member 'JournalEntryListItem_C_ExecuteUbergraph_JournalEntryListItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(JournalEntryListItem_C_ExecuteUbergraph_JournalEntryListItem, K2Node_Event_bSelected) == 0x000004, "Member 'JournalEntryListItem_C_ExecuteUbergraph_JournalEntryListItem::K2Node_Event_bSelected' has a wrong offset!");

// Function JournalEntryListItem.JournalEntryListItem_C.SetSelected
// 0x0001 (0x0001 - 0x0000)
struct JournalEntryListItem_C_SetSelected final
{
public:
	bool                                          bSelected;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(JournalEntryListItem_C_SetSelected) == 0x000001, "Wrong alignment on JournalEntryListItem_C_SetSelected");
static_assert(sizeof(JournalEntryListItem_C_SetSelected) == 0x000001, "Wrong size on JournalEntryListItem_C_SetSelected");
static_assert(offsetof(JournalEntryListItem_C_SetSelected, bSelected) == 0x000000, "Member 'JournalEntryListItem_C_SetSelected::bSelected' has a wrong offset!");

}

#pragma pack(pop)
