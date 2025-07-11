﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Outlander_InTheZoneSwitch

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK::Params
{

// Function GA_Outlander_InTheZoneSwitch.GA_Outlander_InTheZoneSwitch_C.ExecuteUbergraph_GA_Outlander_InTheZoneSwitch
// 0x0094 (0x0094 - 0x0000)
struct GA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute; // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatAttribute_ReturnValue;            // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0010(0x0058)(ConstParm)
	class AFortWeapon*                            K2Node_DynamicCast_AsFort_Weapon;                  // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E[0x2];                                       // 0x006E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput; // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue;   // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput; // 0x007C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue2;  // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85[0x3];                                       // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface3_CastInput; // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue3;  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch) == 0x000004, "Wrong alignment on GA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch");
static_assert(sizeof(GA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch) == 0x000094, "Wrong size on GA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch");
static_assert(offsetof(GA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch, EntryPoint) == 0x000000, "Member 'GA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch, CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute) == 0x000004, "Member 'GA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch::CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute' has a wrong offset!");
static_assert(offsetof(GA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch, CallFunc_GetFloatAttribute_ReturnValue) == 0x000008, "Member 'GA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch::CallFunc_GetFloatAttribute_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x00000C, "Member 'GA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch, K2Node_Event_EventData) == 0x000010, "Member 'GA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch, K2Node_DynamicCast_AsFort_Weapon) == 0x000068, "Member 'GA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch::K2Node_DynamicCast_AsFort_Weapon' has a wrong offset!");
static_assert(offsetof(GA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch, K2Node_DynamicCast_bSuccess) == 0x00006C, "Member 'GA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch, CallFunc_IsValid_ReturnValue) == 0x00006D, "Member 'GA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch, CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput) == 0x000070, "Member 'GA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch::CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput' has a wrong offset!");
static_assert(offsetof(GA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch, CallFunc_HasAllMatchingGameplayTags_ReturnValue) == 0x000078, "Member 'GA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch::CallFunc_HasAllMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch, CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput) == 0x00007C, "Member 'GA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch::CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput' has a wrong offset!");
static_assert(offsetof(GA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch, CallFunc_HasAllMatchingGameplayTags_ReturnValue2) == 0x000084, "Member 'GA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch::CallFunc_HasAllMatchingGameplayTags_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch, CallFunc_HasAllMatchingGameplayTags_TagContainerInterface3_CastInput) == 0x000088, "Member 'GA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch::CallFunc_HasAllMatchingGameplayTags_TagContainerInterface3_CastInput' has a wrong offset!");
static_assert(offsetof(GA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch, CallFunc_HasAllMatchingGameplayTags_ReturnValue3) == 0x000090, "Member 'GA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch::CallFunc_HasAllMatchingGameplayTags_ReturnValue3' has a wrong offset!");
static_assert(offsetof(GA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch, CallFunc_BooleanOR_ReturnValue) == 0x000091, "Member 'GA_Outlander_InTheZoneSwitch_C_ExecuteUbergraph_GA_Outlander_InTheZoneSwitch::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function GA_Outlander_InTheZoneSwitch.GA_Outlander_InTheZoneSwitch_C.K2_ActivateAbilityFromEvent
// 0x0058 (0x0058 - 0x0000)
struct GA_Outlander_InTheZoneSwitch_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData_0;                                       // 0x0000(0x0058)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_Outlander_InTheZoneSwitch_C_K2_ActivateAbilityFromEvent) == 0x000004, "Wrong alignment on GA_Outlander_InTheZoneSwitch_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_Outlander_InTheZoneSwitch_C_K2_ActivateAbilityFromEvent) == 0x000058, "Wrong size on GA_Outlander_InTheZoneSwitch_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_Outlander_InTheZoneSwitch_C_K2_ActivateAbilityFromEvent, EventData_0) == 0x000000, "Member 'GA_Outlander_InTheZoneSwitch_C_K2_ActivateAbilityFromEvent::EventData_0' has a wrong offset!");

}

#pragma pack(pop)
