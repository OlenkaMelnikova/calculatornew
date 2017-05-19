#include <iostream>
#include <cstdlib>
using namespace std;

class complex_number
{
private:
	double real, image;
public:
	complex_number();
	complex_number(double a, double b);
	complex_number(const complex_number &ob);
	double real_()const;
	double image_()const;
	complex_number &operator+=(const complex_number &ob);
	complex_number &operator=(const complex_number &ob);
	complex_number &operator-=(const complex_number &ob);
	complex_number operator * (const complex_number &ob)const;
	complex_number operator / (const complex_number &ob)const;
	complex_number mult(int k)const;
	complex_number dif(complex_number c)const;
	complex_number add(complex_number c)const;
	complex_number mydiv(int l)const;
	complex_number &operator /= (const complex_number &ob);
	complex_number &operator *= (const complex_number &ob);
	bool operator == (const complex_number &ob)const;
	friend ostream &operator<<(ostream &stream, const complex_number &ob);
	friend istream &operator>>(istream &stream, complex_number &ob);
};
