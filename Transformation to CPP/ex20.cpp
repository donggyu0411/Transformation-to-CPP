// ���� ���� ������ ::�� �� �ٸ� ���
#include <iostream>
using namespace std;

int val = 100; // ���� ����

int main()
{
	int val = 20; // ���� ����
	val += 3; // ���� ���� val�� �� ����
	::val += 3; // �������� val�� �� ����

	cout << "�������� val�� ��: " << val << endl;
	cout << "�������� val�� ��: " << ::val << endl;

	system("pause");
}