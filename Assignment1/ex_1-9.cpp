#include <stdio.h>

int power(int x, int y)
{
	if (y > 0)
		return x * power(x, y - 1);
	else
		return 1;
}
int main()
{
	int a, b = 0;
	int recursive_func[100] = { 0, };

	printf("a�� b�� ���� ���� �Է��Ͻÿ� : ");
	scanf("%d %d", &a, &b);

	printf("%d^%d = %d", a, b, power(a, b));
	return 0;
}
