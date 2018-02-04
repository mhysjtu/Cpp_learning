#include "complex.h"
#include <iostream>
using namespace std; 

Complex operator+(Complex x, Complex y)
{
	Complex tmp;
	tmp.real = x.real + y.real;
	tmp.imag = x.imag + y.imag;

	return tmp;
}

istream &operator>>(istream &is, Complex &obj)
{
	cout << "please input the real part:" <<endl;
	is >> obj.real;
	cout << "please input the imag part:" << endl;
	is >> obj.imag;
	return is;
}

ostream &operator<<(ostream &os, const Complex &obj)
{
	cout << "(" << obj.real << "+" << obj.imag <<"i" << ")" <<endl;
	return os;
}