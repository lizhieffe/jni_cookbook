#!/bin/sh

PACKAGE="recipeNo002"
CLASS_NAME="PassInt"

mkdir lib
gcc -I${JAVA_HOME}/include -I${JAVA_HOME}/include/linux -o lib/lib${CLASS_NAME}.so -shared -fPIC c/*.c

