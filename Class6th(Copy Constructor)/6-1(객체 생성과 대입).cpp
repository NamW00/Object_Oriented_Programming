#include <iostream>
using namespace std;
class CPoint
{
private:
	int x, y;

public:
	CPoint(int a) : x(a), y(a) {}
	void Print() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
};
int main()
{
	CPoint P1(3);			// (3,3)
	CPoint P2 = CPoint(4);	// (4,4)
	CPoint P3 = 5;			// (5,5)

	P1.Print();
	P2.Print();
	P3.Print();

	return 0;
}