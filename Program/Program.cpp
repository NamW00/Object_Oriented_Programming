#include <stdio.h>

char name[] = "test";

int sum(int x, int y)
{
	static int result;
	result = x + y;
	return result;
}

int main(void)
{
	int a;
	int* p = (int*)malloc(sizeof(int));
	a = sum(3, 4);
	*p = a;

}