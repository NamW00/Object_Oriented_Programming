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
	int i;

	ptr = new CPoint[5];	// ��ü �����͸� �̿��� �迭 ���� ����

	for (i = 0; i < 5; i++)
		ptr[i].SetXY(i, i);

	for (i = 0; i < 5; i++)
		ptr[i].Print();

	delete[] ptr;

	return 0;
}