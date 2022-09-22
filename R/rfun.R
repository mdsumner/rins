
#' Title
#'
#' @param x
#'
#' @return
#' @export
#' @useDynLib 'rins', .registration = TRUE
#' @import Rcpp
#' @examples
rfun <- function(x = 1) {
  doit(x)
}
