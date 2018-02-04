#ifndef CYLINDER_H
#define CYLINDER_H
#include "circle.h"

class Cylinder : public Circle
{
	double height;
public:
	Cylinder(double r = 0, double h = 0):Circle(r){height = h;}
	double geth(){return height;}
	double area(){return 2*Circle::area()+circum()*height;}
	double volume(){return Circle::area()*height;}
	~Cylinder(){}
	
};

#endif