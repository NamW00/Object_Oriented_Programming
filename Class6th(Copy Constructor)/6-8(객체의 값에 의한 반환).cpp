#include <iostream>
using namespace std;
class CPoint
{
private:
	int x, y;
public:
	CPoint(int a = 0, int b = 0) : x(a), y(b) {}
	void Print() { cout << "(" << x << ", " << y << ")" << endl; }
};

CPoint GetPoint(void) {
	CPoint Po(3, 4);		// ���� ��ü Po ����
	return Po;				// ���� ��ü�� ��ȯ
}

int main() {
	CPoint P1 = GetPoint();	// GetPoint �Լ� ȣ��
	P1.Print();

	return 0;
}