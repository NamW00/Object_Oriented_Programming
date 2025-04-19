#include <iostream>
using namespace std;

int sum(int x, int y) { return (x + y); }
int main()
{
	int a;
	int& b = a;	// a, b는 동일한 변수
	int* p = &b; // p 포인터가 결국 a의 주소를 가리킴
	int& c = b;	// a, b, c가 동일한 변수
	c = 5;
	cout << "a : " << a << ", b : " << b << ", *p : " << *p << ", c : " << c << endl;

	int(&rSum)(int, int) = sum;
	cout << "rSum(c, 5) : " << rSum(c, 5) << endl;

	int arr[3] = { 0 };
	int(&rArr)[3] = arr;
	rArr[2] = c;
	for (int i = 0; i < 3; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}
