% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/0bnclassify-doc.R
\name{bnc_dag}
\alias{bnc_dag}
\title{Bayesian network classifier structure.}
\description{
A Bayesian network classifier structure, returned by functions such as 
\code{\link{nb}} and \code{\link{tan_cl}}. You can plot its structure (with 
\code{\link[=plot.bnc_dag]{plot}}), print a summary to console 
(\code{\link[=print.bnc_base]{print}}), inspect it with functions documented
in \code{\link{inspect_bnc_dag}}, and convert it to a graph object with 
\code{\link{grain_and_graph}}.
}
\examples{
data(car)
nb <- tan_cl('class', car)   
nb
\dontrun{plot(nb)}
narcs(nb)
}
