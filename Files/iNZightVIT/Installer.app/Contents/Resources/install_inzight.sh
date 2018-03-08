#!/bin/bash

INST="$(cd "$DIR"; cd ../.instfiles; pwd)"
TARGET="/Applications/iNZightVIT"

# Install R packages

echo "Here we go ..."
export PATH=$PATH:/opt/local/bin
/usr/local/bin/R -f "$INST/install_inzight.R"
echo "Done ..."

exit 0
