// template ���� ������ �ڷ���
// �Լ��� Ŭ������ ���������� �ٽ� �ۼ����� �ʾƵ�, ���� �ڷ� ������
// ����� �� �ֵ��� �ϰ� ����� ���� Ʋ.
#include <iostream>
using namespace std;

template <typename T>
inline T SQUARE(T x)
{
	return x * x;
}

int main()
{
	cout << SQUARE(5) << endl;
	cout << SQUARE(7.154) << endl;

	system("pause");
}