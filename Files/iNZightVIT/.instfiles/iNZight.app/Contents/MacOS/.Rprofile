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
