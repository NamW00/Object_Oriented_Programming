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
	CPoint P1(3);		// ��ü ����, P1 : (3,3)
	CPoint P2(4);		// ��ü ����, P2 : (4,4)
	CPoint P3 = P2;		// ���� ����, P3 : (4,4)
	CPoint P4(P2);		// ���� ����, P4 : (4,4)

	P1 = P2;			// ��ü ����, P1 : (4,4)

	P1.Print();
	P2.Print();
	P3.Print();
	P4.Print();

	return 0;
}