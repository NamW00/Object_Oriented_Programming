#include <iostream>
using namespace std;

class CPoint
{
private:
	int x, y;

public:
	CPoint() : x(0), y(0) {}
	CPoint(int a) : x(a), y(a) {}
	CPoint(int a, int b) : x(a), y(b) {}

	void SetXY(int a, int b) { x = a, y = b; }
	void Print() { cout << "(" << x << ", " << y << ")" << endl; }
};

int main()
{
	CPoint* ptr;			// ��ü ������ ����

	ptr = new CPoint;		// �����͸� �̿��� ��ü ���� ����
	ptr->Print();
	delete ptr;				// �޸� ����

	ptr = new CPoint();
	ptr->Print();
	delete ptr;

	ptr = new CPoint(1);
	ptr->Print();
	delete ptr;

	ptr = new CPoint(2, 3);
	ptr->Print();
	delete ptr;

	return 0;
}