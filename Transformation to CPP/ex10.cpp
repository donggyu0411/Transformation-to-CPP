// C++ ����� �ζ��� �Լ� ����
// ������ �ڵ���� �ζ��� �Լ� ȣ�� �� �� �ڸ��� �ζ��� �Լ� �ڵ� ��ü�� ������ ���ٴ� ���Դϴ�. 
// ��, �Լ��� ������ ȣ���� ���ؼ� �����Ű�� ���� �ƴ϶� ȣ���ϴ� �ڵ� ��ü�� �Լ� ������ �ڵ尡 �ȴ�.
#include <iostream>
using namespace std;

inline int SQUARE(int x)
{
	return x * x;
}

int main()
{
	cout << SQUARE(5) << endl;
	cout << SQUARE(7.15) << endl;

	system("pause");
}