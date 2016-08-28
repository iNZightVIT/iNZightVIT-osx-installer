## set library path
.libPaths("/Applications/iNZightVIT/.library")
pkgs <- c("vit")
repo <- c("http://r.docker.stat.auckland.ac.nz/R",
          "http://cran.stat.auckland.ac.nz")

## check VIT installed ...
if (!all(pkgs %in% utils::installed.packages()[, "Package"])) {
  cat("Please wait while VIT is installed ...\n")
  utils::install.packages(pkgs, repos = repo, lib = "/Applications/iNZightVIT/.library")
  cat("\nDone!\n")
}

## check for updates ...


## launch VIT
library(vit)
iNZightVIT(disposeR = TRUE)
