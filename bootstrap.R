ca <- commandArgs(trailingOnly = TRUE)

cat(" * compiling list of required packages\n")
pkglib <- file.path("Installer", "iNZightVIT", ".library")
if (!dir.exists(pkglib)) dir.create(pkglib)
pkgversions <- installed.packages(pkglib)[, 'Version']

repos <- c('https://r.docker.stat.auckland.ac.nz', 'https://cran.stat.auckland.ac.nz')
if (!requireNamespace('packrat', quietly = TRUE)) install.packages('packrat', repos = repos[2])
if (!requireNamespace('devtools', quietly = TRUE)) install.packages('devtools', repos = repos[2])

srclib <- .libPaths()[1]
inzpkgs <- c('iNZight', 'iNZightPlots', 'iNZightModules', 'iNZightTools',
             'iNZightRegression', 'iNZightMR', 'iNZightTS', 'vit')
if (length(ca) > 0)
    inzpkgs <- c(inzpkgs, ca)

ap <- packrat:::availablePackages(repos = repos, type = "mac.binary.mavericks")
extrapkgs <- packrat:::getPackageDependencies(inzpkgs, srclib, ap, 
                                              fields = c('Depends', 'Imports', 'Suggests', 'LinkingTo'))
if (!'iNZightMaps' %in% inzpkgs)
    extrapkgs <- extrapkgs[extrapkgs != "iNZightMaps"]
extrapkgs <- extrapkgs[extrapkgs != "Acinonyx"]
extrapkgs <- extrapkgs[extrapkgs != "RODBC"]

## Installing additional packages specified on command line ...
deps <- unique(c(inzpkgs, extrapkgs, 
    packrat:::recursivePackageDependencies(unique(c(inzpkgs, extrapkgs)), srclib, ap)))

missing <- deps[!deps %in% names(pkgversions)]

pkgu <- pkgversions[names(pkgversions) %in% rownames(ap)]
outdated <- names(pkgu)[ap[names(pkgu), 'Version'] > pkgu]

grab <- unique(c(missing, outdated))

cat(" * downloading packages\n")
pkgs <- download.packages(grab, pkglib, repos = repos, type = 'mac.binary.mavericks', quiet = TRUE)

## missing
missing <- grab[!grab %in% pkgs[, 1]]

cat(" * extracting packages into place\n")
x <- apply(pkgs, 1, function(pkg) {
    pkgd <- file.path("Installer", "iNZightVIT", ".library", pkg[1]) 
    if (dir.exists(pkgd)) unlink(pkgd, TRUE, TRUE)
    untar(pkg[2], exdir = file.path("Installer", "iNZightVIT", ".library"))
    unlink(pkg[2])
})

cat(" * Installing Acinonyx\n")
install.packages('Acinonyx', lib = pkglib, repos = 'http://rforge.net', type = 'binary')
# untar("../Acinonyx_3.0-0.tar.gz", exdir = pkglib)

## then try install missing ...
if (length(missing) > 0) {
    cat(" * some packages weren't available: ")
    cat(paste(missing, collapse = ", "))
    cat("\n")
}

cat(" * Done!\n\nNow go to `dev` and install the development iNZight packages\nif this isn't the master release\n")

