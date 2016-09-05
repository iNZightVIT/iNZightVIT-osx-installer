width <- options("width")

rule <- function() cat(rep("=", width), "\n\n", sep = "")

rule()

## set library path
.libPaths("/Applications/iNZightVIT/.library")
pkgs <- c("iNZight", "iNZightPlots", "iNZightMR",
          "iNZightModules", "iNZightRegression", "iNZightTS",
          "iNZightTools")
repo <- c("http://r.docker.stat.auckland.ac.nz/R",
          "http://cran.stat.auckland.ac.nz")

## check iNZight installed ...
if ( ! all(pkgs %in% utils::installed.packages()[, "Package"]) ) {
  cat("Installing iNZight files ...\n")
  utils::install.packages(pkgs, repos = repo,
                          lib = "/Applications/iNZightVIT/.library",
                          type = "binary", dependencies = TRUE)
  cat("Done!\n\n")
}

## check for updates ...
upd <- utils::old.packages(repos = repo[1])
if (!is.null(upd)) {
  ## updates are available!
  upd <- system("osascript -e 'display dialog \"Do you want update iNZight?\" with title \"Updates Available\" buttons {\"Yes\", \"No\"} default button 2'", TRUE) == "button returned:Yes"
  if (upd) {
    cat("Installing updates, please wait ...\n")
    utils::update.packages(repos = repo[1], ask = FALSE)
    cat("Done.\n\n")
  }
}

cat("Loading iNZight ...\n\n")

## launch iNZight
suppressMessages({
  library(iNZight)
})

cat("Launching iNZight ...\n")

suppressMessages({
  iNZight(disposeR = TRUE)
})

## Hide R:
system("osascript -e 'tell application \"System Events\" to set visible of application process \"R\" to false'")


rule()
