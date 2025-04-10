#include <iostream>
using namespace std;

class CPoint
{
private:
	int x, y;

public:
	CPoint(int a, int b) : x(a), y(b) {}

	//	�Լ��� ȣ���� ��ü�� �ּҸ� ��ȯ
	//	CPoint* MoveX(int a) { x += a; return this; } 
	//	CPoint* MoveY(int b) { y += b; return this; }

	// ��ü ��ü�� ��ȯ -> �Լ��� ȣ���� ��ü�� ���� ��ȯ, ��ȯ ��� ��ü�� �� ��ü�� �ȴ� (������)
	CPoint& MoveX(int a) { x += a; return (*this); }
	CPoint& MoveY(int b) { y += b; return (*this); }

	void Print() { cout << "(" << x << ", " << y << ")" << endl; }
};

int main()
{
	CPoint P1(1, 2);
	// P1.MoveX(3)->MoveY(4);	// MoveX�� ����� P1 ������
	P1.MoveX(3).MoveY(4);		// MoveX�� ����� P1 �� ��ü
	P1.Print();

	return 0;
}