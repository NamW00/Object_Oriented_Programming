#include <iostream>
using namespace std;
class CPoint
{
private:
	int x;
	int y;

public:
	CPoint(const CPoint& Po) : x(Po.x), y(Po.y) {
		cout << "���� ������ : " << x << ", " << y << endl;
	}
	CPoint(int a = 0, int b = 0) : x(a), y(b) {
		cout << "������1 : " << x << ", " << y << endl;
	}
	CPoint(const CPoint& Po, int a, int b) {
		x = Po.x + a;
		y = Po.y + b;
		cout << "������2 : " << x << ", " << y << endl;
	}

	~CPoint() { cout << "�Ҹ��� : " << x << ", " << y << endl; }
	void Print() { cout << "(" << x << ", " << y << ")" << endl; }
};

CPoint GetPoint(CPoint Po) {
	return CPoint(Po, 2, 2);	// �ӽð�ü ���� �� ��ȯ
}

int main() {
	CPoint P1 = GetPoint(CPoint(1, 1));	// GetPoint �Լ� ȣ��
	CPoint P2 = CPoint(100, 100);		// ����� �ӽð�ü ����, P2 �ʱ�ȭ
	CPoint P3 = CPoint(1, 1);			// ����� �ӽð�ü ����, P3�� ����
	CPoint P4;							// �Ϲ� ����
	P4 = CPoint(300, 300);				// ����� �ӽð�ü ���� �� ����
	// ����� �ӽð�ü ������ ������ ���·� ��ü ����

	P1.Print();
	P2.Print();
	P3.Print();
	P4.Print();
	CPoint(300, 300).Print();		// �ӽð�ü ���� & ��� �Լ� ȣ��
	cout << "���α׷� ����" << endl;

	return 0;
}