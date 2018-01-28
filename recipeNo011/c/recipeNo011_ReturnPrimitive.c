#include "recipeNo011_ReturnPrimitive.h"

/*
 * Class:     recipeNo011_ReturnPrimitive
 * Method:    getBoolean
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL
Java_recipeNo011_ReturnPrimitive_getBoolean(JNIEnv *env, jclass obj) {
  jboolean result = JNI_TRUE;
  return result;
}

/*
 * Class:     recipeNo011_ReturnPrimitive
 * Method:    getByte
 * Signature: ()B
 */
JNIEXPORT jbyte JNICALL
Java_recipeNo011_ReturnPrimitive_getByte(JNIEnv *env, jclass obj) {
  jbyte result = 0xff;
  return result;
}

/*
 * Class:     recipeNo011_ReturnPrimitive
 * Method:    getChar
 * Signature: ()C
 */
JNIEXPORT jchar JNICALL
Java_recipeNo011_ReturnPrimitive_getChar(JNIEnv *env, jclass obj) {
  jchar result = 'a';
  return result;
}

/*
 * Class:     recipeNo011_ReturnPrimitive
 * Method:    getShort
 * Signature: ()S
 */
JNIEXPORT jshort JNICALL
Java_recipeNo011_ReturnPrimitive_getShort(JNIEnv *env, jclass obj) {
  jshort result = 0xffff;
  return result;
}

/*
 * Class:     recipeNo011_ReturnPrimitive
 * Method:    getInt
 * Signature: ()I
 */
JNIEXPORT jint JNICALL
Java_recipeNo011_ReturnPrimitive_getInt(JNIEnv *env, jclass obj) {
  jint result = 0xffffffff;
  return result;
}

/*
 * Class:     recipeNo011_ReturnPrimitive
 * Method:    getLong
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL
Java_recipeNo011_ReturnPrimitive_getLong(JNIEnv *env, jclass obj) {
  jlong result = 0xffffffffffffffff;
  return result;
}

/*
 * Class:     recipeNo011_ReturnPrimitive
 * Method:    getFloat
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL
Java_recipeNo011_ReturnPrimitive_getFloat(JNIEnv *env, jclass obj) {
  jfloat result = 1.1;
  return result;
}

/*
 * Class:     recipeNo011_ReturnPrimitive
 * Method:    getDouble
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL
Java_recipeNo011_ReturnPrimitive_getDouble(JNIEnv *env, jclass obj) {
  jdouble result = 1.1;
  return result;
}
