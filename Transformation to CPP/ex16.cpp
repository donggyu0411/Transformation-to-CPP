// using�� �̿��� �̸� ������ ���
#include <iostream>
using namespace std;

namespace Hybrid
{
	void HybFunc(void)
	{
		cout << "So simple function!" << endl;
		cout << "In namespace Hybrid" << endl;
	}
}

int main()
{
	using Hybrid::HybFunc; // �� ���� ������ namespace Hybrid�� ���� ���� , ���� std�� �����ϴ� �Ͱ� ����.
	HybFunc();

	system("pause");
}