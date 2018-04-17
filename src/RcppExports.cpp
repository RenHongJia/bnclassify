// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// are_disjoint
bool are_disjoint(Nullable<CharacterVector> x, Nullable<CharacterVector> y);
RcppExport SEXP _bnclassify_are_disjoint(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Nullable<CharacterVector> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Nullable<CharacterVector> >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(are_disjoint(x, y));
    return rcpp_result_gen;
END_RCPP
}
// normalize
NumericVector normalize(NumericVector& x);
RcppExport SEXP _bnclassify_normalize(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(normalize(x));
    return rcpp_result_gen;
END_RCPP
}
// normalize_ctgt
NumericVector normalize_ctgt(NumericVector& ctgt);
RcppExport SEXP _bnclassify_normalize_ctgt(SEXP ctgtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type ctgt(ctgtSEXP);
    rcpp_result_gen = Rcpp::wrap(normalize_ctgt(ctgt));
    return rcpp_result_gen;
END_RCPP
}
// test_make
void test_make(CharacterVector vertices, Rcpp::IntegerMatrix edges);
RcppExport SEXP _bnclassify_test_make(SEXP verticesSEXP, SEXP edgesSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type vertices(verticesSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type edges(edgesSEXP);
    test_make(vertices, edges);
    return R_NilValue;
END_RCPP
}
// test_connected
void test_connected();
RcppExport SEXP _bnclassify_test_connected() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    test_connected();
    return R_NilValue;
END_RCPP
}
// make_cpt
NumericVector make_cpt(NumericVector cpt, const CharacterVector features, const CharacterVector class_var, const CharacterVector columns_db, DataFrame df);
RcppExport SEXP _bnclassify_make_cpt(SEXP cptSEXP, SEXP featuresSEXP, SEXP class_varSEXP, SEXP columns_dbSEXP, SEXP dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type cpt(cptSEXP);
    Rcpp::traits::input_parameter< const CharacterVector >::type features(featuresSEXP);
    Rcpp::traits::input_parameter< const CharacterVector >::type class_var(class_varSEXP);
    Rcpp::traits::input_parameter< const CharacterVector >::type columns_db(columns_dbSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    rcpp_result_gen = Rcpp::wrap(make_cpt(cpt, features, class_var, columns_db, df));
    return rcpp_result_gen;
END_RCPP
}
// df2matrix
IntegerMatrix df2matrix(DataFrame x);
RcppExport SEXP _bnclassify_df2matrix(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(df2matrix(x));
    return rcpp_result_gen;
END_RCPP
}
// get_instance
NumericVector get_instance(NumericVector cpt, const CharacterVector features, const CharacterVector class_var, const CharacterVector columns_db, DataFrame df);
RcppExport SEXP _bnclassify_get_instance(SEXP cptSEXP, SEXP featuresSEXP, SEXP class_varSEXP, SEXP columns_dbSEXP, SEXP dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type cpt(cptSEXP);
    Rcpp::traits::input_parameter< const CharacterVector >::type features(featuresSEXP);
    Rcpp::traits::input_parameter< const CharacterVector >::type class_var(class_varSEXP);
    Rcpp::traits::input_parameter< const CharacterVector >::type columns_db(columns_dbSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    rcpp_result_gen = Rcpp::wrap(get_instance(cpt, features, class_var, columns_db, df));
    return rcpp_result_gen;
END_RCPP
}
// get_row
NumericVector get_row(NumericVector cpt, const CharacterVector features, const CharacterVector class_var, const CharacterVector columns_db, DataFrame df);
RcppExport SEXP _bnclassify_get_row(SEXP cptSEXP, SEXP featuresSEXP, SEXP class_varSEXP, SEXP columns_dbSEXP, SEXP dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type cpt(cptSEXP);
    Rcpp::traits::input_parameter< const CharacterVector >::type features(featuresSEXP);
    Rcpp::traits::input_parameter< const CharacterVector >::type class_var(class_varSEXP);
    Rcpp::traits::input_parameter< const CharacterVector >::type columns_db(columns_dbSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    rcpp_result_gen = Rcpp::wrap(get_row(cpt, features, class_var, columns_db, df));
    return rcpp_result_gen;
END_RCPP
}
// predict_rcpp
NumericVector predict_rcpp(List model, const DataFrame& dataset);
RcppExport SEXP _bnclassify_predict_rcpp(SEXP modelSEXP, SEXP datasetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type model(modelSEXP);
    Rcpp::traits::input_parameter< const DataFrame& >::type dataset(datasetSEXP);
    rcpp_result_gen = Rcpp::wrap(predict_rcpp(model, dataset));
    return rcpp_result_gen;
END_RCPP
}
// make_dataset
void make_dataset(DataFrame df);
RcppExport SEXP _bnclassify_make_dataset(SEXP dfSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    make_dataset(df);
    return R_NilValue;
END_RCPP
}
// get_dataset
double get_dataset(DataFrame df, int i, int j);
RcppExport SEXP _bnclassify_get_dataset(SEXP dfSEXP, SEXP iSEXP, SEXP jSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< int >::type i(iSEXP);
    Rcpp::traits::input_parameter< int >::type j(jSEXP);
    rcpp_result_gen = Rcpp::wrap(get_dataset(df, i, j));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_bnclassify_are_disjoint", (DL_FUNC) &_bnclassify_are_disjoint, 2},
    {"_bnclassify_normalize", (DL_FUNC) &_bnclassify_normalize, 1},
    {"_bnclassify_normalize_ctgt", (DL_FUNC) &_bnclassify_normalize_ctgt, 1},
    {"_bnclassify_test_make", (DL_FUNC) &_bnclassify_test_make, 2},
    {"_bnclassify_test_connected", (DL_FUNC) &_bnclassify_test_connected, 0},
    {"_bnclassify_make_cpt", (DL_FUNC) &_bnclassify_make_cpt, 5},
    {"_bnclassify_df2matrix", (DL_FUNC) &_bnclassify_df2matrix, 1},
    {"_bnclassify_get_instance", (DL_FUNC) &_bnclassify_get_instance, 5},
    {"_bnclassify_get_row", (DL_FUNC) &_bnclassify_get_row, 5},
    {"_bnclassify_predict_rcpp", (DL_FUNC) &_bnclassify_predict_rcpp, 2},
    {"_bnclassify_make_dataset", (DL_FUNC) &_bnclassify_make_dataset, 1},
    {"_bnclassify_get_dataset", (DL_FUNC) &_bnclassify_get_dataset, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_bnclassify(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
