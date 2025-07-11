﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LevelSequence

#include "Basic.hpp"

#include "LevelSequence_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK::Params
{

// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
// 0x0014 (0x0014 - 0x0000)
struct LevelSequencePlayer_CreateLevelSequencePlayer final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequence*                         LevelSequence_0;                                   // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLevelSequencePlaybackSettings         Settings;                                          // 0x0008(0x0008)(Parm, NativeAccessSpecifierPublic)
	class ULevelSequencePlayer*                   ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequencePlayer_CreateLevelSequencePlayer) == 0x000004, "Wrong alignment on LevelSequencePlayer_CreateLevelSequencePlayer");
static_assert(sizeof(LevelSequencePlayer_CreateLevelSequencePlayer) == 0x000014, "Wrong size on LevelSequencePlayer_CreateLevelSequencePlayer");
static_assert(offsetof(LevelSequencePlayer_CreateLevelSequencePlayer, WorldContextObject) == 0x000000, "Member 'LevelSequencePlayer_CreateLevelSequencePlayer::WorldContextObject' has a wrong offset!");
static_assert(offsetof(LevelSequencePlayer_CreateLevelSequencePlayer, LevelSequence_0) == 0x000004, "Member 'LevelSequencePlayer_CreateLevelSequencePlayer::LevelSequence_0' has a wrong offset!");
static_assert(offsetof(LevelSequencePlayer_CreateLevelSequencePlayer, Settings) == 0x000008, "Member 'LevelSequencePlayer_CreateLevelSequencePlayer::Settings' has a wrong offset!");
static_assert(offsetof(LevelSequencePlayer_CreateLevelSequencePlayer, ReturnValue) == 0x000010, "Member 'LevelSequencePlayer_CreateLevelSequencePlayer::ReturnValue' has a wrong offset!");

// Function LevelSequence.LevelSequencePlayer.PlayLooping
// 0x0004 (0x0004 - 0x0000)
struct LevelSequencePlayer_PlayLooping final
{
public:
	int32                                         NumLoops;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequencePlayer_PlayLooping) == 0x000004, "Wrong alignment on LevelSequencePlayer_PlayLooping");
static_assert(sizeof(LevelSequencePlayer_PlayLooping) == 0x000004, "Wrong size on LevelSequencePlayer_PlayLooping");
static_assert(offsetof(LevelSequencePlayer_PlayLooping, NumLoops) == 0x000000, "Member 'LevelSequencePlayer_PlayLooping::NumLoops' has a wrong offset!");

// Function LevelSequence.LevelSequencePlayer.SetPlaybackPosition
// 0x0004 (0x0004 - 0x0000)
struct LevelSequencePlayer_SetPlaybackPosition final
{
public:
	float                                         NewPlaybackPosition;                               // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequencePlayer_SetPlaybackPosition) == 0x000004, "Wrong alignment on LevelSequencePlayer_SetPlaybackPosition");
static_assert(sizeof(LevelSequencePlayer_SetPlaybackPosition) == 0x000004, "Wrong size on LevelSequencePlayer_SetPlaybackPosition");
static_assert(offsetof(LevelSequencePlayer_SetPlaybackPosition, NewPlaybackPosition) == 0x000000, "Member 'LevelSequencePlayer_SetPlaybackPosition::NewPlaybackPosition' has a wrong offset!");

// Function LevelSequence.LevelSequencePlayer.SetPlaybackRange
// 0x0008 (0x0008 - 0x0000)
struct LevelSequencePlayer_SetPlaybackRange final
{
public:
	float                                         NewStartTime;                                      // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NewEndTime;                                        // 0x0004(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequencePlayer_SetPlaybackRange) == 0x000004, "Wrong alignment on LevelSequencePlayer_SetPlaybackRange");
static_assert(sizeof(LevelSequencePlayer_SetPlaybackRange) == 0x000008, "Wrong size on LevelSequencePlayer_SetPlaybackRange");
static_assert(offsetof(LevelSequencePlayer_SetPlaybackRange, NewStartTime) == 0x000000, "Member 'LevelSequencePlayer_SetPlaybackRange::NewStartTime' has a wrong offset!");
static_assert(offsetof(LevelSequencePlayer_SetPlaybackRange, NewEndTime) == 0x000004, "Member 'LevelSequencePlayer_SetPlaybackRange::NewEndTime' has a wrong offset!");

// Function LevelSequence.LevelSequencePlayer.SetPlayRate
// 0x0004 (0x0004 - 0x0000)
struct LevelSequencePlayer_SetPlayRate final
{
public:
	float                                         PlayRate;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequencePlayer_SetPlayRate) == 0x000004, "Wrong alignment on LevelSequencePlayer_SetPlayRate");
static_assert(sizeof(LevelSequencePlayer_SetPlayRate) == 0x000004, "Wrong size on LevelSequencePlayer_SetPlayRate");
static_assert(offsetof(LevelSequencePlayer_SetPlayRate, PlayRate) == 0x000000, "Member 'LevelSequencePlayer_SetPlayRate::PlayRate' has a wrong offset!");

// Function LevelSequence.LevelSequencePlayer.GetLength
// 0x0004 (0x0004 - 0x0000)
struct LevelSequencePlayer_GetLength final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequencePlayer_GetLength) == 0x000004, "Wrong alignment on LevelSequencePlayer_GetLength");
static_assert(sizeof(LevelSequencePlayer_GetLength) == 0x000004, "Wrong size on LevelSequencePlayer_GetLength");
static_assert(offsetof(LevelSequencePlayer_GetLength, ReturnValue) == 0x000000, "Member 'LevelSequencePlayer_GetLength::ReturnValue' has a wrong offset!");

