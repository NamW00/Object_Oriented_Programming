#include <iostream>
using namespace std;

class CPoint {
private:
	int x, y;
public:
	void SetXY(int a, int b) { x = a; y = b; }
	void Print() { cout << "(" << x << ", " << y << ")" << endl; }
};

int main(void)
{
#pragma region ���� 5.1
	int arr[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
#pragma endregion
#pragma region ���� 5.2
	//CPoint pt[5];	// 5�� ���Ҹ� ���� CPoint�� ��ü �迭
	//int i;

	//for (int i = 0; i < 5; i++)
	//{
	//	pt[i].SetXY(i, i);
	//}

	//for (int i = 0; i < 5; i++)
	//{
	//	pt[i].Print();
	//}
#pragma endregion


	return 0;
}