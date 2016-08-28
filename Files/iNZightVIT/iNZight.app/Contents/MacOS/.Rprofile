width <- options("width")

rule <- function() cat(rep("=", width), "\n\n", sep = "")

rule()
## set library path
.libPaths("/Applications/iNZightVIT/.library")
pkgs <- c("iNZight", "iNZightPlots", "iNZightMR",
          "iNZightModules", "iNZightRegression", "iNZightTS",
          "iNZightTools", "vit")
repo <- c("http://r.docker.stat.auckland.ac.nz/R",
          "http://cran.stat.auckland.ac.nz")

## check iNZight installed ...
if (!all(pkgs %in% utils::installed.packages()[, "Package"])) {
  cat("Installing iNZight files ...")
  utils::install.packages(pkgs, repos = repo, lib = "/Applications/iNZightVIT/.library",
                          type = "binary", dependencies = TRUE)
  cat(".. done!\n\n")
}

## check for updates ...
upd <- utils::old.packages(repos = repo[1])
if (!is.null(upd)) {
  ## updates are available!
  upd <- system("osascript -e 'display dialog \"Do you want update iNZight?\" with title \"Updates Available\" buttons {\"Yes\", \"No\"} default button 2'", TRUE) == "button returned:Yes"
  if (upd) {
    cat("Installing updates, please wait ...")
    update.packages(repos = repo[1], ask = FALSE)
    cat(" done.\n\n")
  }
}

cat("Loading iNZight ...\n\n")

## launch iNZight
suppressMessages({
  library(iNZight)
})

cat("Launching iNZight ...")

suppressMessages({
  iNZight(disposeR = TRUE)
})

## Hide R:
system("osascript -e 'tell application \"System Events\" to set visible of application process \"R\" to false'")


rule()
