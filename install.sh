#!/bin/bash
#installation script - DO NOT EDIT
if [ "$EUID" = 0 ]
  then echo "installing in /bin" && cp -a install/resources /bin/cppcalc/
  echo "Succesfully installed"
  exit
else
  echo "run as root/sudo"
  exit
fi
