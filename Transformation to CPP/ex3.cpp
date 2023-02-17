#include <iostream>
using namespace std;
// c++의 지역 변수 선언


int main()
{
	int val1, val2;
	int result = 0;

	cout << "두 정수를 입력하시오.";
	cin >> val1 >> val2;

	if (val1 < val2)
	{
		for (int i = val1 + 1; i < val2; i++)
		{
			result += i;
		}
	}
	else
	{
		for (int i = val2 + 1; i < val1; i++)
		{
			result += i;
		}
	}

	cout << "두 정수 사이의 정수들의 합 : " << result << endl;

	system("pause");
}