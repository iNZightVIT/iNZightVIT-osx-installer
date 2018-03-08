#!/bin/bash

INST="$(cd "$DIR"; cd ../.instfiles; pwd)"
TARGET="/Applications/iNZightVIT"

# Moves files from .instfiles -> TARGET
cp $INST/iNZight.app $TARGET
cp $INST/VIT.app $TARGET
cp $INST/Update.app $TARGET

exit 0

