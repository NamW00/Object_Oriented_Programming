#include <iostream>
using namespace std;

#pragma region ������ ���� ����(����3-7)
// void swap(int* x, int* y) { // x������ -> a�� �ּҰ�, y������ -> b�� �ּҰ�
// 	int tmp = *x;			// a�� �ּҰ�(x ������)�� tmp�� ����
// 	*x = *y;				// b�� �ּҰ�(y ������)�� x������(->b�� �ּҰ�)�� ����Ű���� ��
// 	*y = tmp;				// tmp�� ���簪(a�� �ּҰ�)�� �ٽ� y�����Ͱ� ���ϰ� �ؼ� swap
// }
#pragma endregion
#pragma region ������ ������ ���� ����(����3-8)
void swap(int& x, int& y) {
	int tmp = x;
	x = y;
	y = tmp;
}
#pragma endregion

int main()
{
	int a = 3, b = 4;
	// swap(&a, &b); // ������ ���� ����
	swap(a, b); // ������ ������ ���� ����
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	return 0;
}
