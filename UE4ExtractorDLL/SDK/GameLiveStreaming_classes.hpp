﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameLiveStreaming

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "OnlineSubsystemUtils_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Class GameLiveStreaming.GameLiveStreamingFunctionLibrary
// 0x0000 (0x001C - 0x001C)
class UGameLiveStreamingFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool IsBroadcastingGame();
	static bool IsWebCamEnabled();
	static void StartBroadcastingGame(const class FString& LoginUserName, const class FString& LoginPassword, int32 FrameRate, float ScreenScaling, bool bStartWebCam, int32 DesiredWebCamWidth, int32 DesiredWebCamHeight, bool bMirrorWebCamImage, bool bDrawSimpleWebCamVideo, bool bCaptureAudioFromComputer, bool bCaptureAudioFromMicrophone, class UTexture2D* CoverUpImage);
	static void StartWebCam(int32 DesiredWebCamWidth, int32 DesiredWebCamHeight, bool bMirrorWebCamImage, bool bDrawSimpleWebCamVideo);
	static void StopBroadcastingGame();
	static void StopWebCam();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameLiveStreamingFunctionLibrary">();
	}
	static class UGameLiveStreamingFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameLiveStreamingFunctionLibrary>();
	}
};
static_assert(alignof(UGameLiveStreamingFunctionLibrary) == 0x000004, "Wrong alignment on UGameLiveStreamingFunctionLibrary");
static_assert(sizeof(UGameLiveStreamingFunctionLibrary) == 0x00001C, "Wrong size on UGameLiveStreamingFunctionLibrary");

// Class GameLiveStreaming.QueryLiveStreamsCallbackProxy
// 0x0018 (0x0034 - 0x001C)
class UQueryLiveStreamsCallbackProxy final : public UOnlineBlueprintCallProxyBase
{
public:
	UMulticastDelegateProperty_                   OnQueriedLiveStreams;                              // 0x001C(0x000C)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_28[0xC];                                       // 0x0028(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UQueryLiveStreamsCallbackProxy* QueryLiveStreams(const class FString& GameName);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"QueryLiveStreamsCallbackProxy">();
	}
	static class UQueryLiveStreamsCallbackProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQueryLiveStreamsCallbackProxy>();
	}
};
static_assert(alignof(UQueryLiveStreamsCallbackProxy) == 0x000004, "Wrong alignment on UQueryLiveStreamsCallbackProxy");
static_assert(sizeof(UQueryLiveStreamsCallbackProxy) == 0x000034, "Wrong size on UQueryLiveStreamsCallbackProxy");
static_assert(offsetof(UQueryLiveStreamsCallbackProxy, OnQueriedLiveStreams) == 0x00001C, "Member 'UQueryLiveStreamsCallbackProxy::OnQueriedLiveStreams' has a wrong offset!");

}

#pragma pack(pop)
