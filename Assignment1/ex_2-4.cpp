#include <iostream>
#include<cmath>
using namespace std;

#define PI 3.14

int GetArea(int a, int b) { return a * b; }

double GetArea(int r) { return pow(r, 2) * PI; }

int main()
{
	int num;
	cout << "���̸� ���� ������ �����ϼ���" << endl;
	cout << "[1]-���簢��\t[2]-�� : ";
	cin >> num;
	switch (num)
	{
	case 1:
		int a, b;
		cout << "���� ���� �Է� :";
		cin >> a >> b;
		cout << "���簢���� ���� : " << GetArea(a, b) << endl;
		break;
	case 2:
		int r;
		cout << "������ �Է� : ";
		cin >> r;
		cout << "���� ���� : " << GetArea(r) << endl;
		break;
	}
	return 0;
}
