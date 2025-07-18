﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WM_PinManager

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK::Params
{

// Function WM_PinManager.WM_PinManager_C.ExecuteUbergraph_WM_PinManager
// 0x0004 (0x0004 - 0x0000)
struct WM_PinManager_C_ExecuteUbergraph_WM_PinManager final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WM_PinManager_C_ExecuteUbergraph_WM_PinManager) == 0x000004, "Wrong alignment on WM_PinManager_C_ExecuteUbergraph_WM_PinManager");
static_assert(sizeof(WM_PinManager_C_ExecuteUbergraph_WM_PinManager) == 0x000004, "Wrong size on WM_PinManager_C_ExecuteUbergraph_WM_PinManager");
static_assert(offsetof(WM_PinManager_C_ExecuteUbergraph_WM_PinManager, EntryPoint) == 0x000000, "Member 'WM_PinManager_C_ExecuteUbergraph_WM_PinManager::EntryPoint' has a wrong offset!");

// Function WM_PinManager.WM_PinManager_C.CreateWorldMapPin
// 0x0130 (0x0130 - 0x0000)
struct WM_PinManager_C_CreateWorldMapPin final
{
public:
	int32                                         TheaterIndex;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AWorldMapPin*                           ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0010(0x0030)(IsPlainOldData, NoDestructor)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFortTheaterMapData                    CallFunc_GetTheaterData_OutTheaterData;            // 0x0044(0x00D0)()
	bool                                          CallFunc_GetTheaterData_ReturnValue;               // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_115[0x3];                                      // 0x0115(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AWorldMapPin*                           CallFunc_FinishSpawningActor_ReturnValue;          // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTheaterTooltip_C*                      K2Node_DynamicCast_AsTheater_Tooltip;              // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WM_PinManager_C_CreateWorldMapPin) == 0x000010, "Wrong alignment on WM_PinManager_C_CreateWorldMapPin");
static_assert(sizeof(WM_PinManager_C_CreateWorldMapPin) == 0x000130, "Wrong size on WM_PinManager_C_CreateWorldMapPin");
static_assert(offsetof(WM_PinManager_C_CreateWorldMapPin, TheaterIndex) == 0x000000, "Member 'WM_PinManager_C_CreateWorldMapPin::TheaterIndex' has a wrong offset!");
static_assert(offsetof(WM_PinManager_C_CreateWorldMapPin, ReturnValue) == 0x000004, "Member 'WM_PinManager_C_CreateWorldMapPin::ReturnValue' has a wrong offset!");
static_assert(offsetof(WM_PinManager_C_CreateWorldMapPin, CallFunc_MakeTransform_ReturnValue) == 0x000010, "Member 'WM_PinManager_C_CreateWorldMapPin::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(WM_PinManager_C_CreateWorldMapPin, CallFunc_GetContext_ReturnValue) == 0x000040, "Member 'WM_PinManager_C_CreateWorldMapPin::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(WM_PinManager_C_CreateWorldMapPin, CallFunc_GetTheaterData_OutTheaterData) == 0x000044, "Member 'WM_PinManager_C_CreateWorldMapPin::CallFunc_GetTheaterData_OutTheaterData' has a wrong offset!");
static_assert(offsetof(WM_PinManager_C_CreateWorldMapPin, CallFunc_GetTheaterData_ReturnValue) == 0x000114, "Member 'WM_PinManager_C_CreateWorldMapPin::CallFunc_GetTheaterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WM_PinManager_C_CreateWorldMapPin, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000118, "Member 'WM_PinManager_C_CreateWorldMapPin::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WM_PinManager_C_CreateWorldMapPin, CallFunc_FinishSpawningActor_ReturnValue) == 0x00011C, "Member 'WM_PinManager_C_CreateWorldMapPin::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WM_PinManager_C_CreateWorldMapPin, CallFunc_GetUserWidgetObject_ReturnValue) == 0x000120, "Member 'WM_PinManager_C_CreateWorldMapPin::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WM_PinManager_C_CreateWorldMapPin, K2Node_DynamicCast_AsTheater_Tooltip) == 0x000124, "Member 'WM_PinManager_C_CreateWorldMapPin::K2Node_DynamicCast_AsTheater_Tooltip' has a wrong offset!");
static_assert(offsetof(WM_PinManager_C_CreateWorldMapPin, K2Node_DynamicCast_bSuccess) == 0x000128, "Member 'WM_PinManager_C_CreateWorldMapPin::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

#pragma pack(pop)
