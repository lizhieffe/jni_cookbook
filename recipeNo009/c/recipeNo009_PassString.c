#include "recipeNo009_PassString.h"

#include <stdio.h>

JNIEXPORT void JNICALL
Java_recipeNo009_PassString_displayString(JNIEnv *env, jclass obj, jstring str) {
  const char *c_str;
  c_str = (*env)->GetStringUTFChars(env, str, NULL);
  if (c_str == NULL) {
    return;
  }

  printf("Passed string: %s\n", c_str);

  // after using it, release the memory.
  (*env)->ReleaseStringUTFChars(env, str, c_str);
}
