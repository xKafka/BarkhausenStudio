#!/bin/bash

cd src/ || echo "src not found"

DIR=$(find . -type f -name "*.pyx")

if test -z "$DIR";
then
  echo "$DIR no such dirs found"
else
  echo "$DIR python file found"
  if cython --cplus "$DIR";
    then
      DIR_FILE_NAME=$(basename -- "$DIR")
      DIR_BASE_NAME="${DIR_FILE_NAME%.*}"
      cd ..

      rm -rf "include/$DIR_BASE_NAME.h"

      mv "src/$DIR_BASE_NAME.h" "include/"

      echo "job done"
  fi
fi

