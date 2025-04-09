#include <stdio.h>
#include <stdlib.h> // srand, rand 함수
#include <time.h> // time 함수

int main()
{
	int i, arr[10], * p;
	srand((unsigned)time(NULL)); // seed값 결정 함수

	for (i = 0; i < 10; i++)
		arr[i] = rand(); // 무작위 값 대입

	// malloc의 기본 반환형 : void *
	// 따라서 원하는 자료형으로의 형변환이 필요하다(C에서는 자동 형변환)
	p = (int*)malloc(sizeof(int) * 10); // int형 10개 메모리 동적 할당

	for (i = 0; i < 10; i++)
		p[i] = arr[i];	// 포인터는 배열처럼 사용가능

	printf("index\tary\tp\n");

	for (i = 0; i < 10; i++)
		printf("%d\t%d\t%d\n", i, arr[i], p[i]);

	free(p);

	return 0;
}