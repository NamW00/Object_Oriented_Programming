#include <iostream>
using namespace std;

struct Point
{
private:
	int x;
	int y;
public:
	void SetXY(int a, int b) { x = a; y = b; }
	int GetX(Point &p) { return p.x; }
	int GetY(Point &p) { return p.y; }
	int pXSum(Point &p1, Point &p2) {
		int xSum = 0;
		xSum = p1.x + p2.x;
		return xSum;
	}
	int pYSum(Point& p1, Point& p2) {
		int ySum = 0;
		ySum = p1.y + p2.y;
		return ySum;
	}

	void Print() { cout << "(" << x << ", " << y << ")" << endl; }
};

int main()
{
	Point pSum;
	Point p1;
	Point p2;

	p1.SetXY(1, 2);
	p1.Print();

	p2.SetXY(3, 4);
	p2.Print();

	pSum.SetXY(pSum.pXSum(p1, p2), pSum.pYSum(p1, p2));
	pSum.Print();

	cout << "p1 + p2¿¡¼­ÀÇ (x, y) : (" << pSum.pXSum(p1, p2) 
		<<", " <<pSum.pYSum(p1,p2) << ")" << endl;

	
	return 0;
}
