#include <iostream>
using namespace std;

class Car
{
private:
	int m_color;
	int m_CC = 1000;
	int m_speed = 0;

public:
	void Accelerate() { // ����
		m_speed++;
		cout << "������ �ӵ� : " << m_speed << endl;
	}
	void Stop() { cout << "Stop~!" << endl; } // ����
	void TurnOn() { cout << "Turn on~!" << endl; } // �õ��ѱ�
};

int main()
{
	Car MyCar1, MyCar2;
	MyCar1.Accelerate();
	MyCar2.Stop();
	MyCar1.TurnOn();

	return 0;
}
