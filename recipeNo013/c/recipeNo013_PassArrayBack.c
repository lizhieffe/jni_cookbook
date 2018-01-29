#include "recipeNo013_PassArrayBack.h"

/*
 * Class:     recipeNo013_PassArrayBackBack
 * Method:    passBooleanArray
 * Signature: ([Z)V
 */
JNIEXPORT void JNICALL
Java_recipeNo013_PassArrayBack_passBooleanArray(JNIEnv *env, jclass obj, jbooleanArray array) {
  jsize len = (*env)->GetArrayLength(env, array);

  /* get the body of array; it will be referecende by C pointer */
  jboolean *body = (*env)->GetBooleanArrayElements(env, array, 0);

  for (int i = 0; i < len; i++) {
    printf("Boolean value: %s\n", body[i] == JNI_TRUE ? "true" : "false");
    // Update value.
    body[i] = 0;
  }

  // Release body when you decide it is no longer needed.
  (*env)->ReleaseBooleanArrayElements(env, array, body, 0);
}

/*
 * Class:     recipeNo013_PassArrayBack
 * Method:    passByteArray
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL
Java_recipeNo013_PassArrayBack_passByteArray(JNIEnv *env, jclass obj, jbyteArray array) {
  // get size of array
  jsize len = (*env)->GetArrayLength(env, array);

  // get the body of array; it will be referenced by C pointer.
  jbyte *body = (*env)->GetByteArrayElements(env, array, 0);

  // Do some stuff.
  for (int i = 0; i < len; i++) {
    printf("Byte value: %d\n", body[i]);
    body[i] = 0;
  }

  // Release body when you decide it is no longer needed.
  (*env)->ReleaseByteArrayElements(env, array, body, 0);
}

/*
 * Class:     recipeNo013_PassArrayBack
 * Method:    passCharArray
 * Signature: ([C)V
 */
JNIEXPORT void JNICALL
Java_recipeNo013_PassArrayBack_passCharArray(JNIEnv *env, jclass obj, jcharArray array) {
  // get size of array
  jsize len = (*env)->GetArrayLength(env, array);

  // get the body of array; it will be referenced by C pointer.
  jchar *body = (*env)->GetCharArrayElements(env, array, 0);

  // Do some stuff.
  for (int i = 0; i < len; i++) {
    printf("Char value: %c\n", body[i]);
    body[i] = 0;
  }

  // Release body when you decide it is no longer needed.
  (*env)->ReleaseCharArrayElements(env, array, body, 0);
}

/*
 * Class:     recipeNo013_PassArrayBack
 * Method:    passShortArray
 * Signature: ([S)V
 */
JNIEXPORT void JNICALL Java_recipeNo013_PassArrayBack_passShortArray
  (JNIEnv *, jclass, jshortArray);
JNIEXPORT void JNICALL
Java_recipeNo013_PassArrayBack_passShortArray(JNIEnv *env, jclass obj, jshortArray array) {
  // get size of array
  jsize len = (*env)->GetArrayLength(env, array);

  // get the body of array; it will be referenced by C pointer.
  jshort *body = (*env)->GetShortArrayElements(env, array, 0);

  // Do some stuff.
  for (int i = 0; i < len; i++) {
    printf("Short value: %hd\n", body[i]);
    body[i] = 0;
  }

  // Release body when you decide it is no longer needed.
  (*env)->ReleaseShortArrayElements(env, array, body, 0);
}

/*
 * Class:     recipeNo013_PassArrayBack
 * Method:    passIntArray
 * Signature: ([I)V
 */
JNIEXPORT void JNICALL
Java_recipeNo013_PassArrayBack_passIntArray(JNIEnv *env, jclass obj, jintArray array) {
  // get size of array
  jsize len = (*env)->GetArrayLength(env, array);

  // get the body of array; it will be referenced by C pointer.
  jint *body = (*env)->GetIntArrayElements(env, array, 0);

  // Do some stuff.
  for (int i = 0; i < len; i++) {
    printf("Int value: %d\n", body[i]);
    body[i] = 0;
  }

  // Release body when you decide it is no longer needed.
  (*env)->ReleaseIntArrayElements(env, array, body, 0);
}

/*
 * Class:     recipeNo013_PassArrayBack
 * Method:    passLongArray
 * Signature: ([J)V
 */
JNIEXPORT void JNICALL
Java_recipeNo013_PassArrayBack_passLongArray(JNIEnv *env, jclass obj, jlongArray array) {
  // get size of array
  jsize len = (*env)->GetArrayLength(env, array);

  // get the body of array; it will be referenced by C pointer.
  jlong *body = (*env)->GetLongArrayElements(env, array, 0);

  // Do some stuff.
  for (int i = 0; i < len; i++) {
    printf("Long value: %ld\n", body[i]);
    body[i] = 0;
  }

  // Release body when you decide it is no longer needed.
  (*env)->ReleaseLongArrayElements(env, array, body, 0);
}

/*
 * Class:     recipeNo013_PassArrayBack
 * Method:    passFloatArray
 * Signature: ([F)V
 */
JNIEXPORT void JNICALL
Java_recipeNo013_PassArrayBack_passFloatArray(JNIEnv *env, jclass obj, jfloatArray array) {
  // get size of array
  jsize len = (*env)->GetArrayLength(env, array);

  // get the body of array; it will be referenced by C pointer.
  jfloat *body = (*env)->GetFloatArrayElements(env, array, 0);

  // Do some stuff.
  for (int i = 0; i < len; i++) {
    printf("Float value: %f\n", body[i]);
    body[i] = 0;
  }

  // Release body when you decide it is no longer needed.
  (*env)->ReleaseFloatArrayElements(env, array, body, 0);
}

/*
 * Class:     recipeNo013_PassArrayBack
 * Method:    passDoubleArray
 * Signature: ([D)V
 */
JNIEXPORT void JNICALL
Java_recipeNo013_PassArrayBack_passDoubleArray(JNIEnv *env, jclass obj, jdoubleArray array) {
  // get size of array
  jsize len = (*env)->GetArrayLength(env, array);

  // get the body of array; it will be referenced by C pointer.
  jdouble *body = (*env)->GetDoubleArrayElements(env, array, 0);

  // Do some stuff.
  for (int i = 0; i < len; i++) {
    printf("Double value: %f\n", body[i]);
    body[i] = 0;
  }

  // Release body when you decide it is no longer needed.
  (*env)->ReleaseDoubleArrayElements(env, array, body, 0);
}
