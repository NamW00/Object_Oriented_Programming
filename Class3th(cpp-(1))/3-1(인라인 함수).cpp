#include <iostream>
using namespace std;
/*
#define MIN(X,Y) ((X)<(Y)?(X):(Y)) // ��ũ��
*/
int MIN(int X, int Y)
{
	cout << "�Լ� ���" << endl;
	return (X < Y ? X : Y);
}

int main()
{

	cout << "MIN(4, 5): " << MIN(4, 5) << endl;
	cout << "MIN((2 + 3), (1 + 2)): " << MIN((2 + 3), (1 + 2)) << endl;


	return 0;
}
