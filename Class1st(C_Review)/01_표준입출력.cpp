#include <stdio.h>  // ��ó���� ���

int main()			// main �Լ�
{
	int num1, num2; // ���� ����
	int sum = 0;	// ���� ���� �� �ʱ�ȭ

	printf("2���� ���� �Է� : ");	// ���
	scanf("%d %d", &num1, &num2);	// �Է�

	for (int i = num1; i <= num2; i++)	// ���
	{
		sum += i;						// ������
	}

	printf("%d���� %d������ �� : %d\n", num1, num2, sum);

	return 0;
}
