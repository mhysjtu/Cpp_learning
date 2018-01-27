#include "DoubleArray.h"
#include <cassert>

//重载构造函数
DoubleArray::DoubleArray(const DoubleArray &arr)
{
	low = arr.low;
	high = arr.high;
	storage = new double [high - low + 1];
	for(int i = 0; i < high - low + 1; ++i)
	{
		storage[i] = arr.storage[i];
	}

}

//重载赋值运算符
//必须重载为成员函数
//解决了浅拷贝问题
DoubleArray &DoubleArray::operator=(const DoubleArray &a)
{
	if (this == &a)return *this;

	delete [] storage;
	low = a.low; high = a.high;
	storage = new double [high - low + 1];
	for (int i = 0; i <= high - low; ++i)
	{
		storage[i] = a.storage[i];
	}
	return *this;
}

//重载下标运算符
//必须重载为成员函数
double &DoubleArray::operator[](int index)
{
	assert(index >= low &&index <=high);
	return storage[index - low];
}

const double &DoubleArray::operator[](int index)const
{
	assert(index >= low && index <= high);
	return storage[index - low];
}

//重载输出流运算符
//必须重载为全局函数
ostream &operator<<(ostream &os, const DoubleArray &obj)
{
	os <<"the content of the array is : \n";
	for (int i = obj.low; i<=obj.high; ++i)
		os <<obj[i] <<'\t';
	return os;
}

//重载输入流运算符
//必须重载为全局函数
istream &operator>>(istream &is, DoubleArray &obj)
{
	cout << "please input the elements of array[" << obj.low <<"," <<obj.high<<"]:\n";
	for(int i = obj.low; i <= obj.high; ++i)
		is>>obj[i];
	return is;	
}

//重载比较运算符
//双目运算符一般重载成全局函数
bool operator==(const DoubleArray &obj1, const DoubleArray &obj2)
{
	if (obj1.low != obj2.low || obj1.high !=obj2.high)
	{
		return false;
	}
	for(int i = obj1.low; i <= obj1.high; ++i)
		if(obj1[i] !=obj2[i]) return false;
	return true;
}

//重载函数调用运算符
//必须重载为成员函数	
//作用：从数组中取出部分数组
//		并改变数组位置的起始值为指定的lh值
DoubleArray DoubleArray::operator()(int start, int end, int lh)
{
	assert(start <= end && start >= low && end <= high);
	DoubleArray tmp(lh, lh + end - start);
	for(int i = 0; i < end - start + 1; ++i)
		tmp.storage[i] = storage[start + i - low];
	return tmp;
}