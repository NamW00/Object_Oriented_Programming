#include <iostream>
using namespace std;

class CPoint {
private:
	int x, y;
public:
	CPoint(int a, int b) : x(a), y(b) {}
	void Print() { cout << "(" << x << ", " << y << ")" << endl; }
};

int main(void)
{
#pragma region ��ü �迭 ���� �� �ʱ�ȭ�� �������� ��� ��
	// CPoint pt[3] = { CPoint(), CPoint(1), CPoint(2,3) };
	// ->�Ű����� 0��, int�� 1��, int�� 2���� �����ڰ� ���� �����ؾ���
	// 
	// CPoint pt[3] = { CPoint(2,3) };
	// -> �Ű����� 2���� ������
	// -> �Ű����� 0���� ������ �ʿ� : �� ��° ���Һ��� ����
	// 
	// CPoint pt[3] = {1, 2, CPoint(3,4)};
	// -> �Ű����� int�� 1��, int�� 2���� ������ �ʿ�
	// 
	// CPoint P1 = 5;
	// -> �Ű������� 1���� ��� Ŭ������ ��������
#pragma endregion

	CPoint pt[5] = { CPoint(0,0), CPoint(1,1), CPoint(2,2), CPoint(3,3), CPoint(4,4) };	// ��ü �迭 ���� & �ʱ�ȭ
	// �� ��ü�� �ʱ�ȭ ����� ����
	// CPoint P1 = CPoint(1,1); 
	// CPoint(int, int) 
	// ���� ���� �����ڰ� �����ؾ���

	for (int i = 0; i < 5; i++)
	{
		pt[i].Print();
	}


	return 0;
}