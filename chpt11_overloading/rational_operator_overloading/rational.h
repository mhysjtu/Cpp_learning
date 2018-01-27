#ifndef _rational_h
#define _rational_h
#include <iostream>
using namespace std;
class rational
{

	friend istream &operator>>(istream &in, rational &obj);
	friend ostream &operator<<(ostream &os, const rational &obj);
	friend rational operator+(const rational &r1, const rational &r2);
	friend rational operator*(const rational &r1, const rational &r2);

private:
	int num;
	int den;
	void ReductFraction();

public:
	rational(int n = 0, int d = 1){num = n; den = d;}
	//重载类型转换函数，使得不用重载比较函数也能进行有理数的比较
	operator double() const {return (double(num)/den);}
	
};
#endif