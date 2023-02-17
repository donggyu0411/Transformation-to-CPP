#include <iostream>
using namespace std;

// 부분적 디폴트 값 설정

int BoxVolume(int length, int width = 1, int height = 1); 
// 부분적 디폴트 값은 오른쪽에서 왼쪽으로

int main()
{
	cout << "[3, 3, 3]" << BoxVolume(3, 3, 3) << endl;
	cout << "[5, 5, 1]" << BoxVolume(5, 5) << endl;
	cout << "[7, 1, 1]" << BoxVolume(7) << endl;

	// cout << "[?, 1, 1]" << BoxVolume() << endl;
	// 매개변수의 아무것도 대입하지 않으면 인수가 적다로 에러 뜸.
	// 0개의 인수를 사용하지 않는다.

	system("pause");
}

int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}