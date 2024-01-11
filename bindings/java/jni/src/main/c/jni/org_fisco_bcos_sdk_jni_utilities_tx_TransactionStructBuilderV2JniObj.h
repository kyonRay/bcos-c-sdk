/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_fisco_bcos_sdk_jni_utilities_tx_TransactionStructBuilderV2JniObj */

#ifndef _Included_org_fisco_bcos_sdk_jni_utilities_tx_TransactionStructBuilderV2JniObj
#define _Included_org_fisco_bcos_sdk_jni_utilities_tx_TransactionStructBuilderV2JniObj
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_fisco_bcos_sdk_jni_utilities_tx_TransactionStructBuilderV2JniObj
 * Method:    encodeTransactionDataStructV2
 * Signature: (Lorg/fisco/bcos/sdk/jni/utilities/tx/TransactionDataV2;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_fisco_bcos_sdk_jni_utilities_tx_TransactionStructBuilderV2JniObj_encodeTransactionDataStructV2
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_fisco_bcos_sdk_jni_utilities_tx_TransactionStructBuilderV2JniObj
 * Method:    encodeTransactionDataStructToJsonV2
 * Signature: (Lorg/fisco/bcos/sdk/jni/utilities/tx/TransactionDataV2;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_fisco_bcos_sdk_jni_utilities_tx_TransactionStructBuilderV2JniObj_encodeTransactionDataStructToJsonV2
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_fisco_bcos_sdk_jni_utilities_tx_TransactionStructBuilderV2JniObj
 * Method:    decodeTransactionDataStructV2
 * Signature: (Ljava/lang/String;)Lorg/fisco/bcos/sdk/jni/utilities/tx/TransactionDataV2;
 */
JNIEXPORT jobject JNICALL Java_org_fisco_bcos_sdk_jni_utilities_tx_TransactionStructBuilderV2JniObj_decodeTransactionDataStructV2
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_fisco_bcos_sdk_jni_utilities_tx_TransactionStructBuilderV2JniObj
 * Method:    calcTransactionDataStructHashV2
 * Signature: (ILorg/fisco/bcos/sdk/jni/utilities/tx/TransactionDataV2;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_fisco_bcos_sdk_jni_utilities_tx_TransactionStructBuilderV2JniObj_calcTransactionDataStructHashV2
  (JNIEnv *, jclass, jint, jobject);

/*
 * Class:     org_fisco_bcos_sdk_jni_utilities_tx_TransactionStructBuilderV2JniObj
 * Method:    createEncodedTransactionV2
 * Signature: (Lorg/fisco/bcos/sdk/jni/utilities/tx/TransactionDataV2;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_fisco_bcos_sdk_jni_utilities_tx_TransactionStructBuilderV2JniObj_createEncodedTransactionV2
  (JNIEnv *, jclass, jobject, jstring, jstring, jint, jstring);

/*
 * Class:     org_fisco_bcos_sdk_jni_utilities_tx_TransactionStructBuilderV2JniObj
 * Method:    encodeTransactionStructV2
 * Signature: (Lorg/fisco/bcos/sdk/jni/utilities/tx/TransactionV2;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_fisco_bcos_sdk_jni_utilities_tx_TransactionStructBuilderV2JniObj_encodeTransactionStructV2
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_fisco_bcos_sdk_jni_utilities_tx_TransactionStructBuilderV2JniObj
 * Method:    encodeTransactionStructToJsonV2
 * Signature: (Lorg/fisco/bcos/sdk/jni/utilities/tx/TransactionV2;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_fisco_bcos_sdk_jni_utilities_tx_TransactionStructBuilderV2JniObj_encodeTransactionStructToJsonV2
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_fisco_bcos_sdk_jni_utilities_tx_TransactionStructBuilderV2JniObj
 * Method:    decodeTransactionStructV2
 * Signature: (Ljava/lang/String;)Lorg/fisco/bcos/sdk/jni/utilities/tx/TransactionV2;
 */
JNIEXPORT jobject JNICALL Java_org_fisco_bcos_sdk_jni_utilities_tx_TransactionStructBuilderV2JniObj_decodeTransactionStructV2
  (JNIEnv *, jclass, jstring);

#ifdef __cplusplus
}
#endif
#endif