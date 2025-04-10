#include <iostream>
using namespace std;

class CPoint {
private:
	int x, y;
public:
	void SetXY(int a, int b) { x = a; y = b; }
	void Print() { cout << "(" << x << ", " << y << ")" << endl; }
};

int main(void)
{
#pragma region 예제 5.2
	CPoint pt[5];	// 5개 원소를 갖는 CPoint형 객체 배열
	int i;

	for (int i = 0; i < 5; i++)
	{
		pt[i].SetXY(i, i);
	}

	for (int i = 0; i < 5; i++)
	{
		pt[i].Print();
	}
#pragma endregion


	return 0;
}