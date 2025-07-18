﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Preview_Outlander_SpecialFragment_Llama

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK::Params
{

// Function Preview_Outlander_SpecialFragment_Llama.Preview_Outlander_SpecialFragment_Llama_C.ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama
// 0x0204 (0x0204 - 0x0000)
struct Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetPositionFromTime_ReturnValue;          // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetVelocityCorrectedTime_ReturnValue;     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x002C(0x0080)(ContainsInstancedReference)
	struct FVector                                CallFunc_GetTangentFromTime_ReturnValue;           // 0x00AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetNormalFromTime_ReturnValue;            // 0x00B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x00C4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetBinormalFromTime_ReturnValue;          // 0x00D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_MakeRotationFromAxes_ReturnValue;         // 0x00DC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x00E8(0x0080)(ContainsInstancedReference)
	class UMaterialInstanceDynamic*               CallFunc_CreatePreviewMID_ReturnValue;             // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_RotateAngleAxis_ReturnValue;              // 0x016C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x0178(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_AddWorldRotation_SweepHitResult;       // 0x0184(0x0080)(ContainsInstancedReference)
};
static_assert(alignof(Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama) == 0x000004, "Wrong alignment on Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama");
static_assert(sizeof(Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama) == 0x000204, "Wrong size on Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama");
static_assert(offsetof(Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama, EntryPoint) == 0x000000, "Member 'Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama::EntryPoint' has a wrong offset!");
static_assert(offsetof(Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama, CallFunc_Array_LastIndex_ReturnValue) == 0x000004, "Member 'Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama, CallFunc_Subtract_IntInt_ReturnValue) == 0x000008, "Member 'Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00000C, "Member 'Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama, K2Node_Event_DeltaSeconds) == 0x000010, "Member 'Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama, CallFunc_Add_FloatFloat_ReturnValue) == 0x000014, "Member 'Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000018, "Member 'Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama, CallFunc_GetPositionFromTime_ReturnValue) == 0x00001C, "Member 'Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama::CallFunc_GetPositionFromTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama, CallFunc_GetVelocityCorrectedTime_ReturnValue) == 0x000028, "Member 'Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama::CallFunc_GetVelocityCorrectedTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x00002C, "Member 'Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama, CallFunc_GetTangentFromTime_ReturnValue) == 0x0000AC, "Member 'Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama::CallFunc_GetTangentFromTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama, CallFunc_GetNormalFromTime_ReturnValue) == 0x0000B8, "Member 'Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama::CallFunc_GetNormalFromTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0000C4, "Member 'Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama, CallFunc_GetBinormalFromTime_ReturnValue) == 0x0000D0, "Member 'Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama::CallFunc_GetBinormalFromTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama, CallFunc_MakeRotationFromAxes_ReturnValue) == 0x0000DC, "Member 'Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama::CallFunc_MakeRotationFromAxes_ReturnValue' has a wrong offset!");
static_assert(offsetof(Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x0000E8, "Member 'Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama, CallFunc_CreatePreviewMID_ReturnValue) == 0x000168, "Member 'Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama::CallFunc_CreatePreviewMID_ReturnValue' has a wrong offset!");
static_assert(offsetof(Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama, CallFunc_RotateAngleAxis_ReturnValue) == 0x00016C, "Member 'Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama::CallFunc_RotateAngleAxis_ReturnValue' has a wrong offset!");
static_assert(offsetof(Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x000178, "Member 'Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama, CallFunc_K2_AddWorldRotation_SweepHitResult) == 0x000184, "Member 'Preview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama::CallFunc_K2_AddWorldRotation_SweepHitResult' has a wrong offset!");

// Function Preview_Outlander_SpecialFragment_Llama.Preview_Outlander_SpecialFragment_Llama_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Preview_Outlander_SpecialFragment_Llama_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Preview_Outlander_SpecialFragment_Llama_C_ReceiveTick) == 0x000004, "Wrong alignment on Preview_Outlander_SpecialFragment_Llama_C_ReceiveTick");
static_assert(sizeof(Preview_Outlander_SpecialFragment_Llama_C_ReceiveTick) == 0x000004, "Wrong size on Preview_Outlander_SpecialFragment_Llama_C_ReceiveTick");
static_assert(offsetof(Preview_Outlander_SpecialFragment_Llama_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Preview_Outlander_SpecialFragment_Llama_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

#pragma pack(pop)
