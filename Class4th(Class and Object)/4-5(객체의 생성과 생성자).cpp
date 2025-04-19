#include <iostream>
using namespace std;

class CPoint
{
private:
	int x;
	int y;
public:
	CPoint(int a, int b) { x = a; y = b; }	// ������1, 2���� �Ű� ����
	CPoint(int a) { x = a; y = 0; }			// ������2, 1���� �Ű� ����
	void Print() { cout << "(" << x << ", " << y << ")" << endl; }

};


int main()
{
	CPoint P1(3, 4);	// ������1 ���
	CPoint P2(5);		// ������2 ���
	CPoint P3 = 6;		// ������3 ���

	P1.Print();
	P2.Print();
	P3.Print();


	return 0;
}
