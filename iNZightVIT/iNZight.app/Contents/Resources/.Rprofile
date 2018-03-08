width <- options("width")

rule <- function() cat(rep("=", width), "\n\n", sep = "")

rule()

## set library path
.libPaths("/Applications/iNZightVIT/.library")
repo <- c("http://r.docker.stat.auckland.ac.nz/R",
          "https://cran.rstudio.com")

options(repos = repo)

pkgs <- c("iNZight", "iNZightPlots", "iNZightMR",
          "iNZightModules", "iNZightRegression", "iNZightTS",
          "iNZightTools")

pkg.check <- suppressWarnings(sapply(pkgs, require, quietly = TRUE, character.only = TRUE))

if (! all(pkg.check)) {
  cat("Please wait while iNZight finishes the installation by installing the latest packages.\nThis may take a few minutes.\n\n")
  x <- system("osascript -e 'tell app \"System Events\" to display dialog \"Please wait while iNZight installs dependencies. This may take a few minutes.\" buttons [\"OK\"]'", wait = FALSE)
  utils::install.packages(pkgs, repos = repo,
                          lib = "/Applications/iNZightVIT/.library",
                          dependencies = TRUE, quiet = FALSE)
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
