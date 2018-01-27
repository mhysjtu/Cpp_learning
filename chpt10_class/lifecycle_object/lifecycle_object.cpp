//对象变量周期
//局部变量先消失，然后是静态局部变量，最后是全局变量(或main函数外面的)
//函数的局部变量先消失，函数的静态局部变量要等到main函数中的局部变量消失后再消失

//消失顺序：函数中的局部变量(后创建先消失)->main函数中的局部变量
//			->函数中的静态局部->main中的静态局部->全局变量
#include <iostream>
using namespace std;
class CreateAndDestroy
{
public:
	CreateAndDestroy(int);
	~CreateAndDestroy();
private:
	int objectID;
};

CreateAndDestroy::CreateAndDestroy(int ID)
{
	objectID = ID;
	cout << "Object " << objectID << " constructor runs" << endl;
}

CreateAndDestroy::~CreateAndDestroy()
{
	cout << "Object " << objectID << " destructor runs" << endl;
}

void create(void);

CreateAndDestroy first(1);

int main(int argc, char const *argv[])
{
	cout << "\nMAIN FUNCTION:BEGINS" << endl;
	CreateAndDestroy second(2);
	static CreateAndDestroy third(3);

	create();

	cout << "\nMAIN FUNCTION:RESUMES" << endl;
	CreateAndDestroy fourth(4);
	cout << "\nMAIN FUNCTION:ENDS" <<endl;

	return 0;
}

void create(void)
{
	cout << "\nCREATE FUNCTION:BEGINS" << endl;

	CreateAndDestroy fifth(5);
	static CreateAndDestroy sixth(6);
	CreateAndDestroy seventh(7);

	cout << "\nCREATE FUNCTION:ENDS" << endl;
}