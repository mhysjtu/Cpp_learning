#include <iostream>
#include "rational.h"
using namespace std;

int main(int argc, char const *argv[])
{
	int n, d;
	rational r1, r2, r3;
	cout << "please input the first rational number(num and den):";
	cin >> n >>d;
	r1.create(n,d);
	cout << "please input the second rational number(num and den):";
	cin >> n >>d;
	r2.create(n,d);
	r3.add(r1, r2);
	r1.display(); cout << "+";  r2.display();
	cout << "=";  r3.display(); cout<<endl;

	r3.multi(r1,r2);
	r1.display(); cout << "*";  r2.display();
	cout << "=";  r3.display(); cout<<endl;
	return 0;
}