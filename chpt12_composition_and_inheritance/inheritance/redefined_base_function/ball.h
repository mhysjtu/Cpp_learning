#ifndef  BALL_H
#define BALL_H 
#include "circle.h"

class Ball : public Circle
{
public:
	Ball(double r=0): Circle(r){}
	double area(){return 4*3.14*radius*radius;}
	double volume(){return 4*3.14*radius*radius*radius/3;}
	~Ball(){}
	
};

#endif