# iNZightVIT Self Installer for Mac

This self-installing application is directed towards R users,
as it allows iNZight to install itself on any version of R (>= 3.0)
This assumes the following are installed:
- GTK+ 2.24-X11 (https://r.research.att.com/libs/GTK_2.24.17-X11.pkg)
- XQuartz (https://www.xquartz.org)
- R (>= 3.0) (https://www.r-project.org)
- If you're using R 3.4 or higher, you'll need gfortran (http://cran.stat.auckland.ac.nz/bin/macosx/tools/)

If you've had iNZight running previously, you'll already have the first two.


## Installation

1. First step is to copy the entire iNZightVIT folder to your Applications. It won't work from anywhere else.

2. If you're using R 3.4 or higher, you'll need to set `Makevars`. Create a file "~/.R/Makevars" and paste the following:
```
CC=/usr/local/clang4/bin/clang
CXX=/usr/local/clang4/bin/clang++
LDFLAGS=-L/usr/local/clang4/lib
```

3. Then double-click `iNZight` to launch it. It will automatically check for iNZight and install the necessary R packages, and then launch iNZight.


## Help

If you have any issues with the self installer, make sure you have GTK and XQuartz installed. You may need to restart your computer after doing so.

Please contact <inzight_support@stat.auckland.ac.nz> for assistance.
