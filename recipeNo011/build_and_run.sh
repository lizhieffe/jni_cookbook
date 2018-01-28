#!/bin/sh

. ./set_env.sh
. ./create_so.sh

java -Djava.library.path=${LD_LIBRARY_PATH}:./lib \
    -cp target ${PACKAGE}.${CLASS_NAME}
