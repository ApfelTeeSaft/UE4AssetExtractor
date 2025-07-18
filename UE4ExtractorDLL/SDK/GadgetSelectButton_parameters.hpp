﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GadgetSelectButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK::Params
{

// Function GadgetSelectButton.GadgetSelectButton_C.ExecuteUbergraph_GadgetSelectButton
// 0x0018 (0x0018 - 0x0000)
struct GadgetSelectButton_C_ExecuteUbergraph_GadgetSelectButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                K2Node_ComponentBoundEvent_Data;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFortGridPickerTile*                    K2Node_ComponentBoundEvent_Tile;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFortBaseButton*                        K2Node_ComponentBoundEvent_Button;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFortWorldItem*                         K2Node_DynamicCast_AsFort_World_Item;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GadgetSelectButton_C_ExecuteUbergraph_GadgetSelectButton) == 0x000004, "Wrong alignment on GadgetSelectButton_C_ExecuteUbergraph_GadgetSelectButton");
static_assert(sizeof(GadgetSelectButton_C_ExecuteUbergraph_GadgetSelectButton) == 0x000018, "Wrong size on GadgetSelectButton_C_ExecuteUbergraph_GadgetSelectButton");
static_assert(offsetof(GadgetSelectButton_C_ExecuteUbergraph_GadgetSelectButton, EntryPoint) == 0x000000, "Member 'GadgetSelectButton_C_ExecuteUbergraph_GadgetSelectButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(GadgetSelectButton_C_ExecuteUbergraph_GadgetSelectButton, K2Node_ComponentBoundEvent_Data) == 0x000004, "Member 'GadgetSelectButton_C_ExecuteUbergraph_GadgetSelectButton::K2Node_ComponentBoundEvent_Data' has a wrong offset!");
static_assert(offsetof(GadgetSelectButton_C_ExecuteUbergraph_GadgetSelectButton, K2Node_ComponentBoundEvent_Tile) == 0x000008, "Member 'GadgetSelectButton_C_ExecuteUbergraph_GadgetSelectButton::K2Node_ComponentBoundEvent_Tile' has a wrong offset!");
static_assert(offsetof(GadgetSelectButton_C_ExecuteUbergraph_GadgetSelectButton, K2Node_ComponentBoundEvent_Button) == 0x00000C, "Member 'GadgetSelectButton_C_ExecuteUbergraph_GadgetSelectButton::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(GadgetSelectButton_C_ExecuteUbergraph_GadgetSelectButton, K2Node_DynamicCast_AsFort_World_Item) == 0x000010, "Member 'GadgetSelectButton_C_ExecuteUbergraph_GadgetSelectButton::K2Node_DynamicCast_AsFort_World_Item' has a wrong offset!");
static_assert(offsetof(GadgetSelectButton_C_ExecuteUbergraph_GadgetSelectButton, K2Node_DynamicCast_bSuccess) == 0x000014, "Member 'GadgetSelectButton_C_ExecuteUbergraph_GadgetSelectButton::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GadgetSelectButton_C_ExecuteUbergraph_GadgetSelectButton, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000015, "Member 'GadgetSelectButton_C_ExecuteUbergraph_GadgetSelectButton::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function GadgetSelectButton.GadgetSelectButton_C.BndEvt__Item_K2Node_ComponentBoundEvent_56_FortBaseButtonClicked__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct GadgetSelectButton_C_BndEvt__Item_K2Node_ComponentBoundEvent_56_FortBaseButtonClicked__DelegateSignature final
{
public:
	class UFortBaseButton*                        Button;                                            // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GadgetSelectButton_C_BndEvt__Item_K2Node_ComponentBoundEvent_56_FortBaseButtonClicked__DelegateSignature) == 0x000004, "Wrong alignment on GadgetSelectButton_C_BndEvt__Item_K2Node_ComponentBoundEvent_56_FortBaseButtonClicked__DelegateSignature");
static_assert(sizeof(GadgetSelectButton_C_BndEvt__Item_K2Node_ComponentBoundEvent_56_FortBaseButtonClicked__DelegateSignature) == 0x000004, "Wrong size on GadgetSelectButton_C_BndEvt__Item_K2Node_ComponentBoundEvent_56_FortBaseButtonClicked__DelegateSignature");
static_assert(offsetof(GadgetSelectButton_C_BndEvt__Item_K2Node_ComponentBoundEvent_56_FortBaseButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'GadgetSelectButton_C_BndEvt__Item_K2Node_ComponentBoundEvent_56_FortBaseButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function GadgetSelectButton.GadgetSelectButton_C.BndEvt__Picker_K2Node_ComponentBoundEvent_30_GridPickerTileEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct GadgetSelectButton_C_BndEvt__Picker_K2Node_ComponentBoundEvent_30_GridPickerTileEvent__DelegateSignature final
{
public:
	class UObject*                                Data;                                              // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFortGridPickerTile*                    Tile;                                              // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GadgetSelectButton_C_BndEvt__Picker_K2Node_ComponentBoundEvent_30_GridPickerTileEvent__DelegateSignature) == 0x000004, "Wrong alignment on GadgetSelectButton_C_BndEvt__Picker_K2Node_ComponentBoundEvent_30_GridPickerTileEvent__DelegateSignature");
static_assert(sizeof(GadgetSelectButton_C_BndEvt__Picker_K2Node_ComponentBoundEvent_30_GridPickerTileEvent__DelegateSignature) == 0x000008, "Wrong size on GadgetSelectButton_C_BndEvt__Picker_K2Node_ComponentBoundEvent_30_GridPickerTileEvent__DelegateSignature");
static_assert(offsetof(GadgetSelectButton_C_BndEvt__Picker_K2Node_ComponentBoundEvent_30_GridPickerTileEvent__DelegateSignature, Data) == 0x000000, "Member 'GadgetSelectButton_C_BndEvt__Picker_K2Node_ComponentBoundEvent_30_GridPickerTileEvent__DelegateSignature::Data' has a wrong offset!");
static_assert(offsetof(GadgetSelectButton_C_BndEvt__Picker_K2Node_ComponentBoundEvent_30_GridPickerTileEvent__DelegateSignature, Tile) == 0x000004, "Member 'GadgetSelectButton_C_BndEvt__Picker_K2Node_ComponentBoundEvent_30_GridPickerTileEvent__DelegateSignature::Tile' has a wrong offset!");

// Function GadgetSelectButton.GadgetSelectButton_C.Init
// 0x0010 (0x0010 - 0x0000)
struct GadgetSelectButton_C_Init final
{
public:
	class UFortWorldItem*                         Gadget_0;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UFortWorldItem*>                 AvailableGadgets_0;                                // 0x0004(0x000C)(Parm, OutParm, ZeroConstructor, ReferenceParm)
};
static_assert(alignof(GadgetSelectButton_C_Init) == 0x000004, "Wrong alignment on GadgetSelectButton_C_Init");
static_assert(sizeof(GadgetSelectButton_C_Init) == 0x000010, "Wrong size on GadgetSelectButton_C_Init");
static_assert(offsetof(GadgetSelectButton_C_Init, Gadget_0) == 0x000000, "Member 'GadgetSelectButton_C_Init::Gadget_0' has a wrong offset!");
static_assert(offsetof(GadgetSelectButton_C_Init, AvailableGadgets_0) == 0x000004, "Member 'GadgetSelectButton_C_Init::AvailableGadgets_0' has a wrong offset!");

// Function GadgetSelectButton.GadgetSelectButton_C.InternalInit
// 0x0038 (0x0038 - 0x0000)
struct GadgetSelectButton_C_InternalInit final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable2;                                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable3;                                // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable2;                               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                 Temp_class_Variable2;                              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable3;                               // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_Select_Default;                             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         K2Node_Select2_Default;                            // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         K2Node_Select3_Default;                            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Slot_Occupied;                                     // 0x0035(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GadgetSelectButton_C_InternalInit) == 0x000004, "Wrong alignment on GadgetSelectButton_C_InternalInit");
static_assert(sizeof(GadgetSelectButton_C_InternalInit) == 0x000038, "Wrong size on GadgetSelectButton_C_InternalInit");
static_assert(offsetof(GadgetSelectButton_C_InternalInit, Temp_int_Variable) == 0x000000, "Member 'GadgetSelectButton_C_InternalInit::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GadgetSelectButton_C_InternalInit, Temp_int_Variable2) == 0x000004, "Member 'GadgetSelectButton_C_InternalInit::Temp_int_Variable2' has a wrong offset!");
static_assert(offsetof(GadgetSelectButton_C_InternalInit, Temp_bool_Variable) == 0x000008, "Member 'GadgetSelectButton_C_InternalInit::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GadgetSelectButton_C_InternalInit, Temp_int_Variable3) == 0x00000C, "Member 'GadgetSelectButton_C_InternalInit::Temp_int_Variable3' has a wrong offset!");
static_assert(offsetof(GadgetSelectButton_C_InternalInit, Temp_bool_Variable2) == 0x000010, "Member 'GadgetSelectButton_C_InternalInit::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(GadgetSelectButton_C_InternalInit, Temp_class_Variable) == 0x000014, "Member 'GadgetSelectButton_C_InternalInit::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(GadgetSelectButton_C_InternalInit, Temp_class_Variable2) == 0x000018, "Member 'GadgetSelectButton_C_InternalInit::Temp_class_Variable2' has a wrong offset!");
static_assert(offsetof(GadgetSelectButton_C_InternalInit, Temp_bool_Variable3) == 0x00001C, "Member 'GadgetSelectButton_C_InternalInit::Temp_bool_Variable3' has a wrong offset!");
static_assert(offsetof(GadgetSelectButton_C_InternalInit, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'GadgetSelectButton_C_InternalInit::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GadgetSelectButton_C_InternalInit, CallFunc_Greater_IntInt_ReturnValue) == 0x000024, "Member 'GadgetSelectButton_C_InternalInit::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GadgetSelectButton_C_InternalInit, K2Node_Select_Default) == 0x000028, "Member 'GadgetSelectButton_C_InternalInit::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GadgetSelectButton_C_InternalInit, K2Node_Select2_Default) == 0x00002C, "Member 'GadgetSelectButton_C_InternalInit::K2Node_Select2_Default' has a wrong offset!");
static_assert(offsetof(GadgetSelectButton_C_InternalInit, K2Node_Select3_Default) == 0x000030, "Member 'GadgetSelectButton_C_InternalInit::K2Node_Select3_Default' has a wrong offset!");
static_assert(offsetof(GadgetSelectButton_C_InternalInit, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000034, "Member 'GadgetSelectButton_C_InternalInit::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GadgetSelectButton_C_InternalInit, Slot_Occupied) == 0x000035, "Member 'GadgetSelectButton_C_InternalInit::Slot_Occupied' has a wrong offset!");

// Function GadgetSelectButton.GadgetSelectButton_C.Get_Locked_ToolTipWidget_0
// 0x000C (0x000C - 0x0000)
struct GadgetSelectButton_C_Get_Locked_ToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUserWidget*                            CallFunc_Create_Basic_Tooltip_Output;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GadgetSelectButton_C_Get_Locked_ToolTipWidget_0) == 0x000004, "Wrong alignment on GadgetSelectButton_C_Get_Locked_ToolTipWidget_0");
static_assert(sizeof(GadgetSelectButton_C_Get_Locked_ToolTipWidget_0) == 0x00000C, "Wrong size on GadgetSelectButton_C_Get_Locked_ToolTipWidget_0");
static_assert(offsetof(GadgetSelectButton_C_Get_Locked_ToolTipWidget_0, ReturnValue) == 0x000000, "Member 'GadgetSelectButton_C_Get_Locked_ToolTipWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(GadgetSelectButton_C_Get_Locked_ToolTipWidget_0, CallFunc_GetOwningPlayer_ReturnValue) == 0x000004, "Member 'GadgetSelectButton_C_Get_Locked_ToolTipWidget_0::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GadgetSelectButton_C_Get_Locked_ToolTipWidget_0, CallFunc_Create_Basic_Tooltip_Output) == 0x000008, "Member 'GadgetSelectButton_C_Get_Locked_ToolTipWidget_0::CallFunc_Create_Basic_Tooltip_Output' has a wrong offset!");

// Function GadgetSelectButton.GadgetSelectButton_C.Get_EmptySlot_ToolTipWidget_0
// 0x000C (0x000C - 0x0000)
struct GadgetSelectButton_C_Get_EmptySlot_ToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUserWidget*                            CallFunc_Create_Basic_Tooltip_Output;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GadgetSelectButton_C_Get_EmptySlot_ToolTipWidget_0) == 0x000004, "Wrong alignment on GadgetSelectButton_C_Get_EmptySlot_ToolTipWidget_0");
static_assert(sizeof(GadgetSelectButton_C_Get_EmptySlot_ToolTipWidget_0) == 0x00000C, "Wrong size on GadgetSelectButton_C_Get_EmptySlot_ToolTipWidget_0");
static_assert(offsetof(GadgetSelectButton_C_Get_EmptySlot_ToolTipWidget_0, ReturnValue) == 0x000000, "Member 'GadgetSelectButton_C_Get_EmptySlot_ToolTipWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(GadgetSelectButton_C_Get_EmptySlot_ToolTipWidget_0, CallFunc_GetOwningPlayer_ReturnValue) == 0x000004, "Member 'GadgetSelectButton_C_Get_EmptySlot_ToolTipWidget_0::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GadgetSelectButton_C_Get_EmptySlot_ToolTipWidget_0, CallFunc_Create_Basic_Tooltip_Output) == 0x000008, "Member 'GadgetSelectButton_C_Get_EmptySlot_ToolTipWidget_0::CallFunc_Create_Basic_Tooltip_Output' has a wrong offset!");

// Function GadgetSelectButton.GadgetSelectButton_C.On_Locked_MouseButtonDown_0
// 0x0154 (0x0154 - 0x0000)
struct GadgetSelectButton_C_On_Locked_MouseButtonDown_0 final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0034)(Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0034(0x0060)(Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x0094(0x0060)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x00F4(0x0060)()
};
static_assert(alignof(GadgetSelectButton_C_On_Locked_MouseButtonDown_0) == 0x000004, "Wrong alignment on GadgetSelectButton_C_On_Locked_MouseButtonDown_0");
static_assert(sizeof(GadgetSelectButton_C_On_Locked_MouseButtonDown_0) == 0x000154, "Wrong size on GadgetSelectButton_C_On_Locked_MouseButtonDown_0");
static_assert(offsetof(GadgetSelectButton_C_On_Locked_MouseButtonDown_0, MyGeometry) == 0x000000, "Member 'GadgetSelectButton_C_On_Locked_MouseButtonDown_0::MyGeometry' has a wrong offset!");
static_assert(offsetof(GadgetSelectButton_C_On_Locked_MouseButtonDown_0, MouseEvent) == 0x000034, "Member 'GadgetSelectButton_C_On_Locked_MouseButtonDown_0::MouseEvent' has a wrong offset!");
static_assert(offsetof(GadgetSelectButton_C_On_Locked_MouseButtonDown_0, ReturnValue) == 0x000094, "Member 'GadgetSelectButton_C_On_Locked_MouseButtonDown_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(GadgetSelectButton_C_On_Locked_MouseButtonDown_0, CallFunc_Handled_ReturnValue) == 0x0000F4, "Member 'GadgetSelectButton_C_On_Locked_MouseButtonDown_0::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function GadgetSelectButton.GadgetSelectButton_C.On_EmptySlot_MouseButtonDown_0
// 0x0154 (0x0154 - 0x0000)
struct GadgetSelectButton_C_On_EmptySlot_MouseButtonDown_0 final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0034)(Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0034(0x0060)(Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x0094(0x0060)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x00F4(0x0060)()
};
static_assert(alignof(GadgetSelectButton_C_On_EmptySlot_MouseButtonDown_0) == 0x000004, "Wrong alignment on GadgetSelectButton_C_On_EmptySlot_MouseButtonDown_0");
static_assert(sizeof(GadgetSelectButton_C_On_EmptySlot_MouseButtonDown_0) == 0x000154, "Wrong size on GadgetSelectButton_C_On_EmptySlot_MouseButtonDown_0");
static_assert(offsetof(GadgetSelectButton_C_On_EmptySlot_MouseButtonDown_0, MyGeometry) == 0x000000, "Member 'GadgetSelectButton_C_On_EmptySlot_MouseButtonDown_0::MyGeometry' has a wrong offset!");
static_assert(offsetof(GadgetSelectButton_C_On_EmptySlot_MouseButtonDown_0, MouseEvent) == 0x000034, "Member 'GadgetSelectButton_C_On_EmptySlot_MouseButtonDown_0::MouseEvent' has a wrong offset!");
static_assert(offsetof(GadgetSelectButton_C_On_EmptySlot_MouseButtonDown_0, ReturnValue) == 0x000094, "Member 'GadgetSelectButton_C_On_EmptySlot_MouseButtonDown_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(GadgetSelectButton_C_On_EmptySlot_MouseButtonDown_0, CallFunc_Handled_ReturnValue) == 0x0000F4, "Member 'GadgetSelectButton_C_On_EmptySlot_MouseButtonDown_0::CallFunc_Handled_ReturnValue' has a wrong offset!");

}

#pragma pack(pop)
