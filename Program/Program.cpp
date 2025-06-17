#include <iostream>
using namespace std;

int main() {
	// int* p = new int[5];
	// 
	// for (int i = 0; i < 5; i++)
	// {
	// 	p[i] = i;
	// }
	// 
	// for (int i = 0; i < 5; i++)
	// {
	// 	cout << p[i] << endl;
	// }
	// cout << endl;

	int** p; // int형 포인터에 대한 포인터
	int i, j;
	p = new int* [4]; // p[0],...,[3]이 int형 포인터

	for (i = 0; i < 4; i++)
	{
		p[i] = new int[5]; // 각 포인터에 대해 int형 5개 배열 생성
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			p[i][j] = i + j;
		}
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			cout << p[i][j] << "\t";
		}
		cout << endl;
	}

	for (i = 0; i < 4; i++)
	{
		delete[] p[i];
	}
	delete[]p;

	//cout << "포인터 변수의 주소 : " << &p << endl;
	//cout << "포인터 변수의 값 : " << p << endl;
	//cout << "동적 변수의 값 : " << *p << endl;

	return 0;
}