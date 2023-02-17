// 동일한 이름 공간에 정의된 함수 호출
#include <iostream>
using namespace std;

namespace Company1
{
	void func(void);
	void hello(void);
}

namespace Company2
{
	void func(void);
}

int main()
{
	Company1::func();

	system("pause");
}

void Company1::hello(void)
{
	cout << "hello" << endl;
}

void Company1::func(void)
{
	cout << "Company1 이 정의한 함수" << endl;
	hello(); // 같은 이름공간의 함수는 이름공간 생략 가능 , 즉 Company1::hello();

	Company2::func();
}

void Company2::func(void)
{
	cout << "Company2 이 정의한 함수" << endl;
}
