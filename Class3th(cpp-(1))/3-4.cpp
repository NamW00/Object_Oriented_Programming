#include <iostream>
using namespace std;

void update(int var1, int& var2)
{
	var1 += var1;
	var2 += var2;
}
int main()
{
	int a = 1, b = 1;

	for (int i = 0; i < 5; i++)
	{
		update(a, b);
		cout << (i + 1) << "번째 update 값 : a = " << a << ", b = " << b << endl;
	}
	cout << "최종 update 값 : a = " << a << ", b = " << b << endl;
	
	return 0;
}
