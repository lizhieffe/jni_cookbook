#include "recipeNo002_PassInt.h"

#include <stdio.h>
#include "jni.h"

JNIEXPORT void JNICALL Java_recipeNo002_PassInt_displayInt(JNIEnv *env, jclass obj, jint value) {
  printf("value = %d\n", value);
}
