#ifndef POINT2_H
#define POINT2_H
#include <iostream>
using namespace std;

class Point
{
public:
	Point(int = 0, int = 0);
	~Point();
protected:
	int x,y;
	
};

#endif