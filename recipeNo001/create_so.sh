#!/bin/sh
mkdir lib
gcc -I${JAVA_HOME}/include -I${JAVA_HOME}/include/linux -o lib/libHelloWorld.so -shared -fPIC c/*.c

