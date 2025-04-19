#include <iostream>
#include <cstring>
using namespace std;

class CPoint
{
private:
	int x, y;

public:
	CPoint(const CPoint& Po) {						// 汗荤 积己磊
		x = Po.x; y = Po.y;
	}
	CPoint(const CPoint& Po, int a) {				// 老馆 积己磊
		x = Po.x * a; y = Po.y * a;
	}
	CPoint(int a = 0, int b = 0) : x(a), y(b) {}	// 老馆 积己磊
	void Print() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
};


int main() {
	CPoint P1(1, 2);
	CPoint P2(P1);
	CPoint P3(P1, 3);

	P1.Print();
	P2.Print();
	P3.Print();

	return 0;
}