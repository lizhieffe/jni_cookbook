#include "recipeNo001_HelloWorld.h"

#include <stdio.h>
#include "jni.h"

JNIEXPORT void JNICALL Java_recipeNo001_HelloWorld_displayMessage(JNIEnv *env, jclass obj) {
  printf("Hello, World!\n");
}
