#include <iostream>
using namespace std;

// �κ��� ����Ʈ �� ����

int BoxVolume(int length, int width = 1, int height = 1); 
// �κ��� ����Ʈ ���� �����ʿ��� ��������

int main()
{
	cout << "[3, 3, 3]" << BoxVolume(3, 3, 3) << endl;
	cout << "[5, 5, 1]" << BoxVolume(5, 5) << endl;
	cout << "[7, 1, 1]" << BoxVolume(7) << endl;

	// cout << "[?, 1, 1]" << BoxVolume() << endl;
	// �Ű������� �ƹ��͵� �������� ������ �μ��� ���ٷ� ���� ��.
	// 0���� �μ��� ������� �ʴ´�.

	system("pause");
}

int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}