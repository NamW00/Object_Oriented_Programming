#include <iostream>
using namespace std;

class CPoint {
private:
	int x, y;
public:
	CPoint() : x(0), y(0) {}
	CPoint(int a, int b) : x(a), y(b) {}
	void SetXY(int a, int b) { x = a; y = b; }
	void Print() { cout << "(" << x << ", " << y << ")" << endl; }
};

int main(void)
{
#pragma region 예제 5-1

	cout << "예제 5-1 결과 값" << endl;

	int arr[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++)
		cout << "arr[" << i << "] = " << arr[i] << endl;

#pragma endregion
#pragma region 예제 5-2

	CPoint pt1[5];	// 5개 원소를 갖는 CPoint형 객체 배열

	cout << "예제 5-2 결과 값" << endl;

	for (int i = 0; i < 5; i++)
		pt1[i].SetXY(i, i);

	for (int i = 0; i < 5; i++)
		pt1[i].Print();

#pragma endregion
#pragma region 예제 5-3

	CPoint pt2[5] = { CPoint(0,0), CPoint(1,1), CPoint(2,2),CPoint(3,3), CPoint(4,4) };

	cout << "예제 5-3 결과 값" << endl;

	for (int i = 0; i < 5; i++) {
		pt2[i].Print();
	}

#pragma endregion

	return 0;
}