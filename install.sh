#!/bin/bash
#installation script - DO NOT EDIT
sudo echo "installing in //etc" && sudo mkdir //etc/cppcalc && sudo cp -a install/resources //etc/cppcalc/ && cd ~ && echo "alias cppcalc='cd / && cd /etc/cppcalc/resources/ && ./calc'" >> .bashrc


