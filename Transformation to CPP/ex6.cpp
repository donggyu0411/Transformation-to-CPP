#include <iostream>
using namespace std;

// 함수의 매개 변수에 설정하는 디폴트 값의 의미

int Adder(int num1 = 1, int num2 = 2)
{
	return num1 + num2;
}

int main()
{
	cout << Adder() << endl;
	cout << Adder(5) << endl;
	cout << Adder(3, 5) << endl;

	system("pause");

}