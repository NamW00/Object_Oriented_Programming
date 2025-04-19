#include <stdio.h>

int main()
{
#pragma region 배열 변수 선언 및 초기화 예
	// int Grade[5];					// 지역 변수의 경우 쓰레기 값을 가짐
	// Grade[2] = 100;					// 세 번째 원소의 값을 100으로 변경
	// int Grade[5] = { 10, 20, 30, 40, 50 };
	// int Grade[5] = { 10, 20 };		// Grade[2] 이후로는 0 값을 가짐
	// int Grade[5] = { 0 };			// 모두 0 값을 가짐
	// int Grade[2][3] = { {10, 20, 30},{40, 50, 60} };	// 2차원 배열
	// Grade[1][1] = 100;				// 2행 2열 원소의 값을 100으로 변경
#pragma endregion
#pragma region 문제(배열)
	/*문제 : 5행 5열의 int형 배열을 선언하고 실행 결과와 같이 각 원소의 값을 채운 후 출력하기
	*/
	int arr[5][5];					// 2차원 배열
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++) {
			if (i >= j)				// 왼쪽 아래 부분 : i + 1
				arr[i][j] = i + 1;
			else
				arr[i][j] = 0;		// 오른쪽 위 부분 : 0	
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