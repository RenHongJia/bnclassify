% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/predict.R
\name{predict.bnc_fit}
\alias{predict.bnc_fit}
\title{Predicts class labels or class posterior probability distributions.}
\usage{
\method{predict}{bnc_fit}(object, newdata, prob = FALSE, ...)
}
\arguments{
\item{object}{A \code{\link{bnc_bn}} object.}

\item{newdata}{A data frame containing observations whose class has to be 
predicted.}

\item{prob}{A logical. Whether class posterior probability should be returned.}

\item{...}{Ignored.}
}
\value{
If \code{prob=FALSE}, then returns a length-\eqn{N} factor with the 
 same levels as the class variable in \code{x}, where \eqn{N} is the number 
 of rows in \code{newdata}. Each element is the most likely 
 class for the corresponding row in \code{newdata}. If \code{prob=TRUE}, 
 returns a \eqn{N} by \eqn{C} numeric matrix, where \eqn{C} is the number of 
 classes; each row corresponds to the class posterior of the instance.
}
\description{
Predicts class labels or class posterior probability distributions.
}
\details{
Ties are resolved randomly. Inference is much slower if
\code{newdata} contains \code{NA}s.
}
\examples{
data(car)
nb <- bnc('nb', 'class', car, smooth = 1)
p <- predict(nb, car)
head(p)
p <- predict(nb, car, prob = TRUE)
head(p)
}
