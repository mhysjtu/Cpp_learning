#include "rational.h"

void rational::add(const rational &r1, const rational &r2)
{
	num = r1.num * r2.den + r2.num * r1.den;
	den = r1.den * r2.den;
	ReductFraction();
}

void rational::multi(const rational &r1, const rational &r2)
{
	num = r1.num * r2.num;
	den = r1.den * r2.den;
	ReductFraction();
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