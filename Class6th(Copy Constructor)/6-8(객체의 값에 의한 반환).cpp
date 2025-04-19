#include <iostream>
using namespace std;
class CPoint
{
private:
	int x, y;
public:
	CPoint(int a = 0, int b = 0) : x(a), y(b) {}
	void Print() { cout << "(" << x << ", " << y << ")" << endl; }
};

CPoint GetPoint(void) {
	CPoint Po(3, 4);		// 지역 객체 Po 생성
	return Po;				// 지역 객체값 반환
}

int main() {
	CPoint P1 = GetPoint();	// GetPoint 함수 호출
	P1.Print();

	return 0;
}