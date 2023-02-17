#include <iostream>
using namespace std;

// 배열 기반의 문자열 입출력

int main()
{
	char name[100];
	char lang[200];

	cout << "이름은 무엇입니까?";
	cin >> name;

	cout << "좋아하는 프로그래밍 언어는 무엇인가요?";
	cin >> lang;

	cout << "내 이름은 " << name << "입니다." << endl;
	cout << "좋아하는 프로그래밍 언어는 " << lang << "입니다." << endl;

	system("pause");
}