#include <iostream>
using namespace std;

// �迭 ����� ���ڿ� �����

int main()
{
	char name[100];
	char lang[200];

	cout << "�̸��� �����Դϱ�?";
	cin >> name;

	cout << "�����ϴ� ���α׷��� ���� �����ΰ���?";
	cin >> lang;

	cout << "�� �̸��� " << name << "�Դϴ�." << endl;
	cout << "�����ϴ� ���α׷��� ���� " << lang << "�Դϴ�." << endl;

	system("pause");
}