#ifndef CIRCLE2_H
#define CIRCLE2_H
#include <iostream>
using namespace std;
#include "point2.h"

class Circle : public Point
{
public:
	Circle(double r=0.0, int x=0, int y=0);
	~Circle();
private:
	double radius;
	
};

#endif