width <- options("width")

rule <- function() cat(rep("=", width), "\n\n", sep = "")

rule()

## set library path
.libPaths("/Applications/iNZightVIT/.library")
pkgs <- c("iNZight", "iNZightPlots", "iNZightMR",
          "iNZightModules", "iNZightRegression", "iNZightTS",
          "iNZightTools")
repo <- c("http://r.docker.stat.auckland.ac.nz/R",
          "https://cran.rstudio.com")


## check iNZight installed ...
if ( ! all(pkgs %in% utils::installed.packages()[, "Package"]) ) {
  cat("Please wait while iNZight finishes the installation by installing the latest packages.\nThis may take a few minutes.\n\n")
#  suppressWarnings({suppressMessages({
    utils::install.packages(pkgs, repos = repo,
                            lib = "/Applications/iNZightVIT/.library", 
                            type = "binary", dependencies = TRUE, quiet = TRUE)
#  })})
  cat("That's it! iNZight has finished installing!\n\n")
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
