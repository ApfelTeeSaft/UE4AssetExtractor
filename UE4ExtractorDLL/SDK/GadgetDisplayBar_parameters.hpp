﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GadgetDisplayBar

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK::Params
{

// Function GadgetDisplayBar.GadgetDisplayBar_C.ExecuteUbergraph_GadgetDisplayBar
// 0x03D8 (0x03D8 - 0x0000)
struct GadgetDisplayBar_C_ExecuteUbergraph_GadgetDisplayBar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFortTeamMemberInfo                    K2Node_CustomEvent_NewTeamMemberInfo2;             // 0x0004(0x01E8)()
	struct FFortTeamMemberInfo                    K2Node_CustomEvent_NewTeamMemberInfo;              // 0x01EC(0x01E8)()
	int32                                         K2Node_CustomEvent_PlayerIndex;                    // 0x03D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GadgetDisplayBar_C_ExecuteUbergraph_GadgetDisplayBar) == 0x000004, "Wrong alignment on GadgetDisplayBar_C_ExecuteUbergraph_GadgetDisplayBar");
static_assert(sizeof(GadgetDisplayBar_C_ExecuteUbergraph_GadgetDisplayBar) == 0x0003D8, "Wrong size on GadgetDisplayBar_C_ExecuteUbergraph_GadgetDisplayBar");
static_assert(offsetof(GadgetDisplayBar_C_ExecuteUbergraph_GadgetDisplayBar, EntryPoint) == 0x000000, "Member 'GadgetDisplayBar_C_ExecuteUbergraph_GadgetDisplayBar::EntryPoint' has a wrong offset!");
static_assert(offsetof(GadgetDisplayBar_C_ExecuteUbergraph_GadgetDisplayBar, K2Node_CustomEvent_NewTeamMemberInfo2) == 0x000004, "Member 'GadgetDisplayBar_C_ExecuteUbergraph_GadgetDisplayBar::K2Node_CustomEvent_NewTeamMemberInfo2' has a wrong offset!");
static_assert(offsetof(GadgetDisplayBar_C_ExecuteUbergraph_GadgetDisplayBar, K2Node_CustomEvent_NewTeamMemberInfo) == 0x0001EC, "Member 'GadgetDisplayBar_C_ExecuteUbergraph_GadgetDisplayBar::K2Node_CustomEvent_NewTeamMemberInfo' has a wrong offset!");
static_assert(offsetof(GadgetDisplayBar_C_ExecuteUbergraph_GadgetDisplayBar, K2Node_CustomEvent_PlayerIndex) == 0x0003D4, "Member 'GadgetDisplayBar_C_ExecuteUbergraph_GadgetDisplayBar::K2Node_CustomEvent_PlayerIndex' has a wrong offset!");

// Function GadgetDisplayBar.GadgetDisplayBar_C.OnTeamMemberRemoved
// 0x0004 (0x0004 - 0x0000)
struct GadgetDisplayBar_C_OnTeamMemberRemoved final
{
public:
	int32                                         PlayerIndex_0;                                     // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GadgetDisplayBar_C_OnTeamMemberRemoved) == 0x000004, "Wrong alignment on GadgetDisplayBar_C_OnTeamMemberRemoved");
static_assert(sizeof(GadgetDisplayBar_C_OnTeamMemberRemoved) == 0x000004, "Wrong size on GadgetDisplayBar_C_OnTeamMemberRemoved");
static_assert(offsetof(GadgetDisplayBar_C_OnTeamMemberRemoved, PlayerIndex_0) == 0x000000, "Member 'GadgetDisplayBar_C_OnTeamMemberRemoved::PlayerIndex_0' has a wrong offset!");

// Function GadgetDisplayBar.GadgetDisplayBar_C.OnTeamMemberUpdated
// 0x01E8 (0x01E8 - 0x0000)
struct GadgetDisplayBar_C_OnTeamMemberUpdated final
{
public:
	struct FFortTeamMemberInfo                    NewTeamMemberInfo;                                 // 0x0000(0x01E8)(Parm)
};
static_assert(alignof(GadgetDisplayBar_C_OnTeamMemberUpdated) == 0x000004, "Wrong alignment on GadgetDisplayBar_C_OnTeamMemberUpdated");
static_assert(sizeof(GadgetDisplayBar_C_OnTeamMemberUpdated) == 0x0001E8, "Wrong size on GadgetDisplayBar_C_OnTeamMemberUpdated");
static_assert(offsetof(GadgetDisplayBar_C_OnTeamMemberUpdated, NewTeamMemberInfo) == 0x000000, "Member 'GadgetDisplayBar_C_OnTeamMemberUpdated::NewTeamMemberInfo' has a wrong offset!");

// Function GadgetDisplayBar.GadgetDisplayBar_C.OnTeamMemberAdded
// 0x01E8 (0x01E8 - 0x0000)
struct GadgetDisplayBar_C_OnTeamMemberAdded final
{
public:
	struct FFortTeamMemberInfo                    NewTeamMemberInfo;                                 // 0x0000(0x01E8)(Parm)
};
static_assert(alignof(GadgetDisplayBar_C_OnTeamMemberAdded) == 0x000004, "Wrong alignment on GadgetDisplayBar_C_OnTeamMemberAdded");
static_assert(sizeof(GadgetDisplayBar_C_OnTeamMemberAdded) == 0x0001E8, "Wrong size on GadgetDisplayBar_C_OnTeamMemberAdded");
static_assert(offsetof(GadgetDisplayBar_C_OnTeamMemberAdded, NewTeamMemberInfo) == 0x000000, "Member 'GadgetDisplayBar_C_OnTeamMemberAdded::NewTeamMemberInfo' has a wrong offset!");

// Function GadgetDisplayBar.GadgetDisplayBar_C.Update
// 0x01F8 (0x01F8 - 0x0000)
struct GadgetDisplayBar_C_Update final
{
public:
	struct FFortTeamMemberInfo                    InMemberInfo;                                      // 0x0000(0x01E8)(Parm)
	class UFortItem*                              CallFunc_Array_Get_Item;                           // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F1[0x3];                                      // 0x01F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItem*                              CallFunc_Array_Get_Item2;                          // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GadgetDisplayBar_C_Update) == 0x000004, "Wrong alignment on GadgetDisplayBar_C_Update");
static_assert(sizeof(GadgetDisplayBar_C_Update) == 0x0001F8, "Wrong size on GadgetDisplayBar_C_Update");
static_assert(offsetof(GadgetDisplayBar_C_Update, InMemberInfo) == 0x000000, "Member 'GadgetDisplayBar_C_Update::InMemberInfo' has a wrong offset!");
static_assert(offsetof(GadgetDisplayBar_C_Update, CallFunc_Array_Get_Item) == 0x0001E8, "Member 'GadgetDisplayBar_C_Update::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GadgetDisplayBar_C_Update, CallFunc_Array_Length_ReturnValue) == 0x0001EC, "Member 'GadgetDisplayBar_C_Update::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GadgetDisplayBar_C_Update, CallFunc_Greater_IntInt_ReturnValue) == 0x0001F0, "Member 'GadgetDisplayBar_C_Update::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GadgetDisplayBar_C_Update, CallFunc_Array_Get_Item2) == 0x0001F4, "Member 'GadgetDisplayBar_C_Update::CallFunc_Array_Get_Item2' has a wrong offset!");

// Function GadgetDisplayBar.GadgetDisplayBar_C.BindDelegates
// 0x001C (0x001C - 0x0000)
struct GadgetDisplayBar_C_BindDelegates final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFortUITeamInfo*                        CallFunc_GetTeamInfo_ReturnValue;                  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFortUITeamInfo*                        CallFunc_GetLocalPlayerTeam_ReturnValue;           // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GadgetDisplayBar_C_BindDelegates) == 0x000004, "Wrong alignment on GadgetDisplayBar_C_BindDelegates");
static_assert(sizeof(GadgetDisplayBar_C_BindDelegates) == 0x00001C, "Wrong size on GadgetDisplayBar_C_BindDelegates");
static_assert(offsetof(GadgetDisplayBar_C_BindDelegates, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'GadgetDisplayBar_C_BindDelegates::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GadgetDisplayBar_C_BindDelegates, CallFunc_GetContext_ReturnValue) == 0x000010, "Member 'GadgetDisplayBar_C_BindDelegates::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(GadgetDisplayBar_C_BindDelegates, CallFunc_GetTeamInfo_ReturnValue) == 0x000014, "Member 'GadgetDisplayBar_C_BindDelegates::CallFunc_GetTeamInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GadgetDisplayBar_C_BindDelegates, CallFunc_GetLocalPlayerTeam_ReturnValue) == 0x000018, "Member 'GadgetDisplayBar_C_BindDelegates::CallFunc_GetLocalPlayerTeam_ReturnValue' has a wrong offset!");

// Function GadgetDisplayBar.GadgetDisplayBar_C.HandleTeamMemberUpdated
// 0x01F0 (0x01F0 - 0x0000)
struct GadgetDisplayBar_C_HandleTeamMemberUpdated final
{
public:
	struct FFortTeamMemberInfo                    InNewMemberInfo;                                   // 0x0000(0x01E8)(Parm, OutParm, ReferenceParm)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x01EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue2;                  // 0x01EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GadgetDisplayBar_C_HandleTeamMemberUpdated) == 0x000004, "Wrong alignment on GadgetDisplayBar_C_HandleTeamMemberUpdated");
static_assert(sizeof(GadgetDisplayBar_C_HandleTeamMemberUpdated) == 0x0001F0, "Wrong size on GadgetDisplayBar_C_HandleTeamMemberUpdated");
static_assert(offsetof(GadgetDisplayBar_C_HandleTeamMemberUpdated, InNewMemberInfo) == 0x000000, "Member 'GadgetDisplayBar_C_HandleTeamMemberUpdated::InNewMemberInfo' has a wrong offset!");
static_assert(offsetof(GadgetDisplayBar_C_HandleTeamMemberUpdated, CallFunc_TextIsEmpty_ReturnValue) == 0x0001E8, "Member 'GadgetDisplayBar_C_HandleTeamMemberUpdated::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(GadgetDisplayBar_C_HandleTeamMemberUpdated, CallFunc_Not_PreBool_ReturnValue) == 0x0001E9, "Member 'GadgetDisplayBar_C_HandleTeamMemberUpdated::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GadgetDisplayBar_C_HandleTeamMemberUpdated, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0001EA, "Member 'GadgetDisplayBar_C_HandleTeamMemberUpdated::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GadgetDisplayBar_C_HandleTeamMemberUpdated, CallFunc_BooleanAND_ReturnValue) == 0x0001EB, "Member 'GadgetDisplayBar_C_HandleTeamMemberUpdated::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GadgetDisplayBar_C_HandleTeamMemberUpdated, CallFunc_BooleanAND_ReturnValue2) == 0x0001EC, "Member 'GadgetDisplayBar_C_HandleTeamMemberUpdated::CallFunc_BooleanAND_ReturnValue2' has a wrong offset!");

// Function GadgetDisplayBar.GadgetDisplayBar_C.RemoveAssignedTeamMember
// 0x000C (0x000C - 0x0000)
struct GadgetDisplayBar_C_RemoveAssignedTeamMember final
{
public:
	class FString                                 NewLocalVar_0;                                     // 0x0000(0x000C)(Edit, ZeroConstructor)
};
static_assert(alignof(GadgetDisplayBar_C_RemoveAssignedTeamMember) == 0x000004, "Wrong alignment on GadgetDisplayBar_C_RemoveAssignedTeamMember");
static_assert(sizeof(GadgetDisplayBar_C_RemoveAssignedTeamMember) == 0x00000C, "Wrong size on GadgetDisplayBar_C_RemoveAssignedTeamMember");
static_assert(offsetof(GadgetDisplayBar_C_RemoveAssignedTeamMember, NewLocalVar_0) == 0x000000, "Member 'GadgetDisplayBar_C_RemoveAssignedTeamMember::NewLocalVar_0' has a wrong offset!");

// Function GadgetDisplayBar.GadgetDisplayBar_C.BindTeamDelegates
// 0x0034 (0x0034 - 0x0000)
struct GadgetDisplayBar_C_BindTeamDelegates final
{
public:
	class UFortUITeamInfo*                        TeamInfo;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(const struct FFortTeamMemberInfo& NewTeamMemberInfo)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 PlayerIndex)>            K2Node_CreateDelegate_OutputDelegate2;             // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FFortTeamMemberInfo& TeamMemberInfo)> K2Node_CreateDelegate_OutputDelegate3;             // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(GadgetDisplayBar_C_BindTeamDelegates) == 0x000004, "Wrong alignment on GadgetDisplayBar_C_BindTeamDelegates");
static_assert(sizeof(GadgetDisplayBar_C_BindTeamDelegates) == 0x000034, "Wrong size on GadgetDisplayBar_C_BindTeamDelegates");
static_assert(offsetof(GadgetDisplayBar_C_BindTeamDelegates, TeamInfo) == 0x000000, "Member 'GadgetDisplayBar_C_BindTeamDelegates::TeamInfo' has a wrong offset!");
static_assert(offsetof(GadgetDisplayBar_C_BindTeamDelegates, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GadgetDisplayBar_C_BindTeamDelegates::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GadgetDisplayBar_C_BindTeamDelegates, K2Node_CreateDelegate_OutputDelegate2) == 0x000014, "Member 'GadgetDisplayBar_C_BindTeamDelegates::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(GadgetDisplayBar_C_BindTeamDelegates, K2Node_CreateDelegate_OutputDelegate3) == 0x000024, "Member 'GadgetDisplayBar_C_BindTeamDelegates::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");

// Function GadgetDisplayBar.GadgetDisplayBar_C.SetPlayerIndex
// 0x0004 (0x0004 - 0x0000)
struct GadgetDisplayBar_C_SetPlayerIndex final
{
public:
	int32                                         InPlayerIndex;                                     // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GadgetDisplayBar_C_SetPlayerIndex) == 0x000004, "Wrong alignment on GadgetDisplayBar_C_SetPlayerIndex");
static_assert(sizeof(GadgetDisplayBar_C_SetPlayerIndex) == 0x000004, "Wrong size on GadgetDisplayBar_C_SetPlayerIndex");
static_assert(offsetof(GadgetDisplayBar_C_SetPlayerIndex, InPlayerIndex) == 0x000000, "Member 'GadgetDisplayBar_C_SetPlayerIndex::InPlayerIndex' has a wrong offset!");

// Function GadgetDisplayBar.GadgetDisplayBar_C.SetShown
// 0x0002 (0x0002 - 0x0000)
struct GadgetDisplayBar_C_SetShown final
{
public:
	bool                                          bShown;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GadgetDisplayBar_C_SetShown) == 0x000001, "Wrong alignment on GadgetDisplayBar_C_SetShown");
static_assert(sizeof(GadgetDisplayBar_C_SetShown) == 0x000002, "Wrong size on GadgetDisplayBar_C_SetShown");
static_assert(offsetof(GadgetDisplayBar_C_SetShown, bShown) == 0x000000, "Member 'GadgetDisplayBar_C_SetShown::bShown' has a wrong offset!");
static_assert(offsetof(GadgetDisplayBar_C_SetShown, CallFunc_BooleanAND_ReturnValue) == 0x000001, "Member 'GadgetDisplayBar_C_SetShown::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function GadgetDisplayBar.GadgetDisplayBar_C.UpdateAssignedTeamMember
// 0x0204 (0x0204 - 0x0000)
struct GadgetDisplayBar_C_UpdateAssignedTeamMember final
{
public:
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFortUITeamInfo*                        CallFunc_GetLocalPlayerTeam_ReturnValue;           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FFortTeamMemberInfo>            CallFunc_GetTeamMembers_TeamMembers;               // 0x0008(0x000C)(ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFortTeamMemberInfo                    CallFunc_Array_Get_Item;                           // 0x0018(0x01E8)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GadgetDisplayBar_C_UpdateAssignedTeamMember) == 0x000004, "Wrong alignment on GadgetDisplayBar_C_UpdateAssignedTeamMember");
static_assert(sizeof(GadgetDisplayBar_C_UpdateAssignedTeamMember) == 0x000204, "Wrong size on GadgetDisplayBar_C_UpdateAssignedTeamMember");
static_assert(offsetof(GadgetDisplayBar_C_UpdateAssignedTeamMember, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'GadgetDisplayBar_C_UpdateAssignedTeamMember::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(GadgetDisplayBar_C_UpdateAssignedTeamMember, CallFunc_GetLocalPlayerTeam_ReturnValue) == 0x000004, "Member 'GadgetDisplayBar_C_UpdateAssignedTeamMember::CallFunc_GetLocalPlayerTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(GadgetDisplayBar_C_UpdateAssignedTeamMember, CallFunc_GetTeamMembers_TeamMembers) == 0x000008, "Member 'GadgetDisplayBar_C_UpdateAssignedTeamMember::CallFunc_GetTeamMembers_TeamMembers' has a wrong offset!");
static_assert(offsetof(GadgetDisplayBar_C_UpdateAssignedTeamMember, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'GadgetDisplayBar_C_UpdateAssignedTeamMember::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GadgetDisplayBar_C_UpdateAssignedTeamMember, CallFunc_Array_Get_Item) == 0x000018, "Member 'GadgetDisplayBar_C_UpdateAssignedTeamMember::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GadgetDisplayBar_C_UpdateAssignedTeamMember, CallFunc_Less_IntInt_ReturnValue) == 0x000200, "Member 'GadgetDisplayBar_C_UpdateAssignedTeamMember::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function GadgetDisplayBar.GadgetDisplayBar_C.UpdateVisibility
// 0x0008 (0x0008 - 0x0000)
struct GadgetDisplayBar_C_UpdateVisibility final
{
public:
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFrontEndCamera                               CallFunc_GetFrontEndCamera_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GadgetDisplayBar_C_UpdateVisibility) == 0x000004, "Wrong alignment on GadgetDisplayBar_C_UpdateVisibility");
static_assert(sizeof(GadgetDisplayBar_C_UpdateVisibility) == 0x000008, "Wrong size on GadgetDisplayBar_C_UpdateVisibility");
static_assert(offsetof(GadgetDisplayBar_C_UpdateVisibility, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'GadgetDisplayBar_C_UpdateVisibility::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(GadgetDisplayBar_C_UpdateVisibility, CallFunc_GetFrontEndCamera_ReturnValue) == 0x000004, "Member 'GadgetDisplayBar_C_UpdateVisibility::CallFunc_GetFrontEndCamera_ReturnValue' has a wrong offset!");
static_assert(offsetof(GadgetDisplayBar_C_UpdateVisibility, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000005, "Member 'GadgetDisplayBar_C_UpdateVisibility::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function GadgetDisplayBar.GadgetDisplayBar_C.HandledTeamMemberAdded
// 0x01EC (0x01EC - 0x0000)
struct GadgetDisplayBar_C_HandledTeamMemberAdded final
{
public:
	struct FFortTeamMemberInfo                    InNewMemberInfo;                                   // 0x0000(0x01E8)(Parm, OutParm, ReferenceParm)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GadgetDisplayBar_C_HandledTeamMemberAdded) == 0x000004, "Wrong alignment on GadgetDisplayBar_C_HandledTeamMemberAdded");
static_assert(sizeof(GadgetDisplayBar_C_HandledTeamMemberAdded) == 0x0001EC, "Wrong size on GadgetDisplayBar_C_HandledTeamMemberAdded");
static_assert(offsetof(GadgetDisplayBar_C_HandledTeamMemberAdded, InNewMemberInfo) == 0x000000, "Member 'GadgetDisplayBar_C_HandledTeamMemberAdded::InNewMemberInfo' has a wrong offset!");
static_assert(offsetof(GadgetDisplayBar_C_HandledTeamMemberAdded, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0001E8, "Member 'GadgetDisplayBar_C_HandledTeamMemberAdded::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

}

#pragma pack(pop)
