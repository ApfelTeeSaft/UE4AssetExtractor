﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EngineSettings

#include "Basic.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Enum EngineSettings.EThreePlayerSplitScreenType
// NumValues: 0x0003
enum class EThreePlayerSplitScreenType : uint8
{
	FavorTop                                 = 0,
	FavorBottom                              = 1,
	EThreePlayerSplitScreenType_MAX          = 2,
};

// Enum EngineSettings.ETwoPlayerSplitScreenType
// NumValues: 0x0003
enum class ETwoPlayerSplitScreenType : uint8
{
	Horizontal                               = 0,
	Vertical                                 = 1,
	ETwoPlayerSplitScreenType_MAX            = 2,
};

// ScriptStruct EngineSettings.AutoCompleteCommand
// 0x0018 (0x0018 - 0x0000)
struct FAutoCompleteCommand final
{
public:
	class FString                                 Command;                                           // 0x0000(0x000C)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Desc;                                              // 0x000C(0x000C)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAutoCompleteCommand) == 0x000004, "Wrong alignment on FAutoCompleteCommand");
static_assert(sizeof(FAutoCompleteCommand) == 0x000018, "Wrong size on FAutoCompleteCommand");
static_assert(offsetof(FAutoCompleteCommand, Command) == 0x000000, "Member 'FAutoCompleteCommand::Command' has a wrong offset!");
static_assert(offsetof(FAutoCompleteCommand, Desc) == 0x00000C, "Member 'FAutoCompleteCommand::Desc' has a wrong offset!");

}

#pragma pack(pop)
