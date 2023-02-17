#include <iostream>
using namespace std;

// scanf를 대신하는 데이터 입력
int main()
{
	int val1;
	cout << "첫번째 정수 입력 : ";
	cin >> val1;

	int val2;
	cout << "두번째 정수 입력 : ";
	cin >> val2;

	int result = val1 + val2;
	cout << "덧셈 결과 : " << result << endl;

	system("pause");
}