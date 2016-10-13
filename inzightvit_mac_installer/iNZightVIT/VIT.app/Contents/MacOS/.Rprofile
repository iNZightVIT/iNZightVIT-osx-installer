width <- options("width")

rule <- function() cat(rep("=", width), "\n\n", sep = "")

rule()

## set library path
.libPaths("/Applications/iNZightVIT/.library")
pkgs <- c("vit")
repo <- c("http://r.docker.stat.auckland.ac.nz/R",
          "http://cran.stat.auckland.ac.nz")

## check VIT installed ...
if (!all(pkgs %in% utils::installed.packages()[, "Package"])) {
  cat("Please wait while VIT is installed ...\n")
  utils::install.packages(pkgs, repos = repo,
                          lib = "/Applications/iNZightVIT/.library",
                          type = "binary", dependencies = TRUE)
  cat("\nDone!\n")
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
