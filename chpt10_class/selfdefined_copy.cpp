#include <iostream>
using namespace std;
class point
{
	int x,y;
public:
	point(int a, int b){x=a;y=b;}
	point(const point &p) {x=2*p.x;y=2*p.y;}
	void print(){cout << x << " " << y <<endl;}

	
};

int main(int argc, char const *argv[])
{
	point p1(10,20),p2(p1),p3 = p1,p4(1,2);
	p1.print();
	//p2(p1)和p3=p1这两种定义对象的方式都会用到拷贝构造函数
	//因为p2、p3之前不存在
	p2.print();
	p3.print();
	p4.print();
	//但用对象1赋值给已经定义过的对象4，就不会调用拷贝构造函数
	//因为p4已经存在(此处p4换成p2,p3也是一样的)
	p4 = p1;
	p4.print();
	return 0;
}