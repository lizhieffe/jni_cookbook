#!/bin/sh

. ./set_env.sh

mkdir lib
gcc -std=c99 -I${JAVA_HOME}/include -I${JAVA_HOME}/include/linux -o lib/lib${CLASS_NAME}.so -shared -fPIC c/*.c

