// template 통한 임의의 자료형
// 함수나 클래스를 개별적으로 다시 작성하지 않아도, 여러 자료 형으로
// 사용할 수 있도록 하게 만들어 놓은 틀.
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