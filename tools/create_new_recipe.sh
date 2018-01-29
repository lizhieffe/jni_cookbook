#!/bin/sh

read -p "Enter package name: " PACKAGE
read -p "Enter class name: " CLASS_NAME

cd ..
mkdir "$PACKAGE"
cd "$PACKAGE"
cp ../data/script_templates/*.sh .
sed -i "s:PACKAGE_PLACEHOLDER:${PACKAGE}:g" set_env.sh
sed -i "s:CLASS_NAME_PLACEHOLDER:${CLASS_NAME}:g" set_env.sh
. ./create_java_dir.sh
cd ../tools

echo "New recipe directory is created successfully at $PACKAGE folder"
