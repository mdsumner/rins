#include <Rcpp.h>
using namespace Rcpp;
#include <RInside.h>                    // for the embedded R via RInside
// [[Rcpp::export]]
IntegerVector doit(int argc) {

  char *argv[1];
    RInside R(argc, argv);              // create an embedded R instance

    R["txt"] = "Hello, world!\n";	    // assign a char* (string) to 'txt'

    R.parseEvalQ("cat(txt)");           // eval the init string, ignoring any returns

    //exit(0);
    return IntegerVector::create(0);
}
