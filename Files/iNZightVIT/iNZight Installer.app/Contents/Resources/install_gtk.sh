#!/bin/bash

INST="$(cd "$DIR"; cd ../.instfiles; pwd)"
TARGET="/Applications/iNZightVIT"

## 1. Install GTK
GTK="$INST/GTK_2.24.17-X11.pkg"
sudo -s installer -allowUntrusted -pkg $GTK -target /
# sleep 5

exit 0