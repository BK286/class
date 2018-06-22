#include "Number.h"
#include <iostream>
using namespace std;

int main()
{
	RealNumber a(7.9), b(6.6);
	RealNumber c = a.add(b);
	RealNumber d = a.mul(b);
	c.print();
	d.print();
	IntegerNumber a1(7), b1(6);
	IntegerNumber c1= a1.add(b1);
	IntegerNumber d1 = a1.mul(b1);
	c1.print();
	d1.print();
	ComplexNumber a2(3,7), b2(6,4);
	ComplexNumber c2= a2.add(b2);
	ComplexNumber d2 = a2.mul(b2);
	c2.print();
	d2.print();
}
