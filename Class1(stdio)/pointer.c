#include <stdio.h>

int main()
{
#pragma region 포인터 설명
	// int var = 5;
	// int* p = &var;	// 포인트 변수 선언 및 var 주소로 초기화
	// 
	// printf("var의 주소 : %d\n", &var);
	// printf("var의 값 : %d\n", var);
	// printf("p의 주소 : %d\n", &p);
	// printf("p의 값 : %d\n", p);
	// printf("p가 가리키는 변수의 값 : %d\n", *p);
	// 
	// p++; // int형이므로 4 증가
	// 
	// printf(">> 변경후\n");
	// printf("p의 값 : %d\n", p);
#pragma endregion
#pragma region 배열과 포인터
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
#pragma region 메모리 동적할당

#pragma endregion

	
	return 0;
}