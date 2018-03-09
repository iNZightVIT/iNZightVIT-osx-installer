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

installPkgs <- function(...) {
    pkgs <- unlist(list(...))
    to.install <- !suppressWarnings(
        sapply(pkgs, require, quietly = TRUE, character.only = TRUE)
    )
    if (any(to.install)) {
        cat("\nKia ora!\n\nIt looks like this is your first time using ", 
            Sys.getenv('INZAPP'), ".\n",
            "Please wait while I install some things ... \n\n",
            sep = "")

        utils::install.packages('RGtk2', type = "source", dependencies = TRUE)

        inst <- pkgs[to.install]
        utils::install.packages(inst, dependencies = TRUE)
    }
    cat("\n\nThat's it!\n")
    rule()
}

.First <- function() {
    app <- Sys.getenv('INZAPP')
    cat(center(" *** Welcome to", app, "*** \n"))

    ## Add a 'capture.output' to require(RGtk2)
    # grep for GTK+ is headerless

    switch(app,
        "iNZight" = {
            installPkgs("iNZight", "iNZightPlots", "iNZightMR",
                        "iNZightModules", "iNZightRegression", "iNZightTS",
                        "iNZightTools")
            cat("Launching iNZight ...\n")
        },
        "VIT" = {
            installPkgs("vit")
            cat("Launching VIT ...\n")
        },
        "Update" = {
            cat("Updating iNZightVIT ...\n")
        })

    cat("I'm at the end of the script!\n\n\n\n")
}

setwd("~")

