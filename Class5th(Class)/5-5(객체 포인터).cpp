#include <iostream>
using namespace std;

int main()
{
	int* ptr;
	int i;

	ptr = new int(3);	// 동적 생성과 동시에 초기화 가능
	cout << *ptr << endl;
	delete ptr;

	ptr = new int[5];	// 배열의 동적 생성은 초기화 불가능
	for (i = 0; i < 5; i++)
	{
		ptr[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		cout << ptr[i] << endl;
	}
	delete[] ptr;	// 배열에 대한 동적 할당의 경우 delete[] 사용

	return 0;
}