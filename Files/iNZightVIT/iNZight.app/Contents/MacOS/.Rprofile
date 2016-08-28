## set library path
.libPaths("/Applications/iNZightVIT/.library")
pkgs <- c("iNZight", "iNZightPlots", "iNZightMR",
          "iNZightModules", "iNZightRegression", "iNZightTS",
          "iNZightTools", "vit")
repo <- c("http://r.docker.stat.auckland.ac.nz/R",
          "http://cran.stat.auckland.ac.nz")

## check iNZight installed ...
if (!all(pkgs %in% utils::installed.packages()[, "Package"])) {
  cat("Please wait while iNZight is installed ...\n")
  utils::install.packages(pkgs, repos = repo, lib = "/Applications/iNZightVIT/.library",
                          type = "binary", dependencies = TRUE)
  cat("\nDone!\n")
}

## check for updates ...
upd <- utils::old.packages(repos = repo[1])
if (!is.null(upd)) {
  ## updates are available!
  upd <- system("osascript -e 'display dialog \"Do you want update iNZight?\" with title \"Updates Available\" buttons {\"Yes\", \"No\"} default button 2'", TRUE) == "button returned:Yes"
  if (upd) update.packages(repos = repo[1], ask = FALSE)
}


## launch iNZight
library(iNZight)
iNZight(disposeR = TRUE)
