#ifndef _doublearray_h
#define _doublearray_h 

#include <iostream>
using namespace std;

class DoubleArray{

	//重载输出流函数为友元函数(全局)
	friend ostream &operator<<(ostream &os, const DoubleArray &obj);

	//重载输入流函数为友元函数(全局)
	//可以取代原先的insert功能
	friend istream &operator>>(istream &is, DoubleArray &obj);

	//重载比较函数为友元函数
	friend bool operator==(const DoubleArray &obj1, const DoubleArray &obj2);

private:

	int low;
	int high;
	double *storage;

public:

	DoubleArray(int lh, int rh):low(lh), high(rh)
	{storage = new double [high - low + 1];}

	//重载构造函数
	DoubleArray(const DoubleArray &arr);

	//重载赋值运算符为成员函数
	DoubleArray &operator=(const DoubleArray &right);

	//重载下标运算符为成员函数
	//可以取代原先的fatch功能
	double &operator[](int index);
	const double &operator[](int index)const;

	//重载函数调用运算符为成员函数
	//可以取出原数组的子集
	DoubleArray operator()(int start, int end, int lh);

	~DoubleArray(){delete [] storage;}
};
#endif