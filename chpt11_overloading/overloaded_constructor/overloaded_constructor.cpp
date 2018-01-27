#include <iostream>
using namespace std;

class timer{
	int second;
public:
	timer(int t){second = t;}
	timer(int min, int sec){second = 60 * min + sec;}
	timer(int h, int min, int sec){second = sec + 60 *min + 3600 * h;}
	int gettime(){return second;}

};

int main(int argc, char const *argv[])
{
	timer a(20);
	timer b(1,20);
	timer c(1,1,10);
	cout << a.gettime()<<endl;
	cout << b.gettime()<<endl;
	cout << c.gettime()<<endl;
	return 0;
}