// ������ �̸� ������ ���ǵ� �Լ� ȣ��
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
	cout << "Company1 �� ������ �Լ�" << endl;
	hello(); // ���� �̸������� �Լ��� �̸����� ���� ���� , �� Company1::hello();

	Company2::func();
}

void Company2::func(void)
{
	cout << "Company2 �� ������ �Լ�" << endl;
}
