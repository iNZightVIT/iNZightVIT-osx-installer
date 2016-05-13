## set library path
.libPaths("../../../.library")
pkgs <- c("iNZight", "iNZightPlots", "iNZightMR",
          "iNZightModules", "iNZightRegression", "iNZightTS",
          "iNZightTools", "vit")
repo <- c("http://r.docker.stat.auckland.ac.nz/R",
          "http://cran.stat.auckland.ac.nz")

## check iNZight installed ...
if (!all(pkgs %in% utils::installed.packages()[, "Package"])) {
  cat("Please wait while iNZight is installed ...\n")
  utils::install.packages(pkgs, repos = repo)
  cat("\nDone!\n")
}

## check for updates ...


## launch iNZight
library(iNZight)
iNZight(disposeR = TRUE)
