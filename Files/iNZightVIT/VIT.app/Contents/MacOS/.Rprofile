width <- options("width")

rule <- function() cat(rep("=", width), "\n\n", sep = "")

rule()

## set library path
.libPaths("/Applications/iNZightVIT/.library")
pkgs <- c("vit")
repo <- c("https://r.docker.stat.auckland.ac.nz",
          "http://cran.stat.auckland.ac.nz")

## check VIT installed ...
if (!all(pkgs %in% utils::installed.packages()[, "Package"])) {
  cat("Please wait while the installation of VIT is finalized.\nThis may take a few moments.\n\n")
  utils::install.packages(pkgs, repos = repo,
                          lib = "/Applications/iNZightVIT/.library",
                          quiet = TRUE, type = "binary", dependencies = TRUE)
  cat("\nThat's it! VIT is ready to use and will launch momentarily.\n")
}

cat("Loading VIT ...\n\n")

## launch VIT
suppressMessages({
  library(vit)
})

cat("Launching VIT ...\n")

suppressMessages({
  iNZightVIT(disposeR = TRUE)
})

## Hide R:
system("osascript -e 'tell application \"System Events\" to set visible of application process \"R\" to false'")


rule()
