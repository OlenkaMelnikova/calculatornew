#include <calculator.hpp>
#include <catch.hpp>

SCENARIO("calculator sum", "[sum]") {
    float a = 4.0;
    float b = 8.0;
    
    double rv = sum( a, b );
    
	REQUIRE( rv == 12.0 );
}
SCENARIO("calculator sub", "[sub]") {
    float a = 4.0;
    float b = 8.0;
    
    double rv = sub( a, b );
    
	REQUIRE( rv == -4.0 );
}
SCENARIO("calculator pow1", "[pow1]") {
    float a = 4.0;
    float b = 8.0;
    
    double rv = pow1( a, b );
    
	REQUIRE( rv == 32.0 );
}
SCENARIO("calculator dev", "[dev]") {
    float a = 4.0;
    float b = 8.0;
    
    double rv = dev( a, b );
    
	REQUIRE( rv == 0.5 );
}
SCENARIO("calculator involution", "[involution]") {
    float a = 4.0;
    float b = 8.0;
    
    double rv = involution( a, b );
    
	REQUIRE( rv == 65536.0 );
}
SCENARIO("calculator sqrt1", "[sqrt1]") {
    float a = 4.0;
    float b = 8.0;
    
    double rv = sqrt1( a, b );
    
	REQUIRE( rv == 2.0 );

}
