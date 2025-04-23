#include <iostream>
using namespace std;

class CArray {
private:
	int arr[5];
public:
	CArray() {
		for (int i = 0; i < 5; i++)
		{
			arr[i] = 0;
		}
	}
	int& GetElem(int i)
	{
		return arr[i];
	}
	CArray& increase(int a)
	{
		arr[a] += 1;
		return *this;
	}
};

int main(void)
{
	int i;
	CArray Arr;

	for (int i = 0; i < 5; i++)
	{
		Arr.GetElem(i) = i;
	}

	Arr.increase(0).increase(1).increase(2).increase(3).increase(4);

	for (i = 0; i < 5; i++)
	{
		cout << "Arr[" << i << "]" << Arr.GetElem(i) << endl;
	}

	return 0;
}