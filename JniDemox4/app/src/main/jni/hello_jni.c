#include <jni.h>
#include "ztbd_qf_com_jnidemox4_JniUtils.h"
/*
 * Class:     ztbd_qf_com_jnidemox4_JniUtils
 * Method:    getStr
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ztbd_qf_com_jnidemox4_JniUtils_getStr
        (JNIEnv *env, jclass jcs){
    return (*env)->NewStringUTF(env,"zhangtao ni zhen hao");
}