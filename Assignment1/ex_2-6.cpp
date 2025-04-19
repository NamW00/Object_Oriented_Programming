#include <iostream>
using namespace std;

int* GetArray(int num)
{
	int* p = new int[num]; // 동적 할당
	for (int i = 0; i < num; i++)
	{
		p[i] = i;
	}
	return p;
}
	
int main()
{
	int i;
	int* pAry;

	pAry = GetArray(5);
	for (i = 0; i < 5; i++)
	{
		cout << pAry[i] << " ";
	}
	cout << endl;

	delete[] pAry;

	return 0;
}
