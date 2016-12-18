#include <calculator.hpp>
#include <catch.hpp>

SCENARIO("calculator sum", "[sum]") {
    double a = 5.0;
    double b = 8.0;
    int c = 2;
    double rv = sum( a, b );
    
	REQUIRE( rv == 13.0 );
}
SCENARIO("calculator sub", "[sub]") {
    double a = 5.0;
    double b = 8.0;
    int c = 2;
    float rv = sub( a, b );
    
	REQUIRE( rv == -3.0 );
}
SCENARIO("calculator pow1", "[pow1]") {
    double a = 5.0;
    double b = 8.0;
    int c = 2;
    
    float rv = pow1( a, b );
    
	REQUIRE( rv == 40.0 );
}
SCENARIO("calculator dev", "[dev]") {
    double a = 5.0;
    double b = 0;
    int c = 2;
    
    double *rv = dev( a, b );
    
	REQUIRE( rv == nullptr );
}
SCENARIO("calculator involution", "[involution]") {
    double a = 5.0;
    double b = 8.0;
    int c = -2;
    
    double rv = involution( a, c );
    
	REQUIRE( rv == 0.04 );
}
SCENARIO("calculator sqrt1", "[sqrt1]") {
   double a = -5;
    double b = 8.0;
    int c = 2;	
    
    double *rv = sqrt1( a );
    	
REQUIRE( rv == nullptr );
}
