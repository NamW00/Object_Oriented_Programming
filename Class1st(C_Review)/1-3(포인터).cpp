#include <stdio.h>
#include <stdlib.h> // srand, rand �Լ�
#include <time.h> // time �Լ�
int main()
{
#pragma region ������ ������
	//	int var = 5;
	//	int* p = &var;	// ������ ���� ���� �� var �ּҷ� �ʱ�ȭ

	//	printf("var�� �ּ� : %d\n", &var);
	//	printf("var�� �� : %d\n", var);
	//	printf("p�� �ּ� : %d\n", &p);
	//	printf("p�� �� : %d\n", p);
	//	printf("p�� ����Ű�� ������ �� : %d\n", *p);

	//	p++; // int�� �������� ��� 1 ���� : int�� data unit size�� 4��ŭ ������

	//	printf(">> ������\n");
	//	printf("p�� �� : %d\n", p);
#pragma endregion

	
#pragma region �޸� ���� �Ҵ�
	int i, arr[10], * p;
	srand((unsigned)time(NULL)); // seed�� ���� �Լ�(srand)

	for (i = 0; i < 10; i++)
		arr[i] = rand(); // ������ �� ����

	// malloc�� �⺻ ��ȯ�� : void *
	// -> ���� ���ϴ� �ڷ��������� ����ȯ�� �ʿ��ϴ�
	// -> C������ �ڵ� ����ȯ
	p = (int *)malloc(sizeof(int) * 10); // int�� 10�� �޸� ���� �Ҵ�(=40byte)

	for (i = 0; i < 10; i++)
		p[i] = arr[i];	// �����ʹ� �迭ó�� ��밡��

	printf("index\tary\tp\n");

	for (i = 0; i < 10; i++)
		printf("%d\t%d\t%d\n", i, arr[i], p[i]);

	free(p);

#pragma endregion

	
	return 0;
}