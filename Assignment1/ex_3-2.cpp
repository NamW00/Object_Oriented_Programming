#include <iostream>
using namespace std;


int main()
{
	// 참조의 특성상 선언과 동시에 초기화 해주어야 한다
	int var1 = 2, var2 = 3;
	int& ref1 = var1;
	int& ref2 = var2;

	// swap문
	int var3 = ref1;
	ref1 = ref2;
	ref2 = var3;

	cout << "var1 : " << var1 << endl;
	cout << "var2 : " << var2 << endl;
	cout << "var3 : " << var3 << endl;

	return 0;
}
