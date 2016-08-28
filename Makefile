

#########

dbCopy:
	cp build/iNZightVIT.pkg ~/Dropbox/iNZight/iNZightVIT-osx-installer.pkg

upload:
	scp iNZightVIT-installer_latest.dmg tell029@login02.fos.auckland.ac.nz:/mnt/tell029/web/homepages.stat/inzight-www/iNZight/downloads/iNZightVIT-installer_latest.dmg



update:
	R -e "install.packages(paste0('~/iNZight/', c('iNZightMR', 'iNZightTS', 'iNZightTools', 'iNZightPlots', 'iNZightRegression', 'iNZightPlots', 'iNZight', 'iNZightModules', 'vit')), repos = NULL, type = 'source', lib = '~/iNZight/iNZightVIT-osx-installer/Files/iNZightVIT/.library')"


depends:
	#R -e "install.packages(c('hextri', 'dichromat', 'viridis', 'RColorBrewer'), repos='http://cran.stat.auckland.ac.nz', lib='~/iNZight/iNZightVIT-osx-installer/Files/iNZightVIT/.library')"
	R -e "install.packages('Acinonyx', repo='http://rforge.net',type='source', lib='~/iNZight/iNZightVIT-osx-installer/Files/iNZightVIT/.library')"


VERSION ?= latest

createDMG:
	@-rm iNZightVIT-$(VERSION).dmg
	@appdmg dmgbuilder.json iNZightVIT-$(VERSION).dmg
