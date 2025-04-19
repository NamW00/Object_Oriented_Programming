#include <iostream>
using namespace std;

int sum(int x, int y) { return (x + y); }
int main()
{
	int a;
	int& b = a;	// a, b�� ������ ����
	int* p = &b; // p �����Ͱ� �ᱹ a�� �ּҸ� ����Ŵ
	int& c = b;	// a, b, c�� ������ ����
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
