/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class cn_vimfung_luascriptcore_LuaNativeUtil */

#ifndef _Included_cn_vimfung_luascriptcore_LuaNativeUtil
#define _Included_cn_vimfung_luascriptcore_LuaNativeUtil

#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     cn_vimfung_luascriptcore_LuaNativeUtil
 * Method:    createContext
 * Signature: ()Lcn/vimfung/luascriptcore/LuaContext;
 */
JNIEXPORT jobject JNICALL Java_cn_vimfung_luascriptcore_LuaNativeUtil_createContext
  (JNIEnv *, jclass);

/*
 * Class:     cn_vimfung_luascriptcore_LuaNativeUtil
 * Method:    addSearchPath
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_cn_vimfung_luascriptcore_LuaNativeUtil_addSearchPath
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     cn_vimfung_luascriptcore_LuaNativeUtil
 * Method:    setGlobal
 * Signature: (ILjava/lang/String;Lcn/vimfung/luascriptcore/LuaValue;)V
 */
JNIEXPORT void JNICALL Java_cn_vimfung_luascriptcore_LuaNativeUtil_setGlobal
        (JNIEnv *, jclass, jint, jstring, jobject);

/*
 * Class:     cn_vimfung_luascriptcore_LuaNativeUtil
 * Method:    getGlobal
 * Signature: (ILjava/lang/String;)Lcn/vimfung/luascriptcore/LuaValue;
 */
JNIEXPORT jobject JNICALL Java_cn_vimfung_luascriptcore_LuaNativeUtil_getGlobal
        (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     cn_vimfung_luascriptcore_LuaNativeUtil
 * Method:    catchException
 * Signature: (Lcn/vimfung/luascriptcore/LuaContext;Z)V
 */
JNIEXPORT void JNICALL Java_cn_vimfung_luascriptcore_LuaNativeUtil_catchException
        (JNIEnv *, jclass, jobject, jboolean);

/*
 * Class:     cn_vimfung_luascriptcore_LuaNativeUtil
 * Method:    evalScript
 * Signature: (ILjava/lang/String;)Lcn/vimfung/luascriptcore/LuaValue;
 */
JNIEXPORT jobject JNICALL Java_cn_vimfung_luascriptcore_LuaNativeUtil_evalScript
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     cn_vimfung_luascriptcore_LuaNativeUtil
 * Method:    evalScriptFromFile
 * Signature: (ILjava/lang/String;)Lcn/vimfung/luascriptcore/LuaValue;
 */
JNIEXPORT jobject JNICALL Java_cn_vimfung_luascriptcore_LuaNativeUtil_evalScriptFromFile
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     cn_vimfung_luascriptcore_LuaNativeUtil
 * Method:    callMethod
 * Signature: (ILjava/lang/String;[Lcn/vimfung/luascriptcore/LuaValue;)Lcn/vimfung/luascriptcore/LuaValue;
 */
JNIEXPORT jobject JNICALL Java_cn_vimfung_luascriptcore_LuaNativeUtil_callMethod
  (JNIEnv *, jclass, jint, jstring, jobjectArray);

/*
 * Class:     cn_vimfung_luascriptcore_LuaNativeUtil
 * Method:    registerMethod
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_cn_vimfung_luascriptcore_LuaNativeUtil_registerMethod
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     cn_vimfung_luascriptcore_LuaNativeUtil
 * Method:    releaseNativeObject
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_cn_vimfung_luascriptcore_LuaNativeUtil_releaseNativeObject
  (JNIEnv *, jclass, jint);

/*
 * Class:     cn_vimfung_luascriptcore_LuaNativeUtil
 * Method:    invokeFunction
 * Signature: (Lcn/vimfung/luascriptcore/LuaContext;Lcn/vimfung/luascriptcore/LuaFunction;[Lcn/vimfung/luascriptcore/LuaValue;)Lcn/vimfung/luascriptcore/LuaValue;
 */
JNIEXPORT jobject JNICALL Java_cn_vimfung_luascriptcore_LuaNativeUtil_invokeFunction
  (JNIEnv *, jclass, jobject, jobject, jobjectArray);

JNIEXPORT void JNICALL Java_cn_vimfung_luascriptcore_LuaNativeUtil_retainValue
        (JNIEnv *, jclass, jobject, jobject);

JNIEXPORT void JNICALL Java_cn_vimfung_luascriptcore_LuaNativeUtil_releaseValue
        (JNIEnv *, jclass, jobject, jobject);

JNIEXPORT jboolean JNICALL Java_cn_vimfung_luascriptcore_LuaNativeUtil_registerType
        (JNIEnv *, jclass, jobject, jstring, jstring, jstring, jclass, jobjectArray, jobjectArray, jobjectArray);

JNIEXPORT void JNICALL Java_cn_vimfung_luascriptcore_LuaNativeUtil_raiseException(JNIEnv *, jclass, jobject, jstring);

JNIEXPORT void JNICALL Java_cn_vimfung_luascriptcore_LuaNativeUtil_runThread(JNIEnv *, jclass, jobject, jobject, jobjectArray);

#ifdef __cplusplus
}
#endif
#endif
