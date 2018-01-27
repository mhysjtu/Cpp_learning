#ifndef _rational_h
#define _rational_h
#include <iostream>
using namespace std;
class rational
{
private:
	int num;
	int den;
	void ReductFraction();
public:
	void create(int n, int d){num = n; den = d;}
	void add(const rational &r1, const rational &r2);
	void multi(const rational &r1, const rational &r2);
	void display(){cout<<num<<'/'<<den;}
	
};
#endif