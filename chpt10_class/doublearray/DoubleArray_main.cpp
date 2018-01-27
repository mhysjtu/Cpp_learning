#include <iostream>
using namespace std;
#include "DoubleArray.h"

int main(int argc, char const *argv[])
{
	DoubleArray array(20,30);
	int i;
	double value;
	for(i=20;i<=30;++i){
		cout << "please input the "<<i<<"th element:";
		cin >> value;
		array.insert(i,value);
	}

	while(true){
		cout << "please input the number of the element you are looking for(0 means to exit):";
		cin >> i;
		if(i==0)break;
		if(array.fatch(i,value))cout << value << endl;
		else cout << "out of bounds!\n";
	}		
	return 0;
}