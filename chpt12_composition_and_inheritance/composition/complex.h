#ifndef _Complex_h
#define _Complex_h

#include <iostream>
#include "rational.h"
using namespace std;

class Complex
{
	friend Complex operator+(Complex x, Complex y);
	friend istream &operator>>(istream &is, Complex &obj);
	friend ostream &operator<<(ostream &os, const Complex &obj);

	rational real;
	rational imag;
public:
	Complex(int r1 = 0, int r2 = 1, int i1 = 0, int i2 = 1):
									real(r1, r2), imag(i1, i2){}							
	
};

#endif