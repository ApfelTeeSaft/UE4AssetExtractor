﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LlamaAnim_BP

#include "Basic.hpp"


#pragma pack(push, 0x4)
namespace SDK::Params
{

// Function LlamaAnim_BP.LlamaAnim_BP_C.ExecuteUbergraph_LlamaAnim_BP
// 0x0018 (0x0018 - 0x0000)
struct LlamaAnim_BP_C_ExecuteUbergraph_LlamaAnim_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AProp_Explorer_OutlanderFragment_Llama_C* K2Node_DynamicCast_AsProp_Explorer_Outlander_Fragment_Llama; // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Montage_Play_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Montage_Play_ReturnValue2;                // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LlamaAnim_BP_C_ExecuteUbergraph_LlamaAnim_BP) == 0x000004, "Wrong alignment on LlamaAnim_BP_C_ExecuteUbergraph_LlamaAnim_BP");
static_assert(sizeof(LlamaAnim_BP_C_ExecuteUbergraph_LlamaAnim_BP) == 0x000018, "Wrong size on LlamaAnim_BP_C_ExecuteUbergraph_LlamaAnim_BP");
static_assert(offsetof(LlamaAnim_BP_C_ExecuteUbergraph_LlamaAnim_BP, EntryPoint) == 0x000000, "Member 'LlamaAnim_BP_C_ExecuteUbergraph_LlamaAnim_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(LlamaAnim_BP_C_ExecuteUbergraph_LlamaAnim_BP, CallFunc_GetOwningActor_ReturnValue) == 0x000004, "Member 'LlamaAnim_BP_C_ExecuteUbergraph_LlamaAnim_BP::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(LlamaAnim_BP_C_ExecuteUbergraph_LlamaAnim_BP, K2Node_DynamicCast_AsProp_Explorer_Outlander_Fragment_Llama) == 0x000008, "Member 'LlamaAnim_BP_C_ExecuteUbergraph_LlamaAnim_BP::K2Node_DynamicCast_AsProp_Explorer_Outlander_Fragment_Llama' has a wrong offset!");
static_assert(offsetof(LlamaAnim_BP_C_ExecuteUbergraph_LlamaAnim_BP, K2Node_DynamicCast_bSuccess) == 0x00000C, "Member 'LlamaAnim_BP_C_ExecuteUbergraph_LlamaAnim_BP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LlamaAnim_BP_C_ExecuteUbergraph_LlamaAnim_BP, CallFunc_Montage_Play_ReturnValue) == 0x000010, "Member 'LlamaAnim_BP_C_ExecuteUbergraph_LlamaAnim_BP::CallFunc_Montage_Play_ReturnValue' has a wrong offset!");
static_assert(offsetof(LlamaAnim_BP_C_ExecuteUbergraph_LlamaAnim_BP, CallFunc_Montage_Play_ReturnValue2) == 0x000014, "Member 'LlamaAnim_BP_C_ExecuteUbergraph_LlamaAnim_BP::CallFunc_Montage_Play_ReturnValue2' has a wrong offset!");

}

#pragma pack(pop)
