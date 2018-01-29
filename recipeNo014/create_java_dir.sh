#!/bin/sh

. ./set_env.sh
mkdir java
cd java
mkdir $PACKAGE
cd $PACKAGE
cp ../../../data/java_class_template.java $CLASS_NAME.java
sed -i "s:PACKAGE_PLACEHOLDER:${PACKAGE}:g" $CLASS_NAME.java
sed -i "s:CLASS_NAME_PLACEHOLDER:${CLASS_NAME}:g" $CLASS_NAME.java
cd ../..

