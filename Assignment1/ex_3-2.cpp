#include <iostream>
using namespace std;


int main()
{
	// ������ Ư���� ����� ���ÿ� �ʱ�ȭ ���־�� �Ѵ�
	int var1 = 2, var2 = 3;
	int& ref1 = var1;
	int& ref2 = var2;

	// swap��
	int var3 = ref1;
	ref1 = ref2;
	ref2 = var3;

	cout << "var1 : " << var1 << endl;
	cout << "var2 : " << var2 << endl;
	cout << "var3 : " << var3 << endl;

	return 0;
}
