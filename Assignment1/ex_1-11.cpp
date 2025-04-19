#include <stdio.h>

struct Point {
	int x;
	int y;
};

void Swap(struct Point& p1, struct Point& p2) {
	struct Point tmp = p1;
	p1 = p2;
	p2 = tmp;
}

int main() {
	struct Point p1 = { 1, 2 };
	struct Point p2 = { 3, 4 };
	printf("����ü p1: [%d, %d]\n", p1.x, p1.y);
	printf("����ü p2: [%d, %d]\n", p2.x, p2.y);

	printf("���� �� \n");
	Swap(p1, p2);
	printf("����ü p1: [%d, %d]\n", p1.x, p1.y);
	printf("����ü p2: [%d, %d]\n", p2.x, p2.y);


	return 0;
}
