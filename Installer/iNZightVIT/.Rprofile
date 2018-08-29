## Version of this .Rprofile
VERSION <- 3.0

width <-getOption('width')
center <- function(...) {
    msg <- paste(...)

    paste0(paste0(rep(" ", floor(0.5 * (width - nchar(msg)))), collapse = ""), msg)
}
rule <- function() cat(rep("=", width), "\n\n", sep = "")

## set library path
LIB <- file.path(Sys.getenv('APPDIR'), ".library")
.libPaths(LIB)
repo <- c("https://r.docker.stat.auckland.ac.nz",
          "https://cran.rstudio.com")
# options(repos = repo, install.packages.check.source = "no")

## Don't ask user to compile from source .. just do it!
# options(install.packages.compile.from.source = 'always')
## to ensure we can build packages correctly ...
# Sys.setenv(PKG_CONFIG = 
#     file.path("/Applications", "iNZightVIT", "Update.app",
#               "Contents", "Resources", "pkg-config"))

installPkgs <- function(...) {
    if (getRversion() < numeric_version(3.3) ||
        getRversion() >= numeric_version(3.4)) {
        stop("Unfortunately iNZight only runs on R 3.3. Please check the website FAQ for info.")
    }
    cat(" * checking for installed dependencies \n")
    utils::flush.console()
    pkgs <- unlist(list(...))
    to.install <- suppressWarnings(
        !sapply(pkgs, requireNamespace, quietly = TRUE)
    )
    if (any(to.install)) {
        cat("   Kia ora!\n\n   It looks like this is your first time using ", 
            Sys.getenv('INZAPP'), ".\n",
            "   Please wait while I install some things ... \n\n",
            sep = "")
        utils::flush.console()

        inst <- pkgs[to.install]
        ap <- utils::available.packages(type = "mac.binary.mavericks")
        deps <- unique(do.call(c, tools::package_dependencies(inst, db = ap, which = "most")))
        deps <- deps[!sapply(deps, requireNamespace, quietly = TRUE)]
        pkgs <- unique(c(deps, inst))
        pb <- txtProgressBar(0, length(pkgs), style = 3)
        for (i in seq_along(1:length(pkgs))) {
            suppressWarnings(suppressMessages(
                utils::install.packages(pkgs[i], type = "mac.binary.mavericks", 
                                        dependencies = TRUE, quiet = TRUE)
            ))
            setTxtProgressBar(pb, i)
        }
        close(pb)
        cat("\n * installation complete!\n")
    }
}

## Add a 'capture.output' to require(RGtk2)
# grep for GTK+ is headerless
.checkGTK <- function() {
    ## boundGTKVersion() ????
    rgtk <- suppressPackageStartupMessages(suppressWarnings(
        capture.output(require(RGtk2))
    ))
    if (any(grepl('headless', rgtk)))
        stop(" * ERROR: you either haven't installed RGtk2, or you need to restart your Mac")
}


.First <- function() {
    app <- Sys.getenv('INZAPP')
    rule()
    appt <- switch(app, 'Update' = 'the iNZight Updater', app)
    cat(center(" *** Welcome to", appt, "*** \n\n"))
    utils::flush.console()

    ## Create the iNZight directory
    if (!dir.exists('~/Documents/iNZightVIT')) {
        if (dir.create('~/Documents/iNZightVIT', showWarnings = FALSE)) {
            setwd('~/Documents/iNZightVIT')
            if (!dir.exists('Saved Data'))
                dir.create('Saved Data', showWarnings = FALSE)
            if (!dir.exists('Saved Plots'))
                dir.create('Saved Plots', showWarnings = FALSE)
        }
    } else {
        setwd('~/Documents/iNZightVIT')
    }
    
    switch(app,
        "iNZight" = {
            # installPkgs("iNZight", "iNZightPlots", "iNZightMR",
            #             "iNZightModules", "iNZightRegression", "iNZightTS",
            #             "iNZightTools", "scales")
            cat(" * loading iNZight \n")
            utils::flush.console()
            .checkGTK()
            suppressMessages(suppressPackageStartupMessages(library(iNZight)))
            cat(" * launching iNZight \n")
            utils::flush.console()
            suppressMessages(iNZight(disposeR = TRUE))
        },
        "VIT" = {
            # installPkgs("vit")
            cat(" * loading VIT \n")
            utils::flush.console()
            .checkGTK()
            suppressMessages(suppressPackageStartupMessages(library(vit)))
            cat(" * launching VIT \n")
            utils::flush.console()
            suppressMessages(iNZightVIT(disposeR = TRUE))
        },
        "Update" = {
            cat(" * updating iNZightVIT \n")
            utils::flush.console()
            OS <- "osx"
            source("https://raw.githubusercontent.com/iNZightVIT/dev/master/update.R")
            if (VERSION == LATEST)
                cat(" * iNZight is up to date! \n")
        })

    # Only want to hide iNZight and VIT 
    if (app != "Update")
        system("osascript -e 'tell application \"System Events\" to set visible of application process \"R\" to false'")
}

setwd("~")

