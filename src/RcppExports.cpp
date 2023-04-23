// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// register_images
void register_images(Rcpp::String ref_image, Rcpp::String query_image, const float GOOD_MATCH_PERCENT, const int MAX_FEATURES);
RcppExport SEXP _spaceRover_register_images(SEXP ref_imageSEXP, SEXP query_imageSEXP, SEXP GOOD_MATCH_PERCENTSEXP, SEXP MAX_FEATURESSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type ref_image(ref_imageSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type query_image(query_imageSEXP);
    Rcpp::traits::input_parameter< const float >::type GOOD_MATCH_PERCENT(GOOD_MATCH_PERCENTSEXP);
    Rcpp::traits::input_parameter< const int >::type MAX_FEATURES(MAX_FEATURESSEXP);
    register_images(ref_image, query_image, GOOD_MATCH_PERCENT, MAX_FEATURES);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_spaceRover_register_images", (DL_FUNC) &_spaceRover_register_images, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_spaceRover(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
