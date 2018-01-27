#ifndef _doublearray_h
#define _doublearray_h 

#include <iostream>
using namespace std;

class DoubleArray{
	int low;
	int high;
	double *storage;
public:
	DoubleArray(int lh, int rh):low(lh), high(rh)
	{storage = new double [high - low + 1];}

	bool insert(int index, double value);
	
	bool fatch(int index, double &value);

	~DoubleArray(){delete [] storage;}
};
#endif