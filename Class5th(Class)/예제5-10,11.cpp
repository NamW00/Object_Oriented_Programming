#include <iostream>
using namespace std;

class CPoint
{
private:
	int x, y;

public:
	CPoint(int a, int b) : x(a), y(b) {}

	//	함수를 호출한 객체의 주소를 반환
	//	CPoint* MoveX(int a) { x += a; return this; } 
	//	CPoint* MoveY(int b) { y += b; return this; }

	// 객체 자체를 반환 -> 함수를 호출한 객체의 참조 반환, 반환 결과 자체가 그 객체가 된다 (역참조)
	CPoint& MoveX(int a) { x += a; return (*this); }
	CPoint& MoveY(int b) { y += b; return (*this); }

	void Print() { cout << "(" << x << ", " << y << ")" << endl; }
};

int main()
{
	CPoint P1(1, 2);
	// P1.MoveX(3)->MoveY(4);	// MoveX의 결과가 P1 포인터
	P1.MoveX(3).MoveY(4);		// MoveX의 결과가 P1 그 자체
	P1.Print();

	return 0;
}