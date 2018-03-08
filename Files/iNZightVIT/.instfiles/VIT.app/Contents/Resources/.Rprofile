width <- options("width")

rule <- function() cat(rep("=", width), "\n\n", sep = "")

rule()

## set library path
.libPaths("/Applications/iNZightVIT/.library")
repo <- c("http://r.docker.stat.auckland.ac.nz/R",
          "https://cran.rstudio.com")

options(repos = repo)

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
