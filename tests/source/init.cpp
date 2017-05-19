#include <complex.hpp>
#include <catch.hpp>


SCENARIO("complex init") 
{
	complex_number complex;
	REQUIRE(complex.real_() == 0);
	REQUIRE(complex.image_() == 0);
}
SCENARIO("complex with params") 
{
	complex_number complex(2,3);
	REQUIRE(complex.real_() == 2);
	REQUIRE(complex.image_() == 3);
}

SCENARIO("copy")
{
	complex_number ob (4, 4);
	complex_number od(ob);	
	REQUIRE(od.image_() ==4);
	REQUIRE(od.real_() == 4);
	
}

SCENARIO("+")
{
	complex_number A (4, 4);
	complex_number B(A);
	complex_number C(8, 8);
	REQUIRE(A+B== c);
}

SCENARIO("*") 
{
	complex_number B(3, 3);
 	complex_number A(1,1);
	complex_number C(0,6);
	REQUIRE(A*B==c);
}

SCENARIO("/") 
{
	complex_number B(3, 3), A(9,9), C(3, 0);
	REQUIRE(A/B==c);
}
SCENARIO("+=")
{
	complex_number A(4, 5);
	complex_number B(4, 5);
	complex_number C(8, 10);
	REQUIRE((A+=B)==C);
}

SCENARIO("-=")
{
	complex_number A(9, 9);
	complex_number B(4, 5);
	complex_number C(5, 4);
	REQUIRE((A-=B)==C);
}

SCENARIO("*=")
{
	complex_number A(4, 5);
	complex_number B(4, 5);
	complex_number C(-9, 40);
	REQUIRE((A*=B)==C);
}

SCENARIO("/=")
{
	complex_number A(4, 5);
	complex_number B(4, 5);
	complex_number C(1, 0);
	REQUIRE((A/=B)==C);
}
SCENARIO("==") 
{
	complex_number A(4, 3);
	complex_number B (A);
	bool f;
	if (A==B) 
		f=true;
	REQUIRE(f == true);
}

SCENARIO("=") {
	complex_number A(7, 5);
	complex_number F = A;
	REQUIRE(F == A);
}

SCENARIO("-") {
	complex_number a(5, 4), b(3, 3), f(2, 1);
	a-=b;
	REQUIRE(f == a);
}
SCENARIO("add")
{
	complex_number a (4, 4), b(a);
	complex_number c(8, 8);
	b=b.add(a);
	REQUIRE(b== c);
}
SCENARIO("mult") 
{
	complex_number b(3, 3), c(9,9);
	b=b.mult(3);
	REQUIRE(b==c);
}

SCENARIO("mydiv") 
{
	complex_number b(3, 3), c(1,1);
	b=b.mydiv(3);
	REQUIRE(b==c);
}
SCENARIO("dif") {
	complex_number a(9, 9), b(3, 3), f(6, 6);
	a=a.dif(b);
	REQUIRE(f == a);
}
