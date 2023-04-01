#!/bin/bash
#installation script - DO NOT EDIT
if [ "$EUID" -ne 0 ]
  then sudo echo "installing in //etc" && sudo mkdir //etc/cppcalc && sudo cp -a install/resources //etc/cppcalc/ && cd ~ && echo "alias cppcalc='cd / && cd /etc/cppcalc/resources/ && ./calc'" >> .bashrc
  exit
else
  echo "run without root"
  exit
fi
