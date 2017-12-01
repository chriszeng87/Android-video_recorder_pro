/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include "./audio_effect/libaudio_effect/audio_effect/audio_effect_adapter.h"
#include "common/live_audio_packet_queue.h"
#include "libvideo_consumer/video_packet_consumer.h"
#include <map>
/* Header for class com_changba_songstudio_Videostudio */

#ifndef _Included_com_changba_songstudio_Videostudio
#define _Included_com_changba_songstudio_Videostudio
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_changba_songstudio_Videostudio
 * Method:    startCommonVideoRecord
 * Signature: (Ljava/lang/String;IIIIIIILcom/changba/songstudio/audioeffect/AudioEffect;)I
 */
JNIEXPORT jint JNICALL Java_com_changba_songstudio_Videostudio_startCommonVideoRecord
  (JNIEnv *, jobject, jstring, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint,jint, jint);

/*
 * Class:     com_changba_songstudio_Videostudio
 * Method:    stopVideoRecord
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_changba_songstudio_Videostudio_stopVideoRecord
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif