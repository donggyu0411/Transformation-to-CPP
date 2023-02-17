#include <iostream>
using namespace std;

// 함수 오버로딩

void MyFunc(void);
void MyFunc(char c);
void MyFunc(int a, int b);

int main(void)
{
	MyFunc();
	MyFunc('A');
	MyFunc(12, 13);

	system("pause");

	return 0;
}

void MyFunc(void)
{
	cout << "MyFunc(void) called" << endl;
}

void MyFunc(char c)
{
	cout << "MyFunc(char c) called" << endl;
}

void MyFunc(int a, int b)
{
	cout << "MyFunc(int a , int b) called" << endl;
}