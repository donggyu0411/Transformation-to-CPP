// C++ 기반의 인라인 함수 정의
// 정의한 코드들이 인라인 함수 호출 시 그 자리에 인라인 함수 코드 자체가 안으로 들어간다는 뜻입니다. 
// 즉, 함수의 내용을 호출을 통해서 실행시키는 것이 아니라 호출하는 코드 자체가 함수 내용의 코드가 된다.
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