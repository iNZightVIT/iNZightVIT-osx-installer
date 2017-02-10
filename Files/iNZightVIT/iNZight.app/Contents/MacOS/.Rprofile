width <- options("width")

rule <- function() cat(rep("=", width), "\n\n", sep = "")

rule()

## set library path
.libPaths("/Applications/iNZightVIT/.library")
pkgs <- c("iNZight", "iNZightPlots", "iNZightMR",
          "iNZightModules", "iNZightRegression", "iNZightTS",
          "iNZightTools")
repo <- c("http://r.docker.stat.auckland.ac.nz/R",
          "http://cran.stat.auckland.ac.nz")

## check GTK2.24 and XQuartz are installed ...
# if (!dir.exists("/Library/Frameworks/GTK+.framework/Versions/2.24.X11")) {
#   installGTK <- system("osascript -e 'display dialog \"iNZight cannot find GTK 2.24.\n\nWould you like to download and install it now?\" with title \"Updates Available\" buttons {\"Yes\", \"No\"} default button 2'", TRUE) == "button returned:Yes"
# R
#
#   if (installGTK) {
#     download.file("http://r.research.att.com/libs/GTK_2.24.17-X11.pkg",
#                   "~/Downloads/GTK_2.24.17-X11.pkg")
#     if (system("osascript -e 'display dialog \"GTK 2.24 has been downloaded to your Documents folder.\n\nWould you like to install it now?\n\n(Run iNZight again once GTK has been intalled).\" with title \"Updates Available\" buttons {\"Yes\", \"No\"} default button 2'", TRUE) == "button returned:Yes") {
#       system("open ~/Downloads/GTK_2.24.17-X11.pkg")
#       q("no")
#     }
#   }
# }



## check iNZight installed ...
if ( ! all(pkgs %in% utils::installed.packages()[, "Package"]) ) {
  cat("Installing iNZight files ...\n")
  utils::install.packages(pkgs, repos = repo,
                          lib = "/Applications/iNZightVIT/.library",
                          type = "binary", dependencies = TRUE)
  cat("Done!\n\n")
}

## check for updates ...
# upd <- utils::old.packages(repos = repo[1])
# if (!is.null(upd)) {
#   ## updates are available!
#   upd <- system("osascript -e 'display dialog \"Do you want update iNZight?\" with title \"Updates Available\" buttons {\"Yes\", \"No\"} default button 2'", TRUE) == "button returned:Yes"
#   if (upd) {
#     cat("Installing updates, please wait ...\n")
#     utils::update.packages(repos = repo[1], ask = FALSE)
#     cat("Done.\n\n")
#   }
# }

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
