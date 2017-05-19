#include "complex.hpp"

complex_number::complex_number()
{
	real = 0;
	image = 0;
}
complex_number::complex_number(double r,double i)
{
	real = r;
	real = i;
}
complex_number::complex_number(const complex_number &ob)
{
	real = ob.real;
	image = ob.image;
}
double complex_number::real_()const
{
	return  real;
}
double complex_number::image_()const
{
	return image;
}
complex_number &complex_number :: operator+=(const complex_number &ob)
{

	real += ob.real;
	image += ob.image;
	return *this;
}
complex_number &complex_number :: operator=(const complex_number &ob)
{
	if (&ob == this) return *this;
	real = ob.real;
	image = ob.image;
	return *this;
}

complex_number &complex_number :: operator-=(const complex_number &ob)
{
	
	real -= ob.real;
	image -= ob.image;
	return *this;
}
complex_number complex_number::mult (int k)const
{
	return complex_number(real*k, k*image);
}
complex_number complex_number::mydiv(int l)const
{
	return complex_number(real/l, image/l);
}
complex_number complex_number::dif(complex_number c)const
{
	return complex_number(real - c.real, image - c.image);
}
complex_number complex_number::add(complex_number c)const
{
	return complex_number(real + c.real, image + c.image);
}
complex_number complex_number::operator * (const complex_number &ob)const
{
	return complex_number(real*ob.real - image*ob.image, real*ob.image + image*ob.real);
}
complex_number complex_number::operator / (const complex_number &ob)const
{
	return complex_number((real*ob.real + image*ob.image) / (ob.real*ob.real + ob.image*ob.image), (ob.real*image - real*ob.image) / (ob.real*ob.real + ob.image*ob.image));
}
complex_number &complex_number::operator /= (const complex_number &ob)
{
	double a = ((real*ob.real + image*ob.image) / (ob.real*ob.real + ob.image*ob.image));
	image = ((ob.real*image - real*ob.image) / (ob.real*ob.real + ob.image*ob.image));
	real = a;
	return *this;
}
complex_number &complex_number::operator *= (const complex_number &ob)
{
	double d = real*ob.real - image*ob.image;
	image = real*ob.image + image*ob.real;
	real = d;
	return *this;
}
bool complex_number::operator == (const  complex_number &ob)const
{
	if (real == ob.real && image == ob.image)
		return true;
	return false;
}
ostream &operator << (ostream &stream, const complex_number &ob)
{
	if (ob.image > 0)
	{
		stream << ob.real << " + " << ob.image << "*i" << endl;
	}
	else
	{
		stream << ob.real << "  " << ob.image << "*i" << endl;
	}
	return stream;
}

istream &operator >> (istream &stream, complex_number &ob)
{
	cout << "Ââåäèòå real êîìïëåêñíîãî ÷èñëà : ";
	stream >> ob.real;
	cout << "Ââåäèòå image êîìïëåêñíîãî ÷èñëà : ";
	stream >> ob.image;
	return stream;
}




