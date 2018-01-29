#!/bin/sh

. ./set_env.sh

mkdir target
javac -d target java/${PACKAGE}/${CLASS_NAME}.java
javah -jni -d c -cp target ${PACKAGE}.${CLASS_NAME}
