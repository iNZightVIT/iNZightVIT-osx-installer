width <- options("width")

rule <- function() cat(rep("=", width), "\n\n", sep = "")

rule()

## set library path
LIB <- "/Applications/iNZightVIT/.library"
.libPaths(LIB)
pkgs <- c("iNZight", "iNZightPlots", "iNZightMR",
          "iNZightModules", "iNZightRegression", "iNZightTS",
          "iNZightTools", "vit")
repo <- c("http://r.docker.stat.auckland.ac.nz/R",
          "https://cran.rstudio.com")

utils::install.packages(pkgs, repos = repo, lib = LIB,
                        dependencies = TRUE, quiet = FALSE)


