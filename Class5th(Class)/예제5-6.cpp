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

	ptr = new CPoint;		// 포인터를 이용한 객체 동적 생성
	ptr->Print();
	delete ptr;				// 메모리 해제

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