#include "point2.h"

Point::Point(int a, int b)
{
	x = a; y = b;
	cout << "Point constructor:" <<'[' <<x<<","<<y<<']'<<endl;
}

Point::~Point()
{
	cout << "Point destructor:" <<'[' <<x<<","<<y<<']'<<endl;
}