/*
int�� �迭�� ���� ������ �Ű������� ���޹޾� �迭 ���ҵ� ��ü�� ���� ����� 
���� ����� ��ȯ�ϴ� �Լ� �ϳ����ۼ��ϰ� main �Լ��� ���� �׽�Ʈ�� ����.
�Լ��� ��ȯ���� 2�� �̻��� �� �� ����.���� �� �������� �䱸�ϴ� ���� ����� ���� ��� 2���� 
�����ϱ� ���ؼ��� �ٸ� ����� ����ؾ� �Ѵ�.
�Ƹ��� ���� ������ ���� ������ ������ ���� ������ �����ȴ�.
*/
#include <iostream>
using namespace std;

void calculator(int* arr, int len, int& sum, int& multiply)
{
	for (int i = 0; i < len; i++)
	{
		sum += arr[i];
		multiply *= arr[i];
	}
}
int main()
{
	int arr[5] = { 0 };
	int sum = 0, multiply = 1;

	for (int i = 0; i < 5; i++)
	{
		arr[i] = (i + 1);
	}
	calculator(arr, sizeof(arr) / sizeof(int), sum, multiply);
	cout << "Array Sum : " << sum << endl;
	cout << "Array Multiply : " << multiply << endl;

	return 0;
}
