#include <stdio.h>
#include <stdlib.h> // srand, rand �Լ�
#include <time.h> // time �Լ�

int main()
{
	int i, arr[10], * p;
	srand((unsigned)time(NULL)); // seed�� ���� �Լ�

	for (i = 0; i < 10; i++)
		arr[i] = rand(); // ������ �� ����

	// malloc�� �⺻ ��ȯ�� : void *
	// ���� ���ϴ� �ڷ��������� ����ȯ�� �ʿ��ϴ�(C������ �ڵ� ����ȯ)
	p = (int*)malloc(sizeof(int) * 10); // int�� 10�� �޸� ���� �Ҵ�

	for (i = 0; i < 10; i++)
		p[i] = arr[i];	// �����ʹ� �迭ó�� ��밡��

	printf("index\tary\tp\n");

	for (i = 0; i < 10; i++)
		printf("%d\t%d\t%d\n", i, arr[i], p[i]);

	free(p);

	return 0;
}