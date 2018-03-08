#!/bin/bash

INST="$(cd "$DIR"; cd ../.instfiles; pwd)"
TARGET="/Applications/iNZightVIT"

## Install XQuartz
XQUARTZ="$INST/XQuartz-2.7.11.pkg"
sudo -s installer -allowUntrusted -pkg $XQUARTZ -target /

exit 0