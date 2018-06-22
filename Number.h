#ifndef NUMBER_H
#define NUMBER_H
using namespace std;

class Number
{
	public:
	Number();
	~Number();
	virtual void print()=0;
};

class RealNumber: public Number
{
	public:
	RealNumber(double);
	~RealNumber();
	virtual void print();
	RealNumber add(const RealNumber&);
	RealNumber mul(const RealNumber&);
	double rn;
};

class IntegerNumber:public RealNumber
{
	public:
	IntegerNumber(int);
	IntegerNumber(const RealNumber&);
	~IntegerNumber();
};

class ComplexNumber:public Number
{
	public:
	ComplexNumber(double,double);
	~ComplexNumber();
	virtual void print();
	ComplexNumber add(const ComplexNumber&);
	ComplexNumber mul(const ComplexNumber&);
	private:
	double a,b;
};

#endif
