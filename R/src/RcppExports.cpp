// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_BKKCrypt
CharacterVector rcpp_BKKCrypt(CharacterVector x);
RcppExport SEXP BKKCrypt_rcpp_BKKCrypt(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_BKKCrypt(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"BKKCrypt_rcpp_BKKCrypt", (DL_FUNC) &BKKCrypt_rcpp_BKKCrypt, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_BKKCrypt(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
