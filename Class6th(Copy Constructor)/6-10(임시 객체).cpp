#include <iostream>
using namespace std;
class CPoint
{
private:
	int x;
	int y;

public:
	CPoint(const CPoint& Po) : x(Po.x), y(Po.y) {
		cout << "복사 생성자 : " << x << ", " << y << endl;
	}
	CPoint(int a = 0, int b = 0) : x(a), y(b) {
		cout << "생성자1 : " << x << ", " << y << endl;
	}
	CPoint(const CPoint& Po, int a, int b) {
		x = Po.x + a;
		y = Po.y + b;
		cout << "생성자2 : " << x << ", " << y << endl;
	}

	~CPoint() { cout << "소멸자 : " << x << ", " << y << endl; }
	void Print() { cout << "(" << x << ", " << y << ")" << endl; }
};

CPoint GetPoint(CPoint Po) {
	return CPoint(Po, 2, 2);	// 임시객체 생성 및 반환
}

int main() {
	CPoint P1 = GetPoint(CPoint(1, 1));	// GetPoint 함수 호출
	CPoint P2 = CPoint(100, 100);		// 명시적 임시객체 생성, P2 초기화
	CPoint P3 = CPoint(1, 1);			// 명시적 임시객체 생성, P3이 참조
	CPoint P4;							// 일반 생성
	P4 = CPoint(300, 300);				// 명시적 임시객체 생성 및 대입
	// 명시적 임시객체 생성은 생성자 형태로 객체 생성

	P1.Print();
	P2.Print();
	P3.Print();
	P4.Print();
	CPoint(300, 300).Print();		// 임시객체 생성 & 멤버 함수 호출
	cout << "프로그램 종료" << endl;

	return 0;
}