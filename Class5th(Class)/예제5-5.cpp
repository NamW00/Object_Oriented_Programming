#include <iostream>
using namespace std;

int main()
{
	int* ptr;
	int i;

	ptr = new int(3);	// ���� ������ ���ÿ� �ʱ�ȭ ����
	cout << *ptr << endl;
	delete ptr;

	ptr = new int[5];	// �迭�� ���� ������ �ʱ�ȭ �Ұ���
	for (i = 0; i < 5; i++)
	{
		ptr[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		cout << ptr[i] << endl;
	}
	delete[] ptr;	// �迭�� ���� ���� �Ҵ��� ��� delete[] ���

	return 0;
}