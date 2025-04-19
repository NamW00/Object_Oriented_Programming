#include <iostream>
using namespace std;

#define MIN(X,Y) ((X)<(Y)?(X):(Y)) // 매크로

int main()
{
#pragma region 매크로 표현
	cout << MIN(4, 5) << endl;
	cout << MIN((2 + 3), (1 + 2)) << endl;
#pragma endregion
#pragma region 함수로 표현

#pragma endregion


	return 0;
}
