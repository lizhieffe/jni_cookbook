#!/bin/sh

PACKAGE="recipeNo002"
CLASS_NAME="PassInt"

mkdir target
javac -d target java/${PACKAGE}/${CLASS_NAME}.java
javah -jni -d c -cp target ${PACKAGE}.${CLASS_NAME}
