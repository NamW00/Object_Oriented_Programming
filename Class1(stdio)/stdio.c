#include <stdio.h>

int main()
{
	int Num1, Num2;
	int Sum = 0;
	int i;
	int tmp;

	printf("2���� ���� �Է� : ");
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

	printf("%d���� %d������ �� : %d\n", Num1, Num2, Sum);

	return 0;
}