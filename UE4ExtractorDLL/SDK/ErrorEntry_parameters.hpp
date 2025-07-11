﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ErrorEntry

#include "Basic.hpp"

#include "UMG_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK::Params
{

// Function ErrorEntry.ErrorEntry_C.ExecuteUbergraph_ErrorEntry
// 0x001C (0x001C - 0x0000)
struct ErrorEntry_C_ExecuteUbergraph_ErrorEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0008(0x000C)(ZeroConstructor)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ErrorEntry_C_ExecuteUbergraph_ErrorEntry) == 0x000004, "Wrong alignment on ErrorEntry_C_ExecuteUbergraph_ErrorEntry");
static_assert(sizeof(ErrorEntry_C_ExecuteUbergraph_ErrorEntry) == 0x00001C, "Wrong size on ErrorEntry_C_ExecuteUbergraph_ErrorEntry");
static_assert(offsetof(ErrorEntry_C_ExecuteUbergraph_ErrorEntry, EntryPoint) == 0x000000, "Member 'ErrorEntry_C_ExecuteUbergraph_ErrorEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(ErrorEntry_C_ExecuteUbergraph_ErrorEntry, Temp_bool_Variable) == 0x000004, "Member 'ErrorEntry_C_ExecuteUbergraph_ErrorEntry::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ErrorEntry_C_ExecuteUbergraph_ErrorEntry, Temp_byte_Variable) == 0x000005, "Member 'ErrorEntry_C_ExecuteUbergraph_ErrorEntry::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ErrorEntry_C_ExecuteUbergraph_ErrorEntry, Temp_byte_Variable2) == 0x000006, "Member 'ErrorEntry_C_ExecuteUbergraph_ErrorEntry::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(ErrorEntry_C_ExecuteUbergraph_ErrorEntry, CallFunc_Concat_StrStr_ReturnValue) == 0x000008, "Member 'ErrorEntry_C_ExecuteUbergraph_ErrorEntry::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorEntry_C_ExecuteUbergraph_ErrorEntry, CallFunc_Len_ReturnValue) == 0x000014, "Member 'ErrorEntry_C_ExecuteUbergraph_ErrorEntry::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorEntry_C_ExecuteUbergraph_ErrorEntry, CallFunc_Greater_IntInt_ReturnValue) == 0x000018, "Member 'ErrorEntry_C_ExecuteUbergraph_ErrorEntry::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorEntry_C_ExecuteUbergraph_ErrorEntry, K2Node_Select_Default) == 0x000019, "Member 'ErrorEntry_C_ExecuteUbergraph_ErrorEntry::K2Node_Select_Default' has a wrong offset!");

}

#pragma pack(pop)
