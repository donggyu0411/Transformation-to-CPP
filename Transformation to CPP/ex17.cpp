// 프로그램 전체에 영향을 미치는 using의 선언 방법

#include <iostream>
using namespace std;

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int num = 20;
	cout << "Hello World!" << endl;
	cout << "Hello " << "World!" << endl;
	cout << num << ' ' << 'A';
	cout << ' ' << 3.14 << endl;

	system("pause");
}