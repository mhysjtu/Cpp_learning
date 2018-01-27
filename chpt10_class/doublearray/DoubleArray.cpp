#include "DoubleArray.h"

bool DoubleArray::insert(int index, double value)
{
	if (index < low || index > high)return false;
	storage[index - low] = value;
	return true;
}

//一定要用&value 否则无法改变函数外value的值
bool DoubleArray::fatch(int index, double &value)
{
	if(index < low || index > high)return false;
	value = storage[index - low];
	return true;
}