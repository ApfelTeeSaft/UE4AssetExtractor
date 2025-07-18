﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Hex_Outpost

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK::Params
{

// Function BP_Hex_Outpost.BP_Hex_Outpost_C.ExecuteUbergraph_BP_Hex_Outpost
// 0x0104 (0x0104 - 0x0000)
struct BP_Hex_Outpost_C_ExecuteUbergraph_BP_Hex_Outpost final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetBannerPattern_ReturnValue;             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMyTownData*                            CallFunc_GetMyTownData_ReturnValue;                // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;                  // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMyTownBannerData                      CallFunc_Array_Get_Item;                           // 0x0010(0x00E8)()
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTexture*                               K2Node_DynamicCast_AsTexture;                      // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Hex_Outpost_C_ExecuteUbergraph_BP_Hex_Outpost) == 0x000004, "Wrong alignment on BP_Hex_Outpost_C_ExecuteUbergraph_BP_Hex_Outpost");
static_assert(sizeof(BP_Hex_Outpost_C_ExecuteUbergraph_BP_Hex_Outpost) == 0x000104, "Wrong size on BP_Hex_Outpost_C_ExecuteUbergraph_BP_Hex_Outpost");
static_assert(offsetof(BP_Hex_Outpost_C_ExecuteUbergraph_BP_Hex_Outpost, EntryPoint) == 0x000000, "Member 'BP_Hex_Outpost_C_ExecuteUbergraph_BP_Hex_Outpost::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Hex_Outpost_C_ExecuteUbergraph_BP_Hex_Outpost, CallFunc_GetBannerPattern_ReturnValue) == 0x000004, "Member 'BP_Hex_Outpost_C_ExecuteUbergraph_BP_Hex_Outpost::CallFunc_GetBannerPattern_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Hex_Outpost_C_ExecuteUbergraph_BP_Hex_Outpost, CallFunc_GetMyTownData_ReturnValue) == 0x000008, "Member 'BP_Hex_Outpost_C_ExecuteUbergraph_BP_Hex_Outpost::CallFunc_GetMyTownData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Hex_Outpost_C_ExecuteUbergraph_BP_Hex_Outpost, CallFunc_GetMaterial_ReturnValue) == 0x00000C, "Member 'BP_Hex_Outpost_C_ExecuteUbergraph_BP_Hex_Outpost::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Hex_Outpost_C_ExecuteUbergraph_BP_Hex_Outpost, CallFunc_Array_Get_Item) == 0x000010, "Member 'BP_Hex_Outpost_C_ExecuteUbergraph_BP_Hex_Outpost::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Hex_Outpost_C_ExecuteUbergraph_BP_Hex_Outpost, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x0000F8, "Member 'BP_Hex_Outpost_C_ExecuteUbergraph_BP_Hex_Outpost::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Hex_Outpost_C_ExecuteUbergraph_BP_Hex_Outpost, K2Node_DynamicCast_AsTexture) == 0x0000FC, "Member 'BP_Hex_Outpost_C_ExecuteUbergraph_BP_Hex_Outpost::K2Node_DynamicCast_AsTexture' has a wrong offset!");
static_assert(offsetof(BP_Hex_Outpost_C_ExecuteUbergraph_BP_Hex_Outpost, K2Node_DynamicCast_bSuccess) == 0x000100, "Member 'BP_Hex_Outpost_C_ExecuteUbergraph_BP_Hex_Outpost::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

#pragma pack(pop)
