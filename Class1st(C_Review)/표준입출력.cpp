#include <stdio.h>  // ��ó���� ���

int main()			// main �Լ�
{
	int Num1, Num2; // ���� ����
	int Sum = 0;	// ���� ���� �� �ʱ�ȭ

	printf("2���� ���� �Է� : ");	// ���
	scanf("%d %d", &Num1, &Num2);	// �Է�

	for (int i = Num1; i <= Num2; i++)	// ���
	{
		Sum += i;						// ������
	}

	printf("%d���� %d������ �� : %d\n", Num1, Num2, Sum);

	return 0;
}
