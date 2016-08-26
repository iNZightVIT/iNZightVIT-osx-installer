

#########

dbCopy:
	cp build/iNZightVIT.pkg ~/Dropbox/iNZight/iNZightVIT-osx-installer.pkg

upload:
	scp iNZightVIT-installer_latest.dmg tell029@login02.fos.auckland.ac.nz:/mnt/tell029/web/homepages.stat/inzight-www/iNZight/downloads/iNZightVIT-installer_latest.dmg



update:
	R -e "install.packages(paste0('~/iNZight/', c('iNZightMR', 'iNZightTS', 'iNZightTools', 'iNZightPlots', 'iNZightRegression', 'iNZightPlots', 'iNZight', 'iNZightModules', 'vit')), repos = NULL, type = 'source', lib = '~/iNZight/iNZightVIT-osx-installer/Files/iNZightVIT/.library')"


depends:
	R -e "install.packages(c('viridis', 'RColorBrewer'), repos='http://cran.stat.auckland.ac.nz', lib='~/iNZight/iNZightVIT-osx-installer/Files/iNZightVIT/.library')"

# replaceDMGcontents:
# 	rm -rf /Volumes/iNZightVIT/iNZightVIT/*.app
# 	cp -r ~/iNZight/iNZightVIT-osx-installer/Files/iNZightVIT/* /Volumes/iNZightVIT/iNZightVIT/



buildDMG:
	@-test -f iNZightVIT-installer.dmg && rm iNZightVIT-installer.dmg
	./create-dmg \
		--volname "iNZightVIT-installer" \
		--volicon "rainbow-apple.icns" \
		--background "background.png" \
		--window-pos 200 140 \
		--window-size 800 450 \
		--icon-size 48 \
		--text-size 12 \
		--icon iNZightVIT 400 328 \
		--icon GTK_2.24.17-X11.pkg 400 168 \
		--icon XQuartz-2.7.9.pkg 545 168 \
		--icon R-3.2.4.pkg 670 168 \
		--app-drop-link 670 328 \
		iNZightVIT-installer.dmg \
		Files/


# height of panel: 550 - 450 = 100

# topbar height: 162 - 140 = 22
# step2 top: 450 - 140 = 310
# icon2 top: 310 + 30 = 340


# 450 - 290 = 160
