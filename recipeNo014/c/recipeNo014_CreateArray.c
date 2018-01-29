#include "recipeNo014_CreateArray.h"

JNIEXPORT jbooleanArray JNICALL
Java_recipeNo014_CreateArray_createBooleanArray(JNIEnv *env, jclass obj, jint size) {
  // Create array that will be passed back to java.
  jbooleanArray array = (jbooleanArray)(*env)->NewBooleanArray(env, size);
  if (array == NULL) {
    return NULL;
  }

  // Allocate and fill C based array.
  jboolean *boolean_ptr = calloc(size, sizeof(jboolean));
  if (boolean_ptr == NULL) {
    return NULL;
  }

  for (int i = 0; i < size; i++) {
    boolean_ptr[i] = i % 2 == 0 ? JNI_FALSE : JNI_TRUE;
  }

  (*env)->SetBooleanArrayRegion(env, array, 0, size, (jboolean*)boolean_ptr);
  
  // Free memory allocated inside C.
  free(boolean_ptr);
  return array;
}