// Function LevelSequence.LevelSequencePlayer.GetPlaybackPosition
// 0x0004 (0x0004 - 0x0000)
struct LevelSequencePlayer_GetPlaybackPosition final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequencePlayer_GetPlaybackPosition) == 0x000004, "Wrong alignment on LevelSequencePlayer_GetPlaybackPosition");
static_assert(sizeof(LevelSequencePlayer_GetPlaybackPosition) == 0x000004, "Wrong size on LevelSequencePlayer_GetPlaybackPosition");
static_assert(offsetof(LevelSequencePlayer_GetPlaybackPosition, ReturnValue) == 0x000000, "Member 'LevelSequencePlayer_GetPlaybackPosition::ReturnValue' has a wrong offset!");

// Function LevelSequence.LevelSequencePlayer.GetPlayRate
// 0x0004 (0x0004 - 0x0000)
struct LevelSequencePlayer_GetPlayRate final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequencePlayer_GetPlayRate) == 0x000004, "Wrong alignment on LevelSequencePlayer_GetPlayRate");
static_assert(sizeof(LevelSequencePlayer_GetPlayRate) == 0x000004, "Wrong size on LevelSequencePlayer_GetPlayRate");
static_assert(offsetof(LevelSequencePlayer_GetPlayRate, ReturnValue) == 0x000000, "Member 'LevelSequencePlayer_GetPlayRate::ReturnValue' has a wrong offset!");

// Function LevelSequence.LevelSequencePlayer.IsPlaying
// 0x0001 (0x0001 - 0x0000)
struct LevelSequencePlayer_IsPlaying final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequencePlayer_IsPlaying) == 0x000001, "Wrong alignment on LevelSequencePlayer_IsPlaying");
static_assert(sizeof(LevelSequencePlayer_IsPlaying) == 0x000001, "Wrong size on LevelSequencePlayer_IsPlaying");
static_assert(offsetof(LevelSequencePlayer_IsPlaying, ReturnValue) == 0x000000, "Member 'LevelSequencePlayer_IsPlaying::ReturnValue' has a wrong offset!");

// Function LevelSequence.LevelSequenceActor.SetSequence
// 0x0004 (0x0004 - 0x0000)
struct LevelSequenceActor_SetSequence final
{
public:
	class ULevelSequence*                         InSequence;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelSequenceActor_SetSequence) == 0x000004, "Wrong alignment on LevelSequenceActor_SetSequence");
static_assert(sizeof(LevelSequenceActor_SetSequence) == 0x000004, "Wrong size on LevelSequenceActor_SetSequence");
static_assert(offsetof(LevelSequenceActor_SetSequence, InSequence) == 0x000000, "Member 'LevelSequenceActor_SetSequence::InSequence' has a wrong offset!");

}

#pragma pack(pop)
