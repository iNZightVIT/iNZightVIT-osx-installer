#!/bin/bash

defaults write org.R-project.R NSAppSleepDisabled -bool YES
export R_DIR="/Applications/iNZightVIT/iNZight.app/Contents/Resources/"
open -a R $R_DIR

exit 0
