#include <stdio.h>
#include <stdlib.h> // srand, rand 함수
#include <time.h> // time 함수
int main()
{
#pragma region 변수와 포인터
	//	int var = 5;
	//	int* p = &var;	// 포인터 변수 선언 및 var 주소로 초기화

	//	printf("var의 주소 : %d\n", &var);
	//	printf("var의 값 : %d\n", var);
	//	printf("p의 주소 : %d\n", &p);
	//	printf("p의 값 : %d\n", p);
	//	printf("p가 가리키는 변수의 값 : %d\n", *p);

	//	p++; // int형 포인터의 경우 1 증가 : int형 data unit size인 4만큼 증가함

	//	printf(">> 변경후\n");
	//	printf("p의 값 : %d\n", p);
#pragma endregion

	
#pragma region 메모리 동적 할당
	int i, arr[10], * p;
	srand((unsigned)time(NULL)); // seed값 결정 함수(srand)

	for (i = 0; i < 10; i++)
		arr[i] = rand(); // 무작위 값 대입

	// malloc의 기본 반환형 : void *
	// -> 따라서 원하는 자료형으로의 형변환이 필요하다
	// -> C에서는 자동 형변환
	p = (int *)malloc(sizeof(int) * 10); // int형 10개 메모리 동적 할당(=40byte)

	for (i = 0; i < 10; i++)
		p[i] = arr[i];	// 포인터는 배열처럼 사용가능

	printf("index\tary\tp\n");

	for (i = 0; i < 10; i++)
		printf("%d\t%d\t%d\n", i, arr[i], p[i]);

	free(p);

#pragma endregion

	
	return 0;
}