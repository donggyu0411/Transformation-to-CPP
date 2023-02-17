// using을 이용한 이름 공간의 명시
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
	using Hybrid::HybFunc; // 이 라인 실행후 namespace Hybrid는 생략 가능 , 위에 std를 생략하는 것과 같다.
	HybFunc();

	system("pause");
}