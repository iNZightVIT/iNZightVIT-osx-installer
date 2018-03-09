width <- options("width")$width
center <- function(...) {
    msg <- paste(...)
    paste0(paste0(rep(" ", width - 2 * nchar(msg)), collapse = ""), msg)
}
rule <- function() cat(rep("=", width), "\n\n", sep = "")

## set library path
LIB <- file.path(Sys.getenv('APPDIR'), ".library")
.libPaths(LIB)
repo <- c("http://r.docker.stat.auckland.ac.nz/R",
          "https://cran.rstudio.com")
options(repos = repo)
Sys.setenv(PKG_CONFIG = 
    file.path("/Applications", "iNZightVIT", "Update.app",
              "Contents", "Resources", "pkg-config"))

installPkgs <- function(...) {
    cat(" * checking for installed dependencies \n")
    pkgs <- unlist(list(...))
    to.install <- !suppressWarnings(
        sapply(pkgs, requireNamespace, quietly = TRUE, character.only = TRUE)
    )
    if (any(to.install)) {
        x <- system("osascript -e 'tell app \"System Events\" to display dialog \"Please wait while iNZight installs dependencies. This may take a few minutes.\" buttons [\"OK\"]'", wait = FALSE)
        rule()
        cat("Kia ora!\n\nIt looks like this is your first time using ", 
            Sys.getenv('INZAPP'), ".\n",
            "Please wait while I install some things ... \n\n",
            sep = "")

        utils::install.packages(c('RGtk2', 'cairoDevice', 'gWidgets2RGtk2', 'gWidgetsRGtk2'), 
            type = "source", dependencies = TRUE)

        inst <- pkgs[to.install]
        utils::install.packages(inst, type = "binary", dependencies = TRUE)
        cat("\n\nThat's it, everything is installed!\n")
        rule()
    }
}

.First <- function() {
    app <- Sys.getenv('INZAPP')
    rule()
    cat(center(" *** Welcome to", app, "*** \n"))

    ## Add a 'capture.output' to require(RGtk2)
    # grep for GTK+ is headerless

    switch(app,
        "iNZight" = {
            installPkgs("iNZight", "iNZightPlots", "iNZightMR",
                        "iNZightModules", "iNZightRegression", "iNZightTS",
                        "iNZightTools")
            cat(" * loading iNZight \n")
            suppressMessages(suppressPackageStartupMessages(library(iNZight)))
            cat(" * launching iNZight \n")
            suppressMessages(iNZight(disposeR = TRUE))
        },
        "VIT" = {
            installPkgs("vit")
            cat(" * loading VIT \n")
            suppressMessages(suppressPackageStartupMessages(library(vit)))
            cat(" * launching VIT \n")
            suppressMessages(iNZightVIT(disposeR = TRUE))
        },
        "Update" = {
            cat("* updating iNZightVIT \n")
            VERSION <- 1.0
            source("https://raw.githubusercontent.com/iNZightVIT/dev/master/update.R")
        })

    # Only want to hide iNZight and VIT 
    if (app != "Update")
        system("osascript -e 'tell application \"System Events\" to set visible of application process \"R\" to false'")
}

setwd("~")

