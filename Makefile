

#########



install:
	R -e "install.packages(c('iNZightMR', 'iNZightTS', 'iNZightTools', 'iNZightPlots', 'iNZightRegression', 'iNZightPlots', 'iNZight', 'iNZightModules', 'vit', 'FutureLearnData'), repos = c('http://r.docker.stat.auckland.ac.nz/R', 'http://cran.stat.auckland.ac.nz', 'http://rforge.net'), dependencies = TRUE, lib = '~/iNZight/iNZightVIT-osx-installer/Files/iNZightVIT/.library')"

update:
	R -e "install.packages(paste0('~/iNZight/', c('iNZightMR', 'iNZightTS', 'iNZightTools', 'iNZightPlots', 'iNZightRegression', 'iNZightPlots', 'iNZight', 'iNZightModules', 'vit', 'FutureLearnData')), repos = NULL, type = 'source', lib = '~/iNZight/iNZightVIT-osx-installer/Files/iNZightVIT/.library')"


depends:
	R -e "install.packages(c('gWidgets2', 'gWidgets2RGtk2', 'hextri', 'dichromat', 'viridis', 'RColorBrewer', 'gpairs', 'objectProperties'), repos='http://cran.stat.auckland.ac.nz', lib='~/iNZight/iNZightVIT-osx-installer/Files/iNZightVIT/.library')"
	R -e "install.packages('Acinonyx', repo='http://rforge.net',type='source', lib='~/iNZight/iNZightVIT-osx-installer/Files/iNZightVIT/.library')"


DMGV := 1.3
VERSION ?= $(shell grep -i \^version ../iNZight/DESCRIPTION | cut -d : -d \  -f 2)
DMG = iNZightVIT-mac-installer.dmg

addUpdate:
	cp ../dev/updateProfile-osx.R Files/iNZightVIT/Update.app/Contents/MacOS/.Rprofile

createDMG:
	make addUpdate
	@if [ -f $(DMG) ]; then rm $(DMG); fi;
	@node_modules/appdmg/bin/appdmg.js dmgbuilder.json $(DMG)

APP = iNZightVIT-selfinstall.tar.bz2
APPV = 1.2
createApp:
	make addUpdate
	@echo Removing old version ...
	@if [ -f $(APP) ]; then rm $(APP); fi;
	@echo Copying Application folder, removing library ...
	@cp -r Files/iNZightVIT iNZightVIT
	@rm -rf iNZightVIT/.library/*
	@cp README-self.Md iNZightVIT/README.Md
	@echo Cleaning out muck ...
	@rm -rf iNZightVIT/._* .DS_Store
	@echo Archiving folder ...
	@tar -cjf $(APP) iNZightVIT
	@echo Cleaning up ...
	@rm -rf iNZightVIT
	@echo Done


uploadDMG:
	chmod 775 iNZightVIT-mac-installer.dmg
	scp iNZightVIT-mac-installer.dmg tell029@login02.fos.auckland.ac.nz:/mnt/tell029/web/homepages.stat/inzight-www/iNZight/downloads/macOS/iNZightVIT-mac-installer-$(DMGV).dmg
uploadApp:
	chmod 775 iNZightVIT-selfinstall.tar.bz2
	scp iNZightVIT-selfinstall.tar.bz2 tell029@login02.fos.auckland.ac.nz:/mnt/tell029/web/homepages.stat/inzight-www/iNZight/downloads/macOS/iNZightVIT-selfinstall-$(APPV).tar.bz2
