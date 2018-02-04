#include "circle.h"
#include "ball.h"
#include "cylinder.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	Circle c(3);
	Ball b(2);
	Cylinder cy(1,2);

	cout <<"circle:r="<< c.getr()<<endl;
	cout <<"area="<<c.area()<<"\tcircum="<<c.circum()<<endl;

	cout <<"ball:r="<<b.getr()<<endl;
	cout <<"area="<<b.area()<<"\tvolume="<<b.volume()<<endl;

	cout <<"cylinder:r="<<cy.getr()<<"\th="<<cy.geth()<<endl;
	cout <<"area="<<cy.area()<<"\tvolume="<<cy.volume()<<endl;
	return 0;
}