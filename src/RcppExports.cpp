// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/distancethreshold.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// dftomat
arma::mat dftomat(DataFrame obj, CharacterVector cols);
RcppExport SEXP _distancethreshold_dftomat(SEXP objSEXP, SEXP colsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type obj(objSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type cols(colsSEXP);
    rcpp_result_gen = Rcpp::wrap(dftomat(obj, cols));
    return rcpp_result_gen;
END_RCPP
}
// threshold_distance
List threshold_distance(DataFrame obj, double threshold, CharacterVector cols, String id_col, bool check_id, String distance_type);
static SEXP _distancethreshold_threshold_distance_try(SEXP objSEXP, SEXP thresholdSEXP, SEXP colsSEXP, SEXP id_colSEXP, SEXP check_idSEXP, SEXP distance_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< DataFrame >::type obj(objSEXP);
    Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type cols(colsSEXP);
    Rcpp::traits::input_parameter< String >::type id_col(id_colSEXP);
    Rcpp::traits::input_parameter< bool >::type check_id(check_idSEXP);
    Rcpp::traits::input_parameter< String >::type distance_type(distance_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(threshold_distance(obj, threshold, cols, id_col, check_id, distance_type));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _distancethreshold_threshold_distance(SEXP objSEXP, SEXP thresholdSEXP, SEXP colsSEXP, SEXP id_colSEXP, SEXP check_idSEXP, SEXP distance_typeSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_distancethreshold_threshold_distance_try(objSEXP, thresholdSEXP, colsSEXP, id_colSEXP, check_idSEXP, distance_typeSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// threshold_distance2
List threshold_distance2(DataFrame left_obj, DataFrame right_obj, double threshold, CharacterVector cols, String distance_type);
static SEXP _distancethreshold_threshold_distance2_try(SEXP left_objSEXP, SEXP right_objSEXP, SEXP thresholdSEXP, SEXP colsSEXP, SEXP distance_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< DataFrame >::type left_obj(left_objSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type right_obj(right_objSEXP);
    Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type cols(colsSEXP);
    Rcpp::traits::input_parameter< String >::type distance_type(distance_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(threshold_distance2(left_obj, right_obj, threshold, cols, distance_type));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _distancethreshold_threshold_distance2(SEXP left_objSEXP, SEXP right_objSEXP, SEXP thresholdSEXP, SEXP colsSEXP, SEXP distance_typeSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_distancethreshold_threshold_distance2_try(left_objSEXP, right_objSEXP, thresholdSEXP, colsSEXP, distance_typeSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}

// validate (ensure exported C++ functions exist before calling them)
static int _distancethreshold_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("List(*threshold_distance)(DataFrame,double,CharacterVector,String,bool,String)");
        signatures.insert("List(*threshold_distance2)(DataFrame,DataFrame,double,CharacterVector,String)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _distancethreshold_RcppExport_registerCCallable() { 
    R_RegisterCCallable("distancethreshold", "_distancethreshold_threshold_distance", (DL_FUNC)_distancethreshold_threshold_distance_try);
    R_RegisterCCallable("distancethreshold", "_distancethreshold_threshold_distance2", (DL_FUNC)_distancethreshold_threshold_distance2_try);
    R_RegisterCCallable("distancethreshold", "_distancethreshold_RcppExport_validate", (DL_FUNC)_distancethreshold_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_distancethreshold_dftomat", (DL_FUNC) &_distancethreshold_dftomat, 2},
    {"_distancethreshold_threshold_distance", (DL_FUNC) &_distancethreshold_threshold_distance, 6},
    {"_distancethreshold_threshold_distance2", (DL_FUNC) &_distancethreshold_threshold_distance2, 5},
    {"_distancethreshold_RcppExport_registerCCallable", (DL_FUNC) &_distancethreshold_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_distancethreshold(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
