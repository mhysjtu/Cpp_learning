#include <iostream>
#include "rational.h"

int main(int argc, char **argv)
{   
	rational r1, r2, r3, r4;
    double x;

    cout << "input r1: ";  cin >> r1; 
    cout << "input r2: ";  cin >> r2;

    r3 = r1 + r2;                                     
    cout << r1 << '+' << r2 << " = " << r3 << endl; 

    r3 = r1 * r2;                                     
    cout << r1 << '*' << r2 << " = " << r3 << endl;

    r4 = (r1 + r2) * r3;                              
    cout << "(r1 + r2) * r3 is: " << r4 << endl;

    x = 5.5 - r1;                              
    cout << "5.5 - r1 is: " << x  << endl;

    //虽然没有重载过比较运算符，但类定义中重载了类型转换函数
    cout << (r1 < r2 ? r1 : r2) << endl;
    return 0;
} 
