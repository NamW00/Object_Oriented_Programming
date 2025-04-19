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
	CPoint* ptr;			// 객체 포인터 선언
	int i;

	ptr = new CPoint[5];	// 객체 포인터를 이용한 배열 동적 생성

	for (i = 0; i < 5; i++)
		ptr[i].SetXY(i, i);

	for (i = 0; i < 5; i++)
		ptr[i].Print();

	delete[] ptr;

	return 0;
}