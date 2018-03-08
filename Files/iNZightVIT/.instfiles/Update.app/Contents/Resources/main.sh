#!/bin/bash

defaults write org.R-project.R NSAppSleepDisabled -bool YES
export R_DIR="/Applications/iNZightVIT/Update.app/Contents/Resources/"
open -a R $R_DIR
