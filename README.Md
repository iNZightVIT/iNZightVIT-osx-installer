# iNZightVIT Mac Installer

A [Packages](http://s.sudre.free.fr/Software/Packages/about.html) project to create an installer for Mac.


## Requirements

1. XQuartz - everyone
2. GTK2+ - everyone
3. R 3.2.3 - anyone without R already
4. iNZightVIT App - everyone - contains library for R-3.2.3


## Installation

1. If XQuartz present, don’t install
2. If GTK2+ present, don’t install
3. If `/Library/Frameworks/R.framework/Versions/3.*` installed, don’t install — if a version 2.y or earlier, require install (warning, etc)
4. If iNZightVIT already present, remove and replace
5. Create `Documents/iNZightVIT/{Saved Data,Saved Plots}`


## Run time

1. Check libraries installed - if not (i.e., R user) prompt to install
2. Check for updates - if any, prompt users to update
3. Launch iNZight!



## Components

`Files/iNZightVIT -> /Applications/iNZightVIT`:
		- An app bundle `iNZight.app/Contents/MacOS/{iNZight,.Rprofile,library}`
			- `iNZight`:
```{bash}
ENV R_HOME=`/Applications/iNZightVIT/iNZight.app/Contents/MacOS`
open -a R $(R_HOME)
```
			- `.Rprofile`: set everything up, check installed, check updates, run iNZight
			- `library -> /Applications/iNZightVIT/.library`
		- `.library`: containing iNZight packages (common for iNZight, VIT, and updater), sym-linked from bundles

		- `VIT.app`: replica of iNZight, but with adjusted `.Rprofile`
		- `Update.app`: another replica, but `.Rprofile` updates packages

`Files/R.framework -> /Library/Frameworks/R.framework`:
		- If R.framework isn't already present, install it
		- Also copy `R.app -> /Applications/R.app`

`Files/XQuartz`: installed to various locations

`Files/GTK+.framework -> /Library/Frameworks/GTK+.framework`:
		- Install GTK
		- If present, check the version is correct (2.24)
