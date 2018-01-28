#!/bin/sh

PACKAGE="recipeNo002"
CLASS_NAME="PassInt"

java -Djava.library.path=${LD_LIBRARY_PATH}:./lib \
    -cp target ${PACKAGE}.${CLASS_NAME}
