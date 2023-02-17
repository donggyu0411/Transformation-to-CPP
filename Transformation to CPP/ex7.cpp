#include <iostream>
using namespace std;

// 디폴트 값은 함수의 선언 부분에만 표현

int Adder(int num1 = 1, int num2 = 2);  // 디폴트 값은 함수 선언에서

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
