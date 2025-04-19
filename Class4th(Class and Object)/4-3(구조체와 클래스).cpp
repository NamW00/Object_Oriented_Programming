#include <iostream>
using namespace std;

struct Point
{
private:
	int x;
	int y;
public:
	void SetXY(int a, int b) { x = a; y = b; }
	void Move(int a, int b)
	{
		x += a;
		y += b;
	}
	void Print() { cout << "(" << x << ", " << y << ")" << endl; }
};

int main()
{
	Point p1;

	cout << "변경 전 p1 : ";
	p1.SetXY(1, 2);
	p1.Print();


	cout << "변경 후 p1 : ";
	p1.Move(3, 4);
	p1.Print();



	return 0;
}
