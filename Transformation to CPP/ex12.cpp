// 범위지정 연산자 ::와 이름공간
#include <iostream>
using namespace std;

namespace Company1
{
	void func(void)
	{
		cout << "Company1 이 정의한 함수" << endl;
	}
}

namespace Company2
{
	void func(void)
	{
		cout << "Company2 이 정의한 함수" << endl;
	}
}

int main()
{
	Company1::func();
	Company2::func();

	system("pause");
}