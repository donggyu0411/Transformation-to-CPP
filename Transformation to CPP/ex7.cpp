#include <iostream>
using namespace std;

// ����Ʈ ���� �Լ��� ���� �κп��� ǥ��

int Adder(int num1 = 1, int num2 = 2);  // ����Ʈ ���� �Լ� ���𿡼�

int main(void)
{
	cout << Adder() << endl;
	cout << Adder(5) << endl;
	cout << Adder(3, 5) << endl;

	system("pause");
}

int Adder(int num1, int num2)
{
	return num1 + num2;
}
