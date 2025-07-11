﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SupplyDrop

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK::Params
{

// Function GA_SupplyDrop.GA_SupplyDrop_C.ExecuteUbergraph_GA_SupplyDrop
// 0x0110 (0x0110 - 0x0000)
struct GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x0008(0x0034)(ContainsInstancedReference)
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortAbilityDecoTool*                   K2Node_DynamicCast_AsFort_Ability_Deco_Tool;       // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess3;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAbilityToolSpawnParameters            CallFunc_GetSpawnParameters_OutSpawnParamters;     // 0x0054(0x0020)()
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x0074(0x0014)()
	class ABuildingActor*                         CallFunc_AbilitySpawnDeco_ReturnValue;             // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x008C(0x000C)(ZeroConstructor, ReferenceParm)
	class AB_SupplyDropPlacement_C*               K2Node_DynamicCast_AsB_Supply_Drop_Placement;      // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess4;                      // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D[0x3];                                       // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;               // 0x00A0(0x0058)()
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_FA[0x2];                                       // 0x00FA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute; // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_101[0x3];                                      // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue; // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue2;            // 0x010D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop) == 0x000004, "Wrong alignment on GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop");
static_assert(sizeof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop) == 0x000110, "Wrong size on GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, EntryPoint) == 0x000000, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000004, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, CallFunc_GetActorInfo_ReturnValue) == 0x000008, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, K2Node_DynamicCast_AsFort_Pawn) == 0x00003C, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000044, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, K2Node_DynamicCast_bSuccess2) == 0x000048, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, K2Node_DynamicCast_AsFort_Ability_Deco_Tool) == 0x00004C, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::K2Node_DynamicCast_AsFort_Ability_Deco_Tool' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, K2Node_DynamicCast_bSuccess3) == 0x000050, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::K2Node_DynamicCast_bSuccess3' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, CallFunc_GetSpawnParameters_OutSpawnParamters) == 0x000054, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::CallFunc_GetSpawnParameters_OutSpawnParamters' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x000074, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, CallFunc_AbilitySpawnDeco_ReturnValue) == 0x000088, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::CallFunc_AbilitySpawnDeco_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x00008C, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, K2Node_DynamicCast_AsB_Supply_Drop_Placement) == 0x000098, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::K2Node_DynamicCast_AsB_Supply_Drop_Placement' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, K2Node_DynamicCast_bSuccess4) == 0x00009C, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::K2Node_DynamicCast_bSuccess4' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, K2Node_MakeStruct_GameplayEventData) == 0x0000A0, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, CallFunc_K2_CommitAbility_ReturnValue) == 0x0000F8, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, CallFunc_HasAuthority_ReturnValue) == 0x0000F9, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x0000FC, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute) == 0x000100, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue) == 0x000104, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, CallFunc_FTrunc_ReturnValue) == 0x000108, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, K2Node_SwitchInteger_CmpSuccess) == 0x00010C, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, CallFunc_K2_CommitAbility_ReturnValue2) == 0x00010D, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::CallFunc_K2_CommitAbility_ReturnValue2' has a wrong offset!");

// Function GA_SupplyDrop.GA_SupplyDrop_C.GetAttributeValue
// 0x0020 (0x0020 - 0x0000)
struct GA_SupplyDrop_C_GetAttributeValue final
{
public:
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFortAbilitySystemComponent*            K2Node_DynamicCast_AsFort_Ability_System_Component; // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAttributeInfo                         CallFunc_FindAttributeInformation_ReturnValue;     // 0x000C(0x0008)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetAttributeMagnitude_ReturnValue;        // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_SupplyDrop_C_GetAttributeValue) == 0x000004, "Wrong alignment on GA_SupplyDrop_C_GetAttributeValue");
static_assert(sizeof(GA_SupplyDrop_C_GetAttributeValue) == 0x000020, "Wrong size on GA_SupplyDrop_C_GetAttributeValue");
static_assert(offsetof(GA_SupplyDrop_C_GetAttributeValue, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000000, "Member 'GA_SupplyDrop_C_GetAttributeValue::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_GetAttributeValue, K2Node_DynamicCast_AsFort_Ability_System_Component) == 0x000004, "Member 'GA_SupplyDrop_C_GetAttributeValue::K2Node_DynamicCast_AsFort_Ability_System_Component' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_GetAttributeValue, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'GA_SupplyDrop_C_GetAttributeValue::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_GetAttributeValue, CallFunc_FindAttributeInformation_ReturnValue) == 0x00000C, "Member 'GA_SupplyDrop_C_GetAttributeValue::CallFunc_FindAttributeInformation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_GetAttributeValue, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'GA_SupplyDrop_C_GetAttributeValue::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_GetAttributeValue, CallFunc_GetAttributeMagnitude_ReturnValue) == 0x000018, "Member 'GA_SupplyDrop_C_GetAttributeValue::CallFunc_GetAttributeMagnitude_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_GetAttributeValue, CallFunc_FFloor_ReturnValue) == 0x00001C, "Member 'GA_SupplyDrop_C_GetAttributeValue::CallFunc_FFloor_ReturnValue' has a wrong offset!");

}

#pragma pack(pop)
