#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[3] = 
{
	{ 10925, 0,  4 } /*tableIndex: 0 */,
	{ 10925, 1,  7 } /*tableIndex: 1 */,
	{ 10925, 1,  8 } /*tableIndex: 2 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[2] = 
{
	"numSamples",
	"deviceID",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[39] = 
{
	{ 0, 0 } /* 0x06000001 System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean) */,
	{ 0, 0 } /* 0x06000002 System.Void UnityEngine.AudioSettings::InvokeOnAudioSystemShuttingDown() */,
	{ 0, 0 } /* 0x06000003 System.Void UnityEngine.AudioSettings::InvokeOnAudioSystemStartedUp() */,
	{ 0, 0 } /* 0x06000004 System.Boolean UnityEngine.AudioSettings::StartAudioOutput() */,
	{ 0, 0 } /* 0x06000005 System.Boolean UnityEngine.AudioSettings::StopAudioOutput() */,
	{ 0, 0 } /* 0x06000006 System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000007 System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean) */,
	{ 0, 0 } /* 0x06000008 System.Boolean UnityEngine.AudioSettings/Mobile::get_muteState() */,
	{ 0, 0 } /* 0x06000009 System.Void UnityEngine.AudioSettings/Mobile::set_muteState(System.Boolean) */,
	{ 0, 0 } /* 0x0600000A System.Boolean UnityEngine.AudioSettings/Mobile::get_stopAudioOutputOnMute() */,
	{ 0, 0 } /* 0x0600000B System.Void UnityEngine.AudioSettings/Mobile::InvokeOnMuteStateChanged(System.Boolean) */,
	{ 0, 0 } /* 0x0600000C System.Boolean UnityEngine.AudioSettings/Mobile::InvokeIsStopAudioOutputOnMuteEnabled() */,
	{ 0, 0 } /* 0x0600000D System.Void UnityEngine.AudioSettings/Mobile::StartAudioOutput() */,
	{ 0, 0 } /* 0x0600000E System.Void UnityEngine.AudioSettings/Mobile::StopAudioOutput() */,
	{ 0, 0 } /* 0x0600000F System.Void UnityEngine.AudioClip::.ctor() */,
	{ 0, 0 } /* 0x06000010 System.Boolean UnityEngine.AudioClip::GetData(UnityEngine.AudioClip,System.Single[],System.Int32,System.Int32) */,
	{ 0, 0 } /* 0x06000011 System.String UnityEngine.AudioClip::GetName() */,
	{ 0, 0 } /* 0x06000012 System.Int32 UnityEngine.AudioClip::get_samples() */,
	{ 0, 0 } /* 0x06000013 System.Int32 UnityEngine.AudioClip::get_channels() */,
	{ 0, 1 } /* 0x06000014 System.Boolean UnityEngine.AudioClip::GetData(System.Single[],System.Int32) */,
	{ 0, 0 } /* 0x06000015 System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[]) */,
	{ 0, 0 } /* 0x06000016 System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32) */,
	{ 0, 0 } /* 0x06000017 System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000018 System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[]) */,
	{ 0, 0 } /* 0x06000019 System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x0600001A System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32) */,
	{ 0, 0 } /* 0x0600001B System.Int32 UnityEngine.Microphone::GetMicrophoneDeviceIDFromName(System.String) */,
	{ 0, 0 } /* 0x0600001C UnityEngine.AudioClip UnityEngine.Microphone::StartRecord(System.Int32,System.Boolean,System.Single,System.Int32) */,
	{ 0, 0 } /* 0x0600001D System.Int32 UnityEngine.Microphone::GetRecordPosition(System.Int32) */,
	{ 1, 1 } /* 0x0600001E UnityEngine.AudioClip UnityEngine.Microphone::Start(System.String,System.Boolean,System.Int32,System.Int32) */,
	{ 2, 1 } /* 0x0600001F System.Int32 UnityEngine.Microphone::GetPosition(System.String) */,
	{ 0, 0 } /* 0x06000020 UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::GetHandle() */,
	{ 0, 0 } /* 0x06000021 System.Boolean UnityEngine.Audio.AudioClipPlayable::Equals(UnityEngine.Audio.AudioClipPlayable) */,
	{ 0, 0 } /* 0x06000022 UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::GetHandle() */,
	{ 0, 0 } /* 0x06000023 System.Boolean UnityEngine.Audio.AudioMixerPlayable::Equals(UnityEngine.Audio.AudioMixerPlayable) */,
	{ 0, 0 } /* 0x06000024 System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesAvailable(System.Int32) */,
	{ 0, 0 } /* 0x06000025 System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesOverflow(System.Int32) */,
	{ 0, 0 } /* 0x06000026 System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000027 System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::Invoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[198] = 
{
	{ 53045, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 53045, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 53045, 1, 343, 343, 9, 10, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 53045, 1, 344, 344, 13, 53, 1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 53045, 1, 344, 344, 0, 0, 10, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 53045, 1, 345, 345, 17, 63, 13, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 53045, 1, 345, 345, 17, 63, 19, kSequencePointKind_StepOut, 0, 6 } /* seqPointIndex: 6 */,
	{ 53045, 1, 346, 346, 9, 10, 25, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 53046, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 53046, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 53046, 1, 350, 350, 16, 51, 0, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 53046, 1, 350, 350, 16, 51, 11, kSequencePointKind_StepOut, 0, 11 } /* seqPointIndex: 11 */,
	{ 53047, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 53047, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 53047, 1, 354, 354, 16, 48, 0, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 53047, 1, 354, 354, 16, 48, 11, kSequencePointKind_StepOut, 0, 15 } /* seqPointIndex: 15 */,
	{ 53052, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 16 } /* seqPointIndex: 16 */,
	{ 53052, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 53052, 1, 379, 379, 17, 21, 0, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 53053, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 53053, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 53053, 1, 380, 380, 17, 29, 0, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 53054, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 53054, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 53054, 1, 387, 387, 17, 18, 0, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 53054, 1, 388, 388, 21, 51, 1, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 53054, 1, 389, 389, 17, 18, 9, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 53055, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 53055, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 53055, 1, 412, 412, 13, 14, 0, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 53055, 1, 413, 413, 17, 39, 1, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 53055, 1, 413, 413, 17, 39, 2, kSequencePointKind_StepOut, 0, 31 } /* seqPointIndex: 31 */,
	{ 53055, 1, 413, 413, 0, 0, 13, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 53055, 1, 414, 414, 17, 18, 16, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 53055, 1, 415, 415, 21, 38, 17, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 53055, 1, 415, 415, 21, 38, 18, kSequencePointKind_StepOut, 0, 35 } /* seqPointIndex: 35 */,
	{ 53055, 1, 416, 416, 21, 47, 24, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 53055, 1, 416, 416, 21, 47, 24, kSequencePointKind_StepOut, 0, 37 } /* seqPointIndex: 37 */,
	{ 53055, 1, 416, 416, 0, 0, 30, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 53055, 1, 417, 417, 21, 22, 33, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 53055, 1, 418, 418, 25, 39, 34, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 53055, 1, 418, 418, 25, 39, 34, kSequencePointKind_StepOut, 0, 41 } /* seqPointIndex: 41 */,
	{ 53055, 1, 418, 418, 0, 0, 40, kSequencePointKind_Normal, 0, 42 } /* seqPointIndex: 42 */,
	{ 53055, 1, 419, 419, 29, 47, 43, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 53055, 1, 419, 419, 29, 47, 43, kSequencePointKind_StepOut, 0, 44 } /* seqPointIndex: 44 */,
	{ 53055, 1, 419, 419, 0, 0, 49, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 53055, 1, 421, 421, 29, 48, 51, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 53055, 1, 421, 421, 29, 48, 51, kSequencePointKind_StepOut, 0, 47 } /* seqPointIndex: 47 */,
	{ 53055, 1, 422, 422, 21, 22, 57, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
	{ 53055, 1, 423, 423, 21, 52, 58, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 53055, 1, 423, 423, 0, 0, 67, kSequencePointKind_Normal, 0, 50 } /* seqPointIndex: 50 */,
	{ 53055, 1, 424, 424, 25, 50, 70, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 53055, 1, 424, 424, 25, 50, 76, kSequencePointKind_StepOut, 0, 52 } /* seqPointIndex: 52 */,
	{ 53055, 1, 425, 425, 17, 18, 82, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 53055, 1, 426, 426, 13, 14, 83, kSequencePointKind_Normal, 0, 54 } /* seqPointIndex: 54 */,
	{ 53056, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 53056, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 53056, 1, 430, 430, 13, 14, 0, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 53056, 1, 431, 431, 17, 46, 1, kSequencePointKind_Normal, 0, 58 } /* seqPointIndex: 58 */,
	{ 53056, 1, 431, 431, 17, 46, 1, kSequencePointKind_StepOut, 0, 59 } /* seqPointIndex: 59 */,
	{ 53056, 1, 432, 432, 13, 14, 9, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 53057, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 61 } /* seqPointIndex: 61 */,
	{ 53057, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 53057, 1, 435, 435, 13, 14, 0, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 53057, 1, 436, 436, 17, 50, 1, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 53057, 1, 436, 436, 17, 50, 1, kSequencePointKind_StepOut, 0, 65 } /* seqPointIndex: 65 */,
	{ 53057, 1, 437, 437, 13, 14, 7, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 53058, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 53058, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 68 } /* seqPointIndex: 68 */,
	{ 53058, 1, 440, 440, 13, 14, 0, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 53058, 1, 441, 441, 17, 49, 1, kSequencePointKind_Normal, 0, 70 } /* seqPointIndex: 70 */,
	{ 53058, 1, 441, 441, 17, 49, 1, kSequencePointKind_StepOut, 0, 71 } /* seqPointIndex: 71 */,
	{ 53058, 1, 442, 442, 13, 14, 7, kSequencePointKind_Normal, 0, 72 } /* seqPointIndex: 72 */,
	{ 53059, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 73 } /* seqPointIndex: 73 */,
	{ 53059, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 74 } /* seqPointIndex: 74 */,
	{ 53059, 1, 624, 624, 9, 68, 0, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 53059, 1, 628, 628, 9, 78, 7, kSequencePointKind_Normal, 0, 76 } /* seqPointIndex: 76 */,
	{ 53059, 1, 489, 489, 9, 28, 14, kSequencePointKind_Normal, 0, 77 } /* seqPointIndex: 77 */,
	{ 53059, 1, 489, 489, 9, 28, 15, kSequencePointKind_StepOut, 0, 78 } /* seqPointIndex: 78 */,
	{ 53059, 1, 489, 489, 29, 30, 21, kSequencePointKind_Normal, 0, 79 } /* seqPointIndex: 79 */,
	{ 53059, 1, 489, 489, 30, 31, 22, kSequencePointKind_Normal, 0, 80 } /* seqPointIndex: 80 */,
	{ 53064, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 81 } /* seqPointIndex: 81 */,
	{ 53064, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 53064, 1, 542, 542, 9, 10, 0, kSequencePointKind_Normal, 0, 83 } /* seqPointIndex: 83 */,
	{ 53064, 1, 543, 543, 13, 31, 1, kSequencePointKind_Normal, 0, 84 } /* seqPointIndex: 84 */,
	{ 53064, 1, 543, 543, 13, 31, 2, kSequencePointKind_StepOut, 0, 85 } /* seqPointIndex: 85 */,
	{ 53064, 1, 543, 543, 0, 0, 14, kSequencePointKind_Normal, 0, 86 } /* seqPointIndex: 86 */,
	{ 53064, 1, 544, 544, 13, 14, 17, kSequencePointKind_Normal, 0, 87 } /* seqPointIndex: 87 */,
	{ 53064, 1, 545, 545, 17, 101, 18, kSequencePointKind_Normal, 0, 88 } /* seqPointIndex: 88 */,
	{ 53064, 1, 545, 545, 17, 101, 24, kSequencePointKind_StepOut, 0, 89 } /* seqPointIndex: 89 */,
	{ 53064, 1, 545, 545, 17, 101, 34, kSequencePointKind_StepOut, 0, 90 } /* seqPointIndex: 90 */,
	{ 53064, 1, 545, 545, 17, 101, 39, kSequencePointKind_StepOut, 0, 91 } /* seqPointIndex: 91 */,
	{ 53064, 1, 546, 546, 17, 30, 45, kSequencePointKind_Normal, 0, 92 } /* seqPointIndex: 92 */,
	{ 53064, 1, 549, 549, 13, 76, 49, kSequencePointKind_Normal, 0, 93 } /* seqPointIndex: 93 */,
	{ 53064, 1, 549, 549, 13, 76, 59, kSequencePointKind_StepOut, 0, 94 } /* seqPointIndex: 94 */,
	{ 53064, 1, 550, 550, 13, 67, 66, kSequencePointKind_Normal, 0, 95 } /* seqPointIndex: 95 */,
	{ 53064, 1, 550, 550, 13, 67, 70, kSequencePointKind_StepOut, 0, 96 } /* seqPointIndex: 96 */,
	{ 53064, 1, 551, 551, 9, 10, 78, kSequencePointKind_Normal, 0, 97 } /* seqPointIndex: 97 */,
	{ 53065, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 98 } /* seqPointIndex: 98 */,
	{ 53065, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 99 } /* seqPointIndex: 99 */,
	{ 53065, 1, 632, 632, 9, 10, 0, kSequencePointKind_Normal, 0, 100 } /* seqPointIndex: 100 */,
	{ 53065, 1, 633, 633, 13, 45, 1, kSequencePointKind_Normal, 0, 101 } /* seqPointIndex: 101 */,
	{ 53065, 1, 633, 633, 0, 0, 11, kSequencePointKind_Normal, 0, 102 } /* seqPointIndex: 102 */,
	{ 53065, 1, 634, 634, 17, 43, 14, kSequencePointKind_Normal, 0, 103 } /* seqPointIndex: 103 */,
	{ 53065, 1, 634, 634, 17, 43, 21, kSequencePointKind_StepOut, 0, 104 } /* seqPointIndex: 104 */,
	{ 53065, 1, 635, 635, 9, 10, 27, kSequencePointKind_Normal, 0, 105 } /* seqPointIndex: 105 */,
	{ 53066, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 106 } /* seqPointIndex: 106 */,
	{ 53066, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 107 } /* seqPointIndex: 107 */,
	{ 53066, 1, 639, 639, 9, 10, 0, kSequencePointKind_Normal, 0, 108 } /* seqPointIndex: 108 */,
	{ 53066, 1, 640, 640, 13, 50, 1, kSequencePointKind_Normal, 0, 109 } /* seqPointIndex: 109 */,
	{ 53066, 1, 640, 640, 0, 0, 11, kSequencePointKind_Normal, 0, 110 } /* seqPointIndex: 110 */,
	{ 53066, 1, 641, 641, 17, 52, 14, kSequencePointKind_Normal, 0, 111 } /* seqPointIndex: 111 */,
	{ 53066, 1, 641, 641, 17, 52, 21, kSequencePointKind_StepOut, 0, 112 } /* seqPointIndex: 112 */,
	{ 53066, 1, 642, 642, 9, 10, 27, kSequencePointKind_Normal, 0, 113 } /* seqPointIndex: 113 */,
	{ 53074, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 114 } /* seqPointIndex: 114 */,
	{ 53074, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 115 } /* seqPointIndex: 115 */,
	{ 53074, 1, 1300, 1300, 9, 10, 0, kSequencePointKind_Normal, 0, 116 } /* seqPointIndex: 116 */,
	{ 53074, 1, 1301, 1301, 13, 70, 1, kSequencePointKind_Normal, 0, 117 } /* seqPointIndex: 117 */,
	{ 53074, 1, 1301, 1301, 13, 70, 2, kSequencePointKind_StepOut, 0, 118 } /* seqPointIndex: 118 */,
	{ 53074, 1, 1303, 1303, 13, 32, 8, kSequencePointKind_Normal, 0, 119 } /* seqPointIndex: 119 */,
	{ 53074, 1, 1303, 1303, 0, 0, 13, kSequencePointKind_Normal, 0, 120 } /* seqPointIndex: 120 */,
	{ 53074, 1, 1304, 1304, 17, 105, 16, kSequencePointKind_Normal, 0, 121 } /* seqPointIndex: 121 */,
	{ 53074, 1, 1304, 1304, 17, 105, 22, kSequencePointKind_StepOut, 0, 122 } /* seqPointIndex: 122 */,
	{ 53074, 1, 1304, 1304, 17, 105, 27, kSequencePointKind_StepOut, 0, 123 } /* seqPointIndex: 123 */,
	{ 53074, 1, 1306, 1306, 13, 32, 33, kSequencePointKind_Normal, 0, 124 } /* seqPointIndex: 124 */,
	{ 53074, 1, 1306, 1306, 0, 0, 41, kSequencePointKind_Normal, 0, 125 } /* seqPointIndex: 125 */,
	{ 53074, 1, 1307, 1307, 17, 135, 44, kSequencePointKind_Normal, 0, 126 } /* seqPointIndex: 126 */,
	{ 53074, 1, 1307, 1307, 17, 135, 51, kSequencePointKind_StepOut, 0, 127 } /* seqPointIndex: 127 */,
	{ 53074, 1, 1307, 1307, 17, 135, 61, kSequencePointKind_StepOut, 0, 128 } /* seqPointIndex: 128 */,
	{ 53074, 1, 1307, 1307, 17, 135, 66, kSequencePointKind_StepOut, 0, 129 } /* seqPointIndex: 129 */,
	{ 53074, 1, 1309, 1309, 13, 37, 72, kSequencePointKind_Normal, 0, 130 } /* seqPointIndex: 130 */,
	{ 53074, 1, 1309, 1309, 0, 0, 81, kSequencePointKind_Normal, 0, 131 } /* seqPointIndex: 131 */,
	{ 53074, 1, 1310, 1310, 17, 128, 84, kSequencePointKind_Normal, 0, 132 } /* seqPointIndex: 132 */,
	{ 53074, 1, 1310, 1310, 17, 128, 91, kSequencePointKind_StepOut, 0, 133 } /* seqPointIndex: 133 */,
	{ 53074, 1, 1310, 1310, 17, 128, 101, kSequencePointKind_StepOut, 0, 134 } /* seqPointIndex: 134 */,
	{ 53074, 1, 1310, 1310, 17, 128, 106, kSequencePointKind_StepOut, 0, 135 } /* seqPointIndex: 135 */,
	{ 53074, 1, 1312, 1312, 13, 32, 112, kSequencePointKind_Normal, 0, 136 } /* seqPointIndex: 136 */,
	{ 53074, 1, 1312, 1312, 0, 0, 121, kSequencePointKind_Normal, 0, 137 } /* seqPointIndex: 137 */,
	{ 53074, 1, 1313, 1313, 17, 125, 125, kSequencePointKind_Normal, 0, 138 } /* seqPointIndex: 138 */,
	{ 53074, 1, 1313, 1313, 17, 125, 132, kSequencePointKind_StepOut, 0, 139 } /* seqPointIndex: 139 */,
	{ 53074, 1, 1313, 1313, 17, 125, 142, kSequencePointKind_StepOut, 0, 140 } /* seqPointIndex: 140 */,
	{ 53074, 1, 1313, 1313, 17, 125, 147, kSequencePointKind_StepOut, 0, 141 } /* seqPointIndex: 141 */,
	{ 53074, 1, 1315, 1315, 13, 70, 153, kSequencePointKind_Normal, 0, 142 } /* seqPointIndex: 142 */,
	{ 53074, 1, 1315, 1315, 13, 70, 158, kSequencePointKind_StepOut, 0, 143 } /* seqPointIndex: 143 */,
	{ 53074, 1, 1316, 1316, 9, 10, 167, kSequencePointKind_Normal, 0, 144 } /* seqPointIndex: 144 */,
	{ 53075, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 145 } /* seqPointIndex: 145 */,
	{ 53075, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 146 } /* seqPointIndex: 146 */,
	{ 53075, 1, 1353, 1353, 9, 10, 0, kSequencePointKind_Normal, 0, 147 } /* seqPointIndex: 147 */,
	{ 53075, 1, 1354, 1354, 13, 70, 1, kSequencePointKind_Normal, 0, 148 } /* seqPointIndex: 148 */,
	{ 53075, 1, 1354, 1354, 13, 70, 2, kSequencePointKind_StepOut, 0, 149 } /* seqPointIndex: 149 */,
	{ 53075, 1, 1355, 1355, 13, 32, 8, kSequencePointKind_Normal, 0, 150 } /* seqPointIndex: 150 */,
	{ 53075, 1, 1355, 1355, 0, 0, 13, kSequencePointKind_Normal, 0, 151 } /* seqPointIndex: 151 */,
	{ 53075, 1, 1356, 1356, 17, 26, 16, kSequencePointKind_Normal, 0, 152 } /* seqPointIndex: 152 */,
	{ 53075, 1, 1358, 1358, 13, 48, 20, kSequencePointKind_Normal, 0, 153 } /* seqPointIndex: 153 */,
	{ 53075, 1, 1358, 1358, 13, 48, 21, kSequencePointKind_StepOut, 0, 154 } /* seqPointIndex: 154 */,
	{ 53075, 1, 1359, 1359, 9, 10, 29, kSequencePointKind_Normal, 0, 155 } /* seqPointIndex: 155 */,
	{ 53076, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 156 } /* seqPointIndex: 156 */,
	{ 53076, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 157 } /* seqPointIndex: 157 */,
	{ 53076, 2, 49, 49, 9, 10, 0, kSequencePointKind_Normal, 0, 158 } /* seqPointIndex: 158 */,
	{ 53076, 2, 50, 50, 13, 29, 1, kSequencePointKind_Normal, 0, 159 } /* seqPointIndex: 159 */,
	{ 53076, 2, 51, 51, 9, 10, 10, kSequencePointKind_Normal, 0, 160 } /* seqPointIndex: 160 */,
	{ 53077, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 161 } /* seqPointIndex: 161 */,
	{ 53077, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 162 } /* seqPointIndex: 162 */,
	{ 53077, 2, 64, 64, 9, 10, 0, kSequencePointKind_Normal, 0, 163 } /* seqPointIndex: 163 */,
	{ 53077, 2, 65, 65, 13, 53, 1, kSequencePointKind_Normal, 0, 164 } /* seqPointIndex: 164 */,
	{ 53077, 2, 65, 65, 13, 53, 2, kSequencePointKind_StepOut, 0, 165 } /* seqPointIndex: 165 */,
	{ 53077, 2, 65, 65, 13, 53, 9, kSequencePointKind_StepOut, 0, 166 } /* seqPointIndex: 166 */,
	{ 53077, 2, 65, 65, 13, 53, 14, kSequencePointKind_StepOut, 0, 167 } /* seqPointIndex: 167 */,
	{ 53077, 2, 66, 66, 9, 10, 22, kSequencePointKind_Normal, 0, 168 } /* seqPointIndex: 168 */,
	{ 53078, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 169 } /* seqPointIndex: 169 */,
	{ 53078, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 170 } /* seqPointIndex: 170 */,
	{ 53078, 3, 47, 47, 9, 10, 0, kSequencePointKind_Normal, 0, 171 } /* seqPointIndex: 171 */,
	{ 53078, 3, 48, 48, 13, 29, 1, kSequencePointKind_Normal, 0, 172 } /* seqPointIndex: 172 */,
	{ 53078, 3, 49, 49, 9, 10, 10, kSequencePointKind_Normal, 0, 173 } /* seqPointIndex: 173 */,
	{ 53079, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 174 } /* seqPointIndex: 174 */,
	{ 53079, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 175 } /* seqPointIndex: 175 */,
	{ 53079, 3, 62, 62, 9, 10, 0, kSequencePointKind_Normal, 0, 176 } /* seqPointIndex: 176 */,
	{ 53079, 3, 63, 63, 13, 53, 1, kSequencePointKind_Normal, 0, 177 } /* seqPointIndex: 177 */,
	{ 53079, 3, 63, 63, 13, 53, 2, kSequencePointKind_StepOut, 0, 178 } /* seqPointIndex: 178 */,
	{ 53079, 3, 63, 63, 13, 53, 9, kSequencePointKind_StepOut, 0, 179 } /* seqPointIndex: 179 */,
	{ 53079, 3, 63, 63, 13, 53, 14, kSequencePointKind_StepOut, 0, 180 } /* seqPointIndex: 180 */,
	{ 53079, 3, 64, 64, 9, 10, 22, kSequencePointKind_Normal, 0, 181 } /* seqPointIndex: 181 */,
	{ 53080, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 182 } /* seqPointIndex: 182 */,
	{ 53080, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 183 } /* seqPointIndex: 183 */,
	{ 53080, 4, 177, 177, 9, 10, 0, kSequencePointKind_Normal, 0, 184 } /* seqPointIndex: 184 */,
	{ 53080, 4, 178, 178, 13, 47, 1, kSequencePointKind_Normal, 0, 185 } /* seqPointIndex: 185 */,
	{ 53080, 4, 178, 178, 0, 0, 11, kSequencePointKind_Normal, 0, 186 } /* seqPointIndex: 186 */,
	{ 53080, 4, 180, 180, 17, 69, 14, kSequencePointKind_Normal, 0, 187 } /* seqPointIndex: 187 */,
	{ 53080, 4, 180, 180, 17, 69, 22, kSequencePointKind_StepOut, 0, 188 } /* seqPointIndex: 188 */,
	{ 53080, 4, 181, 181, 9, 10, 28, kSequencePointKind_Normal, 0, 189 } /* seqPointIndex: 189 */,
	{ 53081, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 190 } /* seqPointIndex: 190 */,
	{ 53081, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 191 } /* seqPointIndex: 191 */,
	{ 53081, 4, 185, 185, 9, 10, 0, kSequencePointKind_Normal, 0, 192 } /* seqPointIndex: 192 */,
	{ 53081, 4, 186, 186, 13, 46, 1, kSequencePointKind_Normal, 0, 193 } /* seqPointIndex: 193 */,
	{ 53081, 4, 186, 186, 0, 0, 11, kSequencePointKind_Normal, 0, 194 } /* seqPointIndex: 194 */,
	{ 53081, 4, 187, 187, 17, 75, 14, kSequencePointKind_Normal, 0, 195 } /* seqPointIndex: 195 */,
	{ 53081, 4, 187, 187, 17, 75, 22, kSequencePointKind_StepOut, 0, 196 } /* seqPointIndex: 196 */,
	{ 53081, 4, 188, 188, 9, 10, 28, kSequencePointKind_Normal, 0, 197 } /* seqPointIndex: 197 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "\\home\\bokken\\build\\output\\unity\\unity\\Modules\\Audio\\Public\\ScriptBindings\\Audio.bindings.cs", { 186, 190, 129, 91, 137, 140, 111, 230, 114, 253, 155, 1, 230, 243, 216, 168} }, //1 
{ "\\home\\bokken\\build\\output\\unity\\unity\\Modules\\Audio\\Public\\ScriptBindings\\AudioClipPlayable.bindings.cs", { 117, 58, 219, 81, 174, 32, 141, 165, 250, 138, 140, 83, 41, 27, 0, 60} }, //2 
{ "\\home\\bokken\\build\\output\\unity\\unity\\Modules\\Audio\\Public\\ScriptBindings\\AudioMixerPlayable.bindings.cs", { 61, 101, 161, 191, 246, 243, 230, 247, 173, 244, 46, 184, 65, 58, 4, 90} }, //3 
{ "\\home\\bokken\\build\\output\\unity\\unity\\Modules\\Audio\\Public\\ScriptBindings\\AudioSampleProvider.bindings.cs", { 47, 120, 50, 45, 60, 26, 245, 52, 137, 63, 13, 94, 178, 230, 94, 160} }, //4 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[7] = 
{
	{ 6989, 1 },
	{ 6988, 1 },
	{ 6992, 1 },
	{ 6995, 1 },
	{ 6997, 2 },
	{ 6998, 3 },
	{ 7000, 4 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[15] = 
{
	{ 0, 26 },
	{ 0, 11 },
	{ 0, 84 },
	{ 0, 11 },
	{ 0, 80 },
	{ 0, 28 },
	{ 0, 28 },
	{ 0, 170 },
	{ 0, 31 },
	{ 0, 12 },
	{ 0, 24 },
	{ 0, 12 },
	{ 0, 24 },
	{ 0, 29 },
	{ 0, 29 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[39] = 
{
	{ 26, 0, 1 } /* System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings::InvokeOnAudioSystemShuttingDown() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings::InvokeOnAudioSystemStartedUp() */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.AudioSettings::StartAudioOutput() */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.AudioSettings::StopAudioOutput() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.AudioSettings/Mobile::get_muteState() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/Mobile::set_muteState(System.Boolean) */,
	{ 11, 1, 1 } /* System.Boolean UnityEngine.AudioSettings/Mobile::get_stopAudioOutputOnMute() */,
	{ 84, 2, 1 } /* System.Void UnityEngine.AudioSettings/Mobile::InvokeOnMuteStateChanged(System.Boolean) */,
	{ 11, 3, 1 } /* System.Boolean UnityEngine.AudioSettings/Mobile::InvokeIsStopAudioOutputOnMuteEnabled() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/Mobile::StartAudioOutput() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/Mobile::StopAudioOutput() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip::.ctor() */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.AudioClip::GetData(UnityEngine.AudioClip,System.Single[],System.Int32,System.Int32) */,
	{ 0, 0, 0 } /* System.String UnityEngine.AudioClip::GetName() */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.AudioClip::get_samples() */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.AudioClip::get_channels() */,
	{ 80, 4, 1 } /* System.Boolean UnityEngine.AudioClip::GetData(System.Single[],System.Int32) */,
	{ 28, 5, 1 } /* System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[]) */,
	{ 28, 6, 1 } /* System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[]) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32) */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.Microphone::GetMicrophoneDeviceIDFromName(System.String) */,
	{ 0, 0, 0 } /* UnityEngine.AudioClip UnityEngine.Microphone::StartRecord(System.Int32,System.Boolean,System.Single,System.Int32) */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.Microphone::GetRecordPosition(System.Int32) */,
	{ 170, 7, 1 } /* UnityEngine.AudioClip UnityEngine.Microphone::Start(System.String,System.Boolean,System.Int32,System.Int32) */,
	{ 31, 8, 1 } /* System.Int32 UnityEngine.Microphone::GetPosition(System.String) */,
	{ 12, 9, 1 } /* UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::GetHandle() */,
	{ 24, 10, 1 } /* System.Boolean UnityEngine.Audio.AudioClipPlayable::Equals(UnityEngine.Audio.AudioClipPlayable) */,
	{ 12, 11, 1 } /* UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::GetHandle() */,
	{ 24, 12, 1 } /* System.Boolean UnityEngine.Audio.AudioMixerPlayable::Equals(UnityEngine.Audio.AudioMixerPlayable) */,
	{ 29, 13, 1 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesAvailable(System.Int32) */,
	{ 29, 14, 1 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesOverflow(System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::Invoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_AudioModule;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_AudioModule = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	198,
	(Il2CppSequencePoint*)g_sequencePointsUnityEngine_AudioModule,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	7,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
