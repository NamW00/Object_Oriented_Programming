#include <iostream>
using namespace std;

struct CPoint	// Ŭ������ ����ü�� �ٲ۴ٸ�?
{
	int x, y;
};

void Move(CPoint* This, int a, int b)	// ��� �Լ��� ���� �Լ��� �ش� ��ü�� �ּҸ� This �����ͷ� ����
{
	This->x += a;
	This->y += b;
}

void Print(CPoint* This)	// ��� �Լ��� ���� �Լ��� �ش� ��ü�� �ּҸ� This �����ͷ� ����
{
	cout << "(" << This->x << ", " << This->y << ")" << endl;
}

int main()
{
	CPoint P1 = { 1, 2 };
	CPoint P2 = { 3, 4 };

	Move(&P1, 1, 1);	// �Լ� ȣ�� �� ���� ��ü�� �ּҸ� �ѱ�
	Move(&P2, 2, 2);

	Print(&P1);
	Print(&P2);

	return 0;
}