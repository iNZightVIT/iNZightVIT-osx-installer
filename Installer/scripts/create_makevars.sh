#!/bin/sh

mkdir $HOME/.R
cat << EOF > $HOME/.R/Makevars
CC=/usr/local/clang4/bin/clang
CXX=/usr/local/clang4/bin/clang++
LDFLAGS=-L/usr/local/clang4/lib
EOF

chown -R $USER $HOME/.R 

exit 0
