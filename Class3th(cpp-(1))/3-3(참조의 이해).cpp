#include <iostream>
using namespace std;


int main()
{
	int var1 = 3;
	int var2 = 5;
	int& ref = var1;	// ref와 var1은 동일변수

	ref = 7;
	cout << "var1 : " << var1 << ", var2 : " << var2 << ", ref : " << ref << endl;

	ref = var2;
	cout << "var1 : " << var1 << ", var2 : " << var2 << ", ref : " << ref << endl;

	return 0;
}
