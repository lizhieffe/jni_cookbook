#!/bin/sh

mkdir target
javac -d target java/recipeNo001/HelloWorld.java
javah -jni -d c -cp target recipeNo001.HelloWorld
