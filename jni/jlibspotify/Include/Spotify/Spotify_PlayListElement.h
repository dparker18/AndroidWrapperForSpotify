/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class Spotify_PlayListElement */

#ifndef _Included_Spotify_PlayListElement
#define _Included_Spotify_PlayListElement
#ifdef __cplusplus
extern "C" {
#endif
#undef Spotify_PlayListElement_PLAYLIST
#define Spotify_PlayListElement_PLAYLIST 0L
#undef Spotify_PlayListElement_PLAYLIST_FOLDER
#define Spotify_PlayListElement_PLAYLIST_FOLDER 1L
#undef Spotify_PlayListElement_PLAYLIST_CONTAINER
#define Spotify_PlayListElement_PLAYLIST_CONTAINER 2L
#undef Spotify_PlayListElement_TRACK
#define Spotify_PlayListElement_TRACK 3L
/*
 * Class:     Spotify_PlayListElement
 * Method:    GetParent
 * Signature: ()LSpotify/PlayListElement;
 */
JNIEXPORT jobject JNICALL Java_Spotify_PlayListElement_GetParent
  (JNIEnv *, jobject);

/*
 * Class:     Spotify_PlayListElement
 * Method:    HasChildren
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_Spotify_PlayListElement_HasChildren
  (JNIEnv *, jobject);

/*
 * Class:     Spotify_PlayListElement
 * Method:    GetNumChildren
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_Spotify_PlayListElement_GetNumChildren
  (JNIEnv *, jobject);

/*
 * Class:     Spotify_PlayListElement
 * Method:    GetChild
 * Signature: (I)LSpotify/PlayListElement;
 */
JNIEXPORT jobject JNICALL Java_Spotify_PlayListElement_GetChild
  (JNIEnv *, jobject, jint);

/*
 * Class:     Spotify_PlayListElement
 * Method:    IsLoading
 * Signature: (Z)Z
 */
JNIEXPORT jboolean JNICALL Java_Spotify_PlayListElement_IsLoading
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     Spotify_PlayListElement
 * Method:    GetName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_Spotify_PlayListElement_GetName
  (JNIEnv *, jobject);

/*
 * Class:     Spotify_PlayListElement
 * Method:    GetType
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_Spotify_PlayListElement_GetType
  (JNIEnv *, jobject);

/*
 * Class:     Spotify_PlayListElement
 * Method:    Release
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_Spotify_PlayListElement_Release
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
