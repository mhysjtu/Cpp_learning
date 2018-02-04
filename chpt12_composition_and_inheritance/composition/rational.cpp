#include "rational.h"
#include <iostream>
using namespace std;

istream &operator >>(istream &is, rational &obj)
{
	cout << "please input a rational number:(num and den) "<< endl;
	is >> obj.num >> obj.den; 
	obj.ReductFraction();
	return is;
}

ostream &operator <<(ostream &os, const rational &obj)
{
	os << obj.num << "/" << obj.den;
	return os;
}

rational operator+(const rational &r1, const rational &r2)
{
	rational tmp;
	tmp.num = r1.num* r2.den + r2.num* r1.den;
	tmp.den = r1.den* r2.den;
	tmp.ReductFraction();
	return tmp;
}

rational operator*(const rational &r1, const rational &r2)
{
	rational tmp;
	tmp.num = r1.num* r2.num;
	tmp.den = r1.den* r2.den;
	tmp.ReductFraction();
	return tmp;
}

void rational::ReductFraction()
{
	int tmp = (num > den) ? den :num;
	for (;tmp > 1; --tmp)
		if (num % tmp == 0 && den % tmp == 0)
		{
			num /= tmp;
			den /= tmp;
			break;
		}
}