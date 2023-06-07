/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_fisco_bcos_sdk_jni_event_EventSubJniObj */

#ifndef _Included_org_fisco_bcos_sdk_jni_event_EventSubJniObj
#define _Included_org_fisco_bcos_sdk_jni_event_EventSubJniObj
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_fisco_bcos_sdk_jni_event_EventSubJniObj
 * Method:    start
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_fisco_bcos_sdk_jni_event_EventSubJniObj_start(JNIEnv*, jobject);

/*
 * Class:     org_fisco_bcos_sdk_jni_event_EventSubJniObj
 * Method:    stop
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_fisco_bcos_sdk_jni_event_EventSubJniObj_stop(JNIEnv*, jobject);

/*
 * Class:     org_fisco_bcos_sdk_jni_event_EventSubJniObj
 * Method:    subscribeEvent
 * Signature:
 * (Ljava/lang/String;Ljava/lang/String;Lorg/fisco/bcos/sdk/jni/event/EventSubCallback;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_fisco_bcos_sdk_jni_event_EventSubJniObj_subscribeEvent(
    JNIEnv*, jobject, jstring, jstring, jobject);

/*
 * Class:     org_fisco_bcos_sdk_jni_event_EventSubJniObj
 * Method:    unsubscribeEvent
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_fisco_bcos_sdk_jni_event_EventSubJniObj_unsubscribeEvent(
    JNIEnv*, jobject, jstring);

/*
 * Class:     org_fisco_bcos_sdk_jni_event_EventSubJniObj
 * Method:    getAllSubscribedEvents
 * Signature: ()Ljava/util/Set;
 */
JNIEXPORT jobject JNICALL Java_org_fisco_bcos_sdk_jni_event_EventSubJniObj_getAllSubscribedEvents(
    JNIEnv*, jobject);

#ifdef __cplusplus
}
#endif
#endif