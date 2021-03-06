/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_lmy_ffmpeg_Version */

#define NULL 0
#ifndef _Included_com_lmy_ffmpeg_Version
#define _Included_com_lmy_ffmpeg_Version
#ifdef __cplusplus
extern "C" {
#endif
/* ffmpeg版本信息
 * Class:     com_lmy_ffmpeg_Version
 * Method:    version
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_lmy_ffmpeg_Version_version
  (JNIEnv *, jobject);

/* ffmpeg支持的协议
 * Class:     com_lmy_ffmpeg_Version
 * Method:    protocol
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_lmy_ffmpeg_Version_protocol
  (JNIEnv *, jobject);

/* ffmpeg支持的封装格式
 * Class:     com_lmy_ffmpeg_Version
 * Method:    format
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_lmy_ffmpeg_Version_format
  (JNIEnv *, jobject);

/* ffmpeg支持的编解码器
 * Class:     com_lmy_ffmpeg_Version
 * Method:    codec
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_lmy_ffmpeg_Version_codec
  (JNIEnv *, jobject);

/* ffmpeg类库支持的滤镜
 * Class:     com_lmy_ffmpeg_Version
 * Method:    filter
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_lmy_ffmpeg_Version_filter
  (JNIEnv *, jobject);

/* ffmpeg的配置信息
 * Class:     com_lmy_ffmpeg_Version
 * Method:    configure
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_lmy_ffmpeg_Version_configure
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
