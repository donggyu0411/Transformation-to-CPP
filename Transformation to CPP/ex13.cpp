// �̸� ���� ����� �Լ� ����� ������ ����
#include <iostream>
using namespace std;

namespace Company1
{
	void func(void);
}

namespace Company2
{
	void func(void);
}

int main(void)
{
	Company1::func();
	Company2::func();

	system("pause");
}

void Company1::func(void)
{
	cout << "Company1 �� ������ �Լ�" << endl;
}

void Company2::func(void)
{
	cout << "Company2 �� ������ �Լ�" << endl;
}