#include <iostream>
using namespace std;

#pragma region 참조에 의한 전달(예제3-7)
// void swap(int* x, int* y) { // x포인터 -> a의 주소값, y포인터 -> b의 주소값
// 	int tmp = *x;			// a의 주소값(x 포인터)을 tmp에 복사
// 	*x = *y;				// b의 주소값(y 포인터)을 x포인터(->b의 주소값)도 가리키도록 함
// 	*y = tmp;				// tmp에 복사값(a의 주소값)을 다시 y포인터가 향하게 해서 swap
// }
#pragma endregion
#pragma region 진정한 참조에 의한 전달(예제3-8)
void swap(int& x, int& y) {
	int tmp = x;
	x = y;
	y = tmp;
}
#pragma endregion

int main()
{
	int a = 3, b = 4;
	// swap(&a, &b); // 참조에 의한 전달
	swap(a, b); // 진정한 참조에 의한 전달
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	return 0;
}
