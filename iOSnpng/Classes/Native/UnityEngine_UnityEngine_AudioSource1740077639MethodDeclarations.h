﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// UnityEngine.AudioClip
struct AudioClip_t794140988;

#include "codegen/il2cpp-codegen.h"

// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
extern "C"  AudioClip_t794140988 * AudioSource_get_clip_m2410835857 (AudioSource_t1740077639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayScheduled(System.Double)
extern "C"  void AudioSource_PlayScheduled_m2227094787 (AudioSource_t1740077639 * __this, double ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
extern "C"  bool AudioSource_get_isPlaying_m4213444423 (AudioSource_t1740077639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;