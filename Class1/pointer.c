#include <stdio.h>

int main()
{
#pragma region ������ ����
	// int var = 5;
	// int* p = &var;	// ����Ʈ ���� ���� �� var �ּҷ� �ʱ�ȭ
	// 
	// printf("var�� �ּ� : %d\n", &var);
	// printf("var�� �� : %d\n", var);
	// printf("p�� �ּ� : %d\n", &p);
	// printf("p�� �� : %d\n", p);
	// printf("p�� ����Ű�� ������ �� : %d\n", *p);
	// 
	// p++; // int���̹Ƿ� 4 ����
	// 
	// printf(">> ������\n");
	// printf("p�� �� : %d\n", p);
#pragma endregion
#pragma region �迭�� ������
	int num[5] = { 0, 1, 2, 3, 4 };
	int* pNum = num;
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%d", pNum[i]);
	}

	printf("\n");

	for (i = 0; i < 5; i++)
	{
		printf("%d", *(pNum + i));
	}
#pragma endregion
#pragma region �޸� �����Ҵ�

#pragma endregion

	
	return 0;
}