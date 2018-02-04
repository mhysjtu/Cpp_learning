#include "circle2.h"



Circle::Circle(double r, int a, int b) : Point(a,b)
{
	radius = r;
	cout << "Circle constructor: radius is" << radius << "[" <<x <<","<<y<<']'<<endl;
}

Circle::~Circle()
{
	cout << "Circle destructor: radius is" << radius <<"["<<x <<","<<y<<']'<<endl;
}
