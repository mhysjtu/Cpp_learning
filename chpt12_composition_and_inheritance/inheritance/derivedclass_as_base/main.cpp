#include <iostream>
using namespace std;

class base
{
	int x;
public:
	base(int a){x=a;cout << "constructing base\n";}
	~base(){cout << "destructing base\n";}
	
};

class derived1:public base
{
	int y;
public:
	derived1(int a, int b):base(a){y=b;cout <<"constructing derived1\n";}
	~derived1(){cout <<"destructing derived1\n";}
	
};

class derived2:public derived1
{
	int z;
public:
	derived2(int a, int b, int c):derived1(a,b){z=c;cout <<"constructing derived2\n";}
	~derived2(){cout << "destructing derived2\n";}
	
};

int main(int argc, char const *argv[])
{
	derived2 ob(1,2,3);
	return 0;
}