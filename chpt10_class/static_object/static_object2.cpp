#include "static_object2.h"

int main(int argc, char const *argv[])
{
	StaticSample::display();
	StaticSample s1, s2;
	StaticSample::display();
	StaticSample *p1 = new StaticSample, *p2 = new StaticSample;
	s1.display();
	delete p1;
	p2 -> display();
	delete p2;
	StaticSample::display();
	return 0;
}