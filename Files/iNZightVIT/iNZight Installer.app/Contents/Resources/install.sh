#!/bin/bash

INST="$(cd "$DIR"; cd ../.instfiles; pwd)"
TARGET="/Applications/iNZightVIT"

## 0. If directory exists, explain to user that we need to delete it and start again
if [ -d "$TARGET" ]; then
    CONT="$(osascript -e 'display dialog "It looks like you already have an existing iNZightVIT installation.\n\nWould you like to delete this (we cannot procede otherwise)?" with title "Remove existing iNZightVIT installation" buttons {"Yes", "No"} default button 1')"
    if [ "$CONT" = "button returned:Yes" ]; then
        rm -rf "$TARGET"
    else
        exit 0
    fi
fi  
mkdir -p "$TARGET/.library"



exit 0
