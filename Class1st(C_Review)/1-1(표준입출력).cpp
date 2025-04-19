#include <stdio.h>  // 전처리문 사용

int main()			// main 함수
{
	int num1, num2; // 변수 선언
	int sum = 0;	// 변수 선언 및 초기화

	printf("2개의 정수 입력 : ");	// 출력
	scanf("%d %d", &num1, &num2);	// 입력

	for (int i = num1; i <= num2; i++)	// 제어문
	{
		sum += i;						// 연산자
	}

	printf("%d부터 %d까지의 합 : %d\n", num1, num2, sum);

	return 0;
}
