#!/bin/sh
java -Djava.library.path=${LD_LIBRARY_PATH}:./lib \
    -cp target recipeNo001.HelloWorld
