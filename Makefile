install:
	@R --slave -f "bootstrap.R"

update:
	R -e "install.packages(paste0('~/iNZight/', c('iNZightMR', 'iNZightTS', 'iNZightTools', 'iNZightPlots', 'iNZightRegression', 'iNZightPlots', 'iNZight', 'iNZightModules', 'vit', 'FutureLearnData')), repos = NULL, type = 'source', lib = '~/iNZight/iNZightVIT-osx-installer/Files/iNZightVIT/.library')"

iDIR=Installer/iNZightVIT

iNZightVIT: 
	@echo Removing old version ...
	@rm -rf $@
	@echo Adding Application folder, removing library ...
	@mkdir $@
	@echo Set icon on iNZight folder
	@Installer/scripts/seticon -image Installer/img/Icon.icns -file $@
	@cp $(iDIR)/.Rprofile $@
	@cp -r $(iDIR)/iNZight.app $@
	@cp -r $(iDIR)/VIT.app $@
	@cp -r $(iDIR)/Update.app $@
	@cp -r $(iDIR)/.library $@

VERSION ?= $(shell grep -i \^version ../iNZight/DESCRIPTION | cut -d : -d \  -f 2)

DMG = iNZightVIT-mac-$(VERSION).dmg
createDMG: iNZightVIT
	@echo Creating DMG volume
	@if [ -f $(DMG) ]; then rm $(DMG); fi;
	@node_modules/appdmg/bin/appdmg.js dmgbuilder.json $(DMG)
	@echo Moving to Dropbox ...
	@mv $(DMG) ~/Dropbox/iNZight/$(DMG)
	@rm -rf $<
	@echo Done

clean:
	@rm iNZightVIT-mac-installer.dmg
	@rm iNZightVIT-selfinstall.tar.bz2
	@rm -rf iNZightVIT

.PHONY: clean
