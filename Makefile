

#########

upload:
	make uploadDMG
	make uploadApp

uploadDMG:
	scp iNZightVIT-mac-installer-*.dmg tell029@login02.fos.auckland.ac.nz:/mnt/tell029/web/homepages.stat/inzight-www/iNZight/downloads/
uploadApp:
	scp iNZightVIT-selfinstall.tar.bz tell029@login02.fos.auckland.ac.nz:/mnt/tell029/web/homepages.stat/inzight-www/iNZight/downloads/



update:
	R -e "install.packages(paste0('~/iNZight/', c('iNZightMR', 'iNZightTS', 'iNZightTools', 'iNZightPlots', 'iNZightRegression', 'iNZightPlots', 'iNZight', 'iNZightModules', 'vit')), repos = NULL, type = 'source', lib = '~/iNZight/iNZightVIT-osx-installer/Files/iNZightVIT/.library')"


depends:
	#R -e "install.packages(c('hextri', 'dichromat', 'viridis', 'RColorBrewer'), repos='http://cran.stat.auckland.ac.nz', lib='~/iNZight/iNZightVIT-osx-installer/Files/iNZightVIT/.library')"
	R -e "install.packages('Acinonyx', repo='http://rforge.net',type='source', lib='~/iNZight/iNZightVIT-osx-installer/Files/iNZightVIT/.library')"


VERSION ?= $(shell grep -i \^version ../iNZight/DESCRIPTION | cut -d : -d \  -f 2)
DMG = iNZightVIT-mac-installer-$(VERSION).dmg

createDMG:
	@if [ -f $(DMG) ]; then rm $(DMG); fi;
	@appdmg dmgbuilder.json $(DMG)

APP = iNZightVIT-selfinstall.tar.bz
createApp:
	@echo Removing old version ...
	@if [ -f $(APP) ]; then rm $(APP); fi;
	@echo Copying Application folder, removing library ...
	@cp -r Files/iNZightVIT iNZightVIT && rm -r iNZightVIT/.library/*
	@echo Archiving folder ...
	@tar -cjf $(APP) iNZightVIT
	@echo Cleaning up ...
	@rm -rf iNZightVIT
	@echo Done
