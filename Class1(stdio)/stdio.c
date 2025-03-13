#include <stdio.h>

int main()
{
	int Num1, Num2;
	int Sum = 0;
	int i;
	int tmp;

	printf("2개의 정수 입력 : ");
	scanf("%d %d", &Num1, &Num2);

	if (Num1 > Num2)
	{
		tmp = Num2;
		Num2 = Num1;
		Num1 = tmp;
	}

	for (i = Num1; i <= Num2; i++)
	{
		Sum += i;
	}

	printf("%d부터 %d까지의 합 : %d\n", Num1, Num2, Sum);

	return 0;
}