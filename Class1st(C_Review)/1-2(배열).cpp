#include <stdio.h>

int main()
{
#pragma region �迭 ���� ���� �� �ʱ�ȭ ��
	// int Grade[5];					// ���� ������ ��� ������ ���� ����
	// Grade[2] = 100;					// �� ��° ������ ���� 100���� ����
	// int Grade[5] = { 10, 20, 30, 40, 50 };
	// int Grade[5] = { 10, 20 };		// Grade[2] ���ķδ� 0 ���� ����
	// int Grade[5] = { 0 };			// ��� 0 ���� ����
	// int Grade[2][3] = { {10, 20, 30},{40, 50, 60} };	// 2���� �迭
	// Grade[1][1] = 100;				// 2�� 2�� ������ ���� 100���� ����
#pragma endregion
#pragma region ����(�迭)
	/*���� : 5�� 5���� int�� �迭�� �����ϰ� ���� ����� ���� �� ������ ���� ä�� �� ����ϱ�
	*/
	int arr[5][5];					// 2���� �迭
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++) {
			if (i >= j)				// ���� �Ʒ� �κ� : i + 1
				arr[i][j] = i + 1;
			else
				arr[i][j] = 0;		// ������ �� �κ� : 0	
		}
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
#pragma endregion


	return 0;
}