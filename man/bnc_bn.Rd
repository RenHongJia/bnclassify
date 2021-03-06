% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/0bnclassify-doc.R
\name{bnc_bn}
\alias{bnc_bn}
\title{Bayesian network classifier with structure and parameters.}
\description{
A Bayesian network classifier with structure and parameters. Returned by 
\code{\link{lp}} and \code{\link{bnc}} functions. You can use it to classify
data (with \code{\link[=predict.bnc_fit]{predict}}). Can estimate its
predictive accuracy with \code{\link{cv}}, plot its structure (with 
\code{\link[=plot.bnc_dag]{plot}}), print a summary to console 
(\code{\link[=print.bnc_base]{print}}), inspect it with functions documented 
in \code{\link{inspect_bnc_bn}} and \code{\link{inspect_bnc_dag}}, and
convert it to mlr, grain, and graph objects --see \code{\link{as_mlr}} and 
\code{\link{grain_and_graph}}.
}
\examples{
data(car)
tan <- bnc('tan_cl', 'class', car, smooth = 1)   
tan
p <- predict(tan, car)
head(p)
\dontrun{plot(tan)}
nparams(tan)
}
