#include "complex.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	Complex x1, x2, x3;
	cout << "please input x1:" <<endl;
	cin >> x1;
	cout << "please input x2:" <<endl;
	cin >> x2;

	x3 = x1 + x2;
	cout << x1 << "+" << x2 << "=" << x3 << endl;
	return 0;
}