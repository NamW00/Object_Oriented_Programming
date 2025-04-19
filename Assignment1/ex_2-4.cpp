#include <iostream>
#include<cmath>
using namespace std;

#define PI 3.14

int GetArea(int a, int b) { return a * b; }

double GetArea(int r) { return pow(r, 2) * PI; }

int main()
{
	int num;
	cout << "넓이를 구할 도형을 선택하세요" << endl;
	cout << "[1]-직사각형\t[2]-원 : ";
	cin >> num;
	switch (num)
	{
	case 1:
		int a, b;
		cout << "가로 세로 입력 :";
		cin >> a >> b;
		cout << "직사각형의 넓이 : " << GetArea(a, b) << endl;
		break;
	case 2:
		int r;
		cout << "반지름 입력 : ";
		cin >> r;
		cout << "원의 넓이 : " << GetArea(r) << endl;
		break;
	}
	return 0;
}
