﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortnitePartyHeroSelect_Camera

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "CoreUObject_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK::Params
{

// Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.ExecuteUbergraph_FortnitePartyHeroSelect_Camera
// 0x00C0 (0x00C0 - 0x0000)
struct FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FKey                                   UniqueObjectNameForCooking_Key2;                   // 0x0004(0x0010)()
	struct FKey                                   UniqueObjectNameForCooking_Key;                    // 0x0014(0x0010)()
	struct FKey                                   Temp_struct_Variable;                              // 0x0024(0x0010)()
	struct FKey                                   Temp_struct_Variable2;                             // 0x0034(0x0010)()
	struct FKey                                   UniqueObjectNameForCooking_Key3;                   // 0x0044(0x0010)()
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue2;         // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FKey                                   UniqueObjectNameForCooking_Key4;                   // 0x005C(0x0010)()
	float                                         K2Node_Event_DeltaSeconds;                         // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue3;         // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetInputMouseDelta_DeltaX;                // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetInputMouseDelta_DeltaY;                // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0084(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class ATVPostProcessBP_C*>             CallFunc_GetAllActorsOfClass_OutActors;            // 0x009C(0x000C)(ZeroConstructor, ReferenceParm)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class ATVPostProcessBP_C*                     CallFunc_Array_Get_Item;                           // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x00B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetActorRotation_ReturnValue;             // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera) == 0x000004, "Wrong alignment on FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera");
static_assert(sizeof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera) == 0x0000C0, "Wrong size on FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, EntryPoint) == 0x000000, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::EntryPoint' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, UniqueObjectNameForCooking_Key2) == 0x000004, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::UniqueObjectNameForCooking_Key2' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, UniqueObjectNameForCooking_Key) == 0x000014, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::UniqueObjectNameForCooking_Key' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, Temp_struct_Variable) == 0x000024, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, Temp_struct_Variable2) == 0x000034, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::Temp_struct_Variable2' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, UniqueObjectNameForCooking_Key3) == 0x000044, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::UniqueObjectNameForCooking_Key3' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_GetPlayerController_ReturnValue) == 0x000054, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_GetPlayerController_ReturnValue2) == 0x000058, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_GetPlayerController_ReturnValue2' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, UniqueObjectNameForCooking_Key4) == 0x00005C, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::UniqueObjectNameForCooking_Key4' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, K2Node_Event_DeltaSeconds) == 0x00006C, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_GetPlayerController_ReturnValue3) == 0x000070, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_GetPlayerController_ReturnValue3' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_GetInputMouseDelta_DeltaX) == 0x000074, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_GetInputMouseDelta_DeltaX' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_GetInputMouseDelta_DeltaY) == 0x000078, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_GetInputMouseDelta_DeltaY' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00007C, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000084, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_BreakRotator_Roll) == 0x000090, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_BreakRotator_Pitch) == 0x000094, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_BreakRotator_Yaw) == 0x000098, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_GetAllActorsOfClass_OutActors) == 0x00009C, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0000A8, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_Array_Get_Item) == 0x0000AC, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_MakeRotator_ReturnValue) == 0x0000B0, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_SetActorRotation_ReturnValue) == 0x0000BC, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_SetActorRotation_ReturnValue' has a wrong offset!");

// Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct FortnitePartyHeroSelect_Camera_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FortnitePartyHeroSelect_Camera_C_ReceiveTick) == 0x000004, "Wrong alignment on FortnitePartyHeroSelect_Camera_C_ReceiveTick");
static_assert(sizeof(FortnitePartyHeroSelect_Camera_C_ReceiveTick) == 0x000004, "Wrong size on FortnitePartyHeroSelect_Camera_C_ReceiveTick");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'FortnitePartyHeroSelect_Camera_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_RightMouseButton_UniqueObjectNameForCooking_16
// 0x0010 (0x0010 - 0x0000)
struct FortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_UniqueObjectNameForCooking_16 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0010)(Parm)
};
static_assert(alignof(FortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_UniqueObjectNameForCooking_16) == 0x000004, "Wrong alignment on FortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_UniqueObjectNameForCooking_16");
static_assert(sizeof(FortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_UniqueObjectNameForCooking_16) == 0x000010, "Wrong size on FortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_UniqueObjectNameForCooking_16");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_UniqueObjectNameForCooking_16, Key) == 0x000000, "Member 'FortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_UniqueObjectNameForCooking_16::Key' has a wrong offset!");

// Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_RightMouseButton_UniqueObjectNameForCooking_17
// 0x0010 (0x0010 - 0x0000)
struct FortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_UniqueObjectNameForCooking_17 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0010)(Parm)
};
static_assert(alignof(FortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_UniqueObjectNameForCooking_17) == 0x000004, "Wrong alignment on FortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_UniqueObjectNameForCooking_17");
static_assert(sizeof(FortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_UniqueObjectNameForCooking_17) == 0x000010, "Wrong size on FortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_UniqueObjectNameForCooking_17");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_UniqueObjectNameForCooking_17, Key) == 0x000000, "Member 'FortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_UniqueObjectNameForCooking_17::Key' has a wrong offset!");

// Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_18
// 0x0010 (0x0010 - 0x0000)
struct FortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_18 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0010)(Parm)
};
static_assert(alignof(FortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_18) == 0x000004, "Wrong alignment on FortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_18");
static_assert(sizeof(FortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_18) == 0x000010, "Wrong size on FortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_18");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_18, Key) == 0x000000, "Member 'FortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_18::Key' has a wrong offset!");

// Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_19
// 0x0010 (0x0010 - 0x0000)
struct FortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_19 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0010)(Parm)
};
static_assert(alignof(FortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_19) == 0x000004, "Wrong alignment on FortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_19");
static_assert(sizeof(FortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_19) == 0x000010, "Wrong size on FortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_19");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_19, Key) == 0x000000, "Member 'FortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_19::Key' has a wrong offset!");

// Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.HandleMouseRelease
// 0x0004 (0x0004 - 0x0000)
struct FortnitePartyHeroSelect_Camera_C_HandleMouseRelease final
{
public:
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FortnitePartyHeroSelect_Camera_C_HandleMouseRelease) == 0x000004, "Wrong alignment on FortnitePartyHeroSelect_Camera_C_HandleMouseRelease");
static_assert(sizeof(FortnitePartyHeroSelect_Camera_C_HandleMouseRelease) == 0x000004, "Wrong size on FortnitePartyHeroSelect_Camera_C_HandleMouseRelease");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_HandleMouseRelease, CallFunc_GetPlayerController_ReturnValue) == 0x000000, "Member 'FortnitePartyHeroSelect_Camera_C_HandleMouseRelease::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");

// Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.HandleMousePress
// 0x0010 (0x0010 - 0x0000)
struct FortnitePartyHeroSelect_Camera_C_HandleMousePress final
{
public:
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortPlayerPawn*                        CallFunc_GetHeroPlayerPawnByIndex_ReturnValue;     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FortnitePartyHeroSelect_Camera_C_HandleMousePress) == 0x000004, "Wrong alignment on FortnitePartyHeroSelect_Camera_C_HandleMousePress");
static_assert(sizeof(FortnitePartyHeroSelect_Camera_C_HandleMousePress) == 0x000010, "Wrong size on FortnitePartyHeroSelect_Camera_C_HandleMousePress");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_HandleMousePress, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'FortnitePartyHeroSelect_Camera_C_HandleMousePress::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_HandleMousePress, CallFunc_GetPlayerController_ReturnValue) == 0x000004, "Member 'FortnitePartyHeroSelect_Camera_C_HandleMousePress::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_HandleMousePress, CallFunc_GetHeroPlayerPawnByIndex_ReturnValue) == 0x000008, "Member 'FortnitePartyHeroSelect_Camera_C_HandleMousePress::CallFunc_GetHeroPlayerPawnByIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_HandleMousePress, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'FortnitePartyHeroSelect_Camera_C_HandleMousePress::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

#pragma pack(pop)
