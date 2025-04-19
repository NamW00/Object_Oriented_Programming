#include <iostream>
using namespace std;

class CPoint {
private:
	int x, y;
public:
	CPoint(int a, int b) : x(a), y(b) {}
	void Print() { cout << "(" << x << ", " << y << ")" << endl; }
};

int main(void)
{
#pragma region 객체 배열 생성 및 초기화와 생성자의 사용 예
	// CPoint pt[3] = { CPoint(), CPoint(1), CPoint(2,3) };
	// ->매개변수 0개, int형 1개, int형 2개인 생성자가 각각 존재해야함
	// 
	// CPoint pt[3] = { CPoint(2,3) };
	// -> 매개변수 2개인 생성자
	// -> 매개변수 0개인 생성자 필요 : 두 번째 원소부터 적용
	// 
	// CPoint pt[3] = {1, 2, CPoint(3,4)};
	// -> 매개변수 int형 1개, int형 2개인 생성자 필요
	// 
	// CPoint P1 = 5;
	// -> 매개변수가 1개인 경우 클래스명 생략가능
#pragma endregion

	CPoint pt[5] = { CPoint(0,0), CPoint(1,1), CPoint(2,2), CPoint(3,3), CPoint(4,4) };	// 객체 배열 선언 & 초기화
	// 각 객체의 초기화 방법에 주의
	// CPoint P1 = CPoint(1,1); 
	// CPoint(int, int) 
	// 위와 같은 생성자가 존재해야함

	for (int i = 0; i < 5; i++)
	{
		pt[i].Print();
	}


	return 0;
}