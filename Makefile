

#########



install:
	R -e "install.packages(c('iNZightMR', 'iNZightTS', 'iNZightTools', 'iNZightPlots', 'iNZightRegression', 'iNZightPlots', 'iNZight', 'iNZightModules', 'vit', 'FutureLearnData'), repos = c('http://r.docker.stat.auckland.ac.nz/R', 'http://cran.stat.auckland.ac.nz', 'http://rforge.net'), dependencies = TRUE, lib = '~/iNZight/iNZightVIT-osx-installer/Files/iNZightVIT/.library')"

update:
	R -e "install.packages(paste0('~/iNZight/', c('iNZightMR', 'iNZightTS', 'iNZightTools', 'iNZightPlots', 'iNZightRegression', 'iNZightPlots', 'iNZight', 'iNZightModules', 'vit', 'FutureLearnData')), repos = NULL, type = 'source', lib = '~/iNZight/iNZightVIT-osx-installer/Files/iNZightVIT/.library')"


depends:
	R -e "install.packages(c('gWidgets2', 'gWidgets2RGtk2', 'hextri', 'dichromat', 'viridis', 'RColorBrewer', 'gpairs', 'objectProperties'), repos='http://cran.stat.auckland.ac.nz', lib='~/iNZight/iNZightVIT-osx-installer/Files/iNZightVIT/.library')"
	R -e "install.packages('Acinonyx', repo='http://rforge.net',type='source', lib='~/iNZight/iNZightVIT-osx-installer/Files/iNZightVIT/.library')"


DMGV := 2.0
VERSION ?= $(shell grep -i \^version ../iNZight/DESCRIPTION | cut -d : -d \  -f 2)
DMG = iNZightVIT-mac-installer.dmg

iDIR=Installer/iNZightVIT

createDMG:
	@if [ -f $(DMG) ]; then rm $(DMG); fi;
	hdiutil create -volname "iNZightVIT Installer" -srcfolder "Installer/build" -ov -format UDZO $(DMG)

APP = iNZightVIT-selfinstall.tar.bz2
APPV = 2.0
createApp:
	@echo Removing old version ...
	@if [ -f $(APP) ]; then rm $(APP); fi;
	@echo Adding Application folder, removing library ...
	@rm -rf iNZightVIT
	@mkdir -p iNZightVIT/.library
	@echo Set icon on iNZight folder
	@Installer/scripts/seticon -image Installer/img/Icon.icns -file iNZightVIT
	@cp README-self.Md iNZightVIT/README.Md
	@cp $(iDIR)/.Rprofile iNZightVIT
	@cp -r $(iDIR)/iNZight.app iNZightVIT
	@cp -r $(iDIR)/VIT.app iNZightVIT
	@cp -r $(iDIR)/Update.app iNZightVIT
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


clean:
	@rm iNZightVIT-mac-installer.dmg
	@rm iNZightVIT-selfinstall.tar.bz2
	@rm -rf iNZightVIT

.PHONY: clean
