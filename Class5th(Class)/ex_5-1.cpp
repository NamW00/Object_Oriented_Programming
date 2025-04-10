#include <iostream>
using namespace std;

class CPoint {
private:
	int x, y;
public:
	void SetXY(int a, int b)
	{
		x = a;
		y = b;
	}
	
	void Print() { cout << "(" << x << ", " << y << ")"; }
};

int main(void)
{
	int x, y;
	CPoint pt[3][2]; // 2차원 배열 & 초기화

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << "x와 y값 입력 : ";
			cin >> x >> y;
			pt[i][j].SetXY(x, y);
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			pt[i][j].Print();
			cout << "\t";
		}
		cout << endl;
	}

	return 0;
}