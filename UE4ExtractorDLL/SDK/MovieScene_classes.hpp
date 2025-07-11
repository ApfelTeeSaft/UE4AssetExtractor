﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MovieScene

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "MovieScene_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Class MovieScene.MovieScene
// 0x0054 (0x0070 - 0x001C)
class UMovieScene final : public UObject
{
public:
	TArray<struct FMovieSceneSpawnable>           Spawnables;                                        // 0x001C(0x000C)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieScenePossessable>         Possessables;                                      // 0x0028(0x000C)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneBinding>             ObjectBindings;                                    // 0x0034(0x000C)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneTrack*>               MasterTracks;                                      // 0x0040(0x000C)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UMovieSceneTrack*                       ShotTrack;                                         // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFloatRange                            PlaybackRange;                                     // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	float                                         InTime;                                            // 0x0060(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         OutTime;                                           // 0x0064(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         StartTime;                                         // 0x0068(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         EndTime;                                           // 0x006C(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieScene">();
	}
	static class UMovieScene* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieScene>();
	}
};
static_assert(alignof(UMovieScene) == 0x000004, "Wrong alignment on UMovieScene");
static_assert(sizeof(UMovieScene) == 0x000070, "Wrong size on UMovieScene");
static_assert(offsetof(UMovieScene, Spawnables) == 0x00001C, "Member 'UMovieScene::Spawnables' has a wrong offset!");
static_assert(offsetof(UMovieScene, Possessables) == 0x000028, "Member 'UMovieScene::Possessables' has a wrong offset!");
static_assert(offsetof(UMovieScene, ObjectBindings) == 0x000034, "Member 'UMovieScene::ObjectBindings' has a wrong offset!");
static_assert(offsetof(UMovieScene, MasterTracks) == 0x000040, "Member 'UMovieScene::MasterTracks' has a wrong offset!");
static_assert(offsetof(UMovieScene, ShotTrack) == 0x00004C, "Member 'UMovieScene::ShotTrack' has a wrong offset!");
static_assert(offsetof(UMovieScene, PlaybackRange) == 0x000050, "Member 'UMovieScene::PlaybackRange' has a wrong offset!");
static_assert(offsetof(UMovieScene, InTime) == 0x000060, "Member 'UMovieScene::InTime' has a wrong offset!");
static_assert(offsetof(UMovieScene, OutTime) == 0x000064, "Member 'UMovieScene::OutTime' has a wrong offset!");
static_assert(offsetof(UMovieScene, StartTime) == 0x000068, "Member 'UMovieScene::StartTime' has a wrong offset!");
static_assert(offsetof(UMovieScene, EndTime) == 0x00006C, "Member 'UMovieScene::EndTime' has a wrong offset!");

// Class MovieScene.MovieSceneSection
// 0x0014 (0x0030 - 0x001C)
class UMovieSceneSection : public UObject
{
public:
	float                                         StartTime;                                         // 0x001C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         EndTime;                                           // 0x0020(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         RowIndex;                                          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         OverlapPriority;                                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         bIsActive : 1;                                     // 0x002C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, NativeAccessSpecifierPrivate))
	uint8                                         bIsLocked : 1;                                     // 0x002C(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, NativeAccessSpecifierPrivate))
	uint8                                         bIsInfinite : 1;                                   // 0x002C(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, NativeAccessSpecifierPrivate))
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneSection">();
	}
	static class UMovieSceneSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneSection>();
	}
};
static_assert(alignof(UMovieSceneSection) == 0x000004, "Wrong alignment on UMovieSceneSection");
static_assert(sizeof(UMovieSceneSection) == 0x000030, "Wrong size on UMovieSceneSection");
static_assert(offsetof(UMovieSceneSection, StartTime) == 0x00001C, "Member 'UMovieSceneSection::StartTime' has a wrong offset!");
static_assert(offsetof(UMovieSceneSection, EndTime) == 0x000020, "Member 'UMovieSceneSection::EndTime' has a wrong offset!");
static_assert(offsetof(UMovieSceneSection, RowIndex) == 0x000024, "Member 'UMovieSceneSection::RowIndex' has a wrong offset!");
static_assert(offsetof(UMovieSceneSection, OverlapPriority) == 0x000028, "Member 'UMovieSceneSection::OverlapPriority' has a wrong offset!");

// Class MovieScene.MovieSceneSequence
// 0x0000 (0x001C - 0x001C)
class UMovieSceneSequence : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneSequence">();
	}
	static class UMovieSceneSequence* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneSequence>();
	}
};
static_assert(alignof(UMovieSceneSequence) == 0x000004, "Wrong alignment on UMovieSceneSequence");
static_assert(sizeof(UMovieSceneSequence) == 0x00001C, "Wrong size on UMovieSceneSequence");

// Class MovieScene.MovieSceneTrack
// 0x0000 (0x001C - 0x001C)
class UMovieSceneTrack : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneTrack">();
	}
	static class UMovieSceneTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneTrack>();
	}
};
static_assert(alignof(UMovieSceneTrack) == 0x000004, "Wrong alignment on UMovieSceneTrack");
static_assert(sizeof(UMovieSceneTrack) == 0x00001C, "Wrong size on UMovieSceneTrack");

// Class MovieScene.MovieSceneNameableTrack
// 0x0000 (0x001C - 0x001C)
class UMovieSceneNameableTrack : public UMovieSceneTrack
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneNameableTrack">();
	}
	static class UMovieSceneNameableTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneNameableTrack>();
	}
};
static_assert(alignof(UMovieSceneNameableTrack) == 0x000004, "Wrong alignment on UMovieSceneNameableTrack");
static_assert(sizeof(UMovieSceneNameableTrack) == 0x00001C, "Wrong size on UMovieSceneNameableTrack");

}

#pragma pack(pop)
