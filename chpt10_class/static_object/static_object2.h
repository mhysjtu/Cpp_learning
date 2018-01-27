#ifndef  _StaticSample_h
#define _StaticSample_h 
#include <iostream>
using namespace std;
class StaticSample
{
private:
	static int obj_count;
	static int obj_living;
public:
	StaticSample(){++obj_count; ++obj_living;}
	~StaticSample(){--obj_living;}
	static void display()
	{
		cout << "total num of objects: " << obj_count << "\tnum of living objects: " 
			 << obj_living << endl;
	}
	
};
int StaticSample::obj_count = 0;
int StaticSample::obj_living = 0;
#endif