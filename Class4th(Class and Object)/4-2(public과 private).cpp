#include <iostream>
using namespace std;

class Car
{
private:
	int m_color;
	int m_CC = 1000;
	int m_speed = 0;

public:
	void Accelerate() { // 가속
		m_speed++;
		cout << "가속한 속도 : " << m_speed << endl;
	}
	void Stop() { cout << "Stop~!" << endl; } // 멈춤
	void TurnOn() { cout << "Turn on~!" << endl; } // 시동켜기
};

int main()
{
	Car MyCar1, MyCar2;
	MyCar1.Accelerate();
	MyCar2.Stop();
	MyCar1.TurnOn();

	return 0;
}
