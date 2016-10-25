#include <calculator.hpp>
#include <catch.hpp>

SCENARIO("calculator sum", "[sum]") {
    float a = 4.0;
    float b = 17.0;
    
    double rv = sum( a, b );
    
	REQUIRE( rv == 21.0 );
}
SCENARIO("calculator sub", "[sub]") {
    float a = 4.0;
    float b = 17.0;
    
    double rv = sub( a, b );
    
	REQUIRE( rv == -13.0 );
}
SCENARIO("calculator pow1", "[pow1]") {
    float a = 4.0;
    float b = 17.0;
    
    double rv = pow1( x, y );
    
	REQUIRE( rv == 68.0 );
}
SCENARIO("calculator dev", "[dev]") {
    float a = 4.0;
    float b = 17.0;
    
    double rv = dev( a, b );
    
	REQUIRE( rv == 0.235294 );
}
SCENARIO("calculator sqrt1", "[sqrt1]") {
    float a = 4.0;
    float b = 17.0;
    
    double rv = sqrt1( a, b );
    
	REQUIRE( rv == 2.0 );

}
