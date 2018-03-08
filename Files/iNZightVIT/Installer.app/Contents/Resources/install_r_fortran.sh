#!/bin/sh

INST="$(cd "$DIR"; cd ../.instfiles; pwd)"
TARGET="/Applications/iNZightVIT"

# Install R - THIS WILL OVERWRITE ANYTHING YOU HAVE
R="$INST/R-3.4.3.pkg"
if [ -d "/Library/Frameworks/R.framework" ]; then
    RV="$(/usr/local/bin/R --slave --silent -e 'cat(as.numeric(getRversion() >= numeric_version("3.2")))')"
    if [ $RV == "0" ]; then
        # need to install - prompt user
        CONT="$(osascript -e 'display dialog "iNZight requires R 3.2 or higher, but you have an older version.\n\nWould you like to install 3.4.3 now?" with title "Install R 3.4.3" buttons {"Yes", "No"} default button 1')"
        if [ "$CONT" = "button returned:Yes" ]; then
            sudo -s installer -allowUntrusted -pkg $R -target /
        else
            exit 1
        fi
    fi
else
    sudo -s installer -allowUntrusted -pkg $R -target /
fi

FORTRAN="$INST/gfortran-4.2.3.pkg"
sudo -s installer -allowUntrusted -pkg $FORTRAN -target /

cat << EOF > $HOME/.R/Makevars
CC=/usr/local/clang4/bin/clang
CXX=/usr/local/clang4/bin/clang++
LDFLAGS=-L/usr/local/clang4/lib
EOF

exit 0
