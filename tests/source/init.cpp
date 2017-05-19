#include <complex.hpp>
#include <catch.hpp>


SCENARIO("complex init") 
{
	TComplex complex;
	REQUIRE(complex.real_() == 0);
	REQUIRE(complex.imaginary_() == 0);
}
SCENARIO("param") 
{
	complex a(2, 2);
	REQUIRE(a.im() == 2);
	REQUIRE(a.re() == 2);
}

SCENARIO("copy")
{
	complex a (4, 4), b(a);	
	REQUIRE(a.im() ==b.im());
	REQUIRE(a.re() == b.re());
	
}

SCENARIO("+")
{
	complex a (4, 4), b(a);
	complex c(8, 8);
	b+=a;
	REQUIRE(b== c);
}

SCENARIO("*") 
{
	complex b(3, 3), a(1,1), c(0,6);
	b*=a;
	REQUIRE(b==c);
}

SCENARIO("/") 
{
	complex b(3, 3), a(9,9), c(3, 0);
	a/=b;
	REQUIRE(a==c);
}

SCENARIO("==") 
{
	complex a(4, 3);
	complex b (a);
	REQUIRE(a == b);
}

SCENARIO("=") {
	complex a(7, 5);
	complex f = a;
	REQUIRE(f == a);
}

SCENARIO("-") {
	complex a(5, 4), b(3, 3), f(2, 1);
	a-=b;
	REQUIRE(f == a);
}
SCENARIO("add")
{
	complex a (4, 4), b(a);
	complex c(8, 8);
	b=b.add(a);
	REQUIRE(b== c);
}
SCENARIO("mult") 
{
	complex b(3, 3), c(9,9);
	b=b.mult(3);
	REQUIRE(b==c);
}

SCENARIO("mydiv") 
{
	complex b(3, 3), c(1,1);
	b=b.mydiv(3);
	REQUIRE(b==c);
}
SCENARIO("dif") {
	complex a(9, 9), b(3, 3), f(6, 6);
	a=a.dif(b);
	REQUIRE(f == a);
}
