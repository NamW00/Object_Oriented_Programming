#include <iostream>
using namespace std;

class CPoint
{
private:
	int x;
	int y;
public:
	CPoint(int a, int b) { x = a; y = b; }	// 생성자1, 2개의 매개 변수
	CPoint(int a) { x = a; y = 0; }			// 생성자2, 1개의 매개 변수
	void Print() { cout << "(" << x << ", " << y << ")" << endl; }

};


int main()
{
	CPoint P1(3, 4);	// 생성자1 사용
	CPoint P2(5);		// 생성자2 사용
	CPoint P3 = 6;		// 생성자3 사용

	P1.Print();
	P2.Print();
	P3.Print();


	return 0;
}
