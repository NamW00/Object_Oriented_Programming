#include <iostream>
using namespace std;


class CPoint
{
private:
	int x, y;

public:
	CPoint() : x(0), y(0) {}
	CPoint(int a, int b) : x(a), y(b) {}
	int GetSumX(CPoint* arr, int num)
	{
		int sumX = 0;
		for (int i = 0; i < num; i++)
		{
			sumX += arr[i].x;
		}
		return sumX;
	}
	int GetSumY(CPoint* arr, int num)
	{
		int sumY = 0;
		for (int i = 0; i < num; i++)
		{
			sumY += arr[i].y;
		}
		return sumY;
	}

	void SetXY(int a, int b) { x = a, y = b; }
	void Print() { cout << "(" << x << ", " << y << ")" << endl; }
};


int main()
{
	int i;
	CPoint arr[5] = { CPoint(1,2), CPoint(3,4), CPoint(5,6) };
	CPoint sum;

	sum.SetXY(sum.GetSumX(arr, 5), sum.GetSumY(arr, 5));

	sum.Print();

	return 0;
}