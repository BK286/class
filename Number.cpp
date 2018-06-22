#include "Number.h"
#include <iostream>
using namespace std;
Number::Number()
{
}

Number::~Number()
{
}

RealNumber::RealNumber(double a=0)
{
	rn=a;
}

RealNumber::~RealNumber()
{
}

void RealNumber::print()
{
	cout << rn << endl;
}

RealNumber RealNumber::add(const RealNumber& a)
{
	return RealNumber(rn+a.rn);
}

RealNumber RealNumber::mul(const RealNumber& a)
{
	return RealNumber(rn*a.rn);
}

IntegerNumber::IntegerNumber(int a=0)
{
	rn=a;
}

IntegerNumber::IntegerNumber(const RealNumber& a)
{
	rn =int(a.rn);
}

IntegerNumber::~IntegerNumber()
{
}

ComplexNumber::ComplexNumber(double m=0,double n=0)
{
	a=m;
	b=n;
}

ComplexNumber::~ComplexNumber()
{
}

ComplexNumber ComplexNumber::add(const ComplexNumber& m)
{
	return ComplexNumber(a+m.a,b+m.b);
}

ComplexNumber ComplexNumber::mul(const ComplexNumber& m)
{
	return ComplexNumber(a*m.a-b*m.b,a*m.b+b*m.a);
}

void ComplexNumber::print()
{
	cout << a << "+" << b << "i" << endl;
}
