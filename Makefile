dbCopy:
	cp build/iNZightVIT.pkg ~/Dropbox/iNZight/iNZightVIT-osx-installer.pkg

upload:
	scp build/iNZightVIT.pkg.dmg tell029@login02.fos.auckland.ac.nz:/mnt/tell029/web/homepages.stat/inzight-www/iNZight/downloads/iNZightVIT-installer_latest.dmg
