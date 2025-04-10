#include <iostream>
using namespace std;

struct CPoint	// 클래스를 구조체로 바꾼다면?
{
	int x, y;
};

void Move(CPoint* This, int a, int b)	// 멤버 함수는 전역 함수로 해당 객체의 주소를 This 포인터로 받음
{
	This->x += a;
	This->y += b;
}

void Print(CPoint* This)	// 멤버 함수는 전역 함수로 해당 객체의 주소를 This 포인터로 받음
{
	cout << "(" << This->x << ", " << This->y << ")" << endl;
}

int main()
{
	CPoint P1 = { 1, 2 };
	CPoint P2 = { 3, 4 };

	Move(&P1, 1, 1);	// 함수 호출 시 관련 객체의 주소를 넘김
	Move(&P2, 2, 2);

	Print(&P1);
	Print(&P2);

	return 0;
}