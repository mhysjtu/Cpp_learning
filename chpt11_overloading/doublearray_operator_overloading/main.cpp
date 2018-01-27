#include "DoubleArray.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	//验证两种构造函数
	DoubleArray array1(20,30), array2(array1);

	//验证重载输入、出运算符
	cin >> array1;
	cout << "array1 ";cout << array1;

	//验证赋值运算符
	array2 = array1;
	cout << "execute array2 = array1, array2 ="<<array2;

	//验证比较运算符
	cout << "array1 == array2 is"<<((array1 == array2)?"true":"false")<<endl;

	//验证下标运算符
	array2[25] = 0;
	cout << "after executing array[25] = 0 , array1 == array2 is:"<<((array1 == array2)? "true" : "false")<< endl;

	//验证函数调用运算符
	array2 = array1(22,25,2);
	cout << "after executing array2 = array1(22,25,2), array2 is:"<<array2;

	return 0;
}