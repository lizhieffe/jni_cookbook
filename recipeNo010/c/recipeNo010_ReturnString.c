#include "recipeNo010_ReturnString.h"

#include <stdio.h>


JNIEXPORT jstring JNICALL
Java_recipeNo010_ReturnString_getString(JNIEnv *env, jclass obj) {
  char buffer[] = "This is a sample string.";
  return (*env)->NewStringUTF(env, buffer);
}
