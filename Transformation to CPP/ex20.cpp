// 범위 지정 연산자 ::의 또 다른 기능
#include <iostream>
using namespace std;

int val = 100; // 전역 변수

int main()
{
	int val = 20; // 지역 변수
	val += 3; // 지역 변수 val의 값 증가
	::val += 3; // 전역변수 val의 값 증가

	cout << "지역변수 val의 값: " << val << endl;
	cout << "전역변수 val의 값: " << ::val << endl;

	system("pause");
}