#include <iostream>
using namespace std;

#define MIN(X,Y) ((X)<(Y)?(X):(Y)) // ��ũ��

int main()
{
#pragma region ��ũ�� ǥ��
	cout << MIN(4, 5) << endl;
	cout << MIN((2 + 3), (1 + 2)) << endl;
#pragma endregion
#pragma region �Լ��� ǥ��

#pragma endregion


	return 0;
}
