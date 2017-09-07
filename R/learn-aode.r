 #' Learn an AODE ensemble.
#' 
#' If there is a single predictor then returns a naive Bayes.
#' 
#' @param m integer The minimum frequency of an value \eqn{x_i} in order to use 
#'   SPODE \eqn{i} in the ensemble.
#' @keywords internal
#' @return \code{bnc_aode} or \code{bnc_str}
aode <- function(class_var, features, m = 1, ...) {    
  names(features) <- features
  if (length(features) == 1) return(nb(class = class_var, features = features))
  models <- lapply(features, spode, features, class_var)
  bnc_aode_str(models = models, m = m, class_var = class_var)
} 
#' #' Is it en AODE?
#' #' 
#' #' @keywords internal
#' is_aode <- function(x) {  
#'   # if (!inherits(x, c('bnc_aode_str', 'bnc_aode'))) return (FALSE)    
#'   # if (length(x$models) < 2) return (FALSE)  
#'   # all(sapply(x$models, is_ode)) Should be is spode
#'   return 
#' }  
#' Returns a Superparent one-dependence estimator. 
#' 
#' @param sp character The superparent.
#' @keywords internal
spode <- function(sp, features, class) {
  stopifnot(length(sp) == 1)
  stopifnot(length(class) == 1)
  stopifnot(class != sp)
  stopifnot(!class %in% features)
  features <- setdiff(features, sp)
  features_graph <- nb_dag(class = sp, features = features)
  superimpose_node(node = class, dag = features_graph)
}
#' Returns a \code{c("bnc_aode_str", "bnc")} object.
#' @keywords internal
bnc_aode_str <- function(models, m, class_var, log_struct = NULL) {
  stopifnot(is.numeric(m))
  stopifnot(length(models) > 0)
  stopifnot(all(vapply(models, is_ode, FUN.VALUE = logical(1))))
  features <- models[[1]]$features
  bnc <- bnc_const(class_var = class_var, features = features, 
                   log_struct = log_struct)
  bnc$models <- models
  bnc$m <- m
  class(bnc) <- c('bnc_aode_str', class(bnc))
  bnc
}
#' Fits an AODE model.
#' @keywords internal
bnc_aode <- function(x, fit_models, freqs) {
  stopifnot(inherits(x, 'bnc_aode_str'))
  x$models <- fit_models
  x$freqs <- freqs
  class(x) <- c('bnc_aode', 'bnc_fit', class(x))
  x
}