#include <iostream>
using namespace std;

inline int Abs(int X)
{
	return (X > 0 ? X : -X);
}

int main()
{
	cout << "Abs(-4 + 2) = " << Abs(-4 + 2) << endl;
	return 0;
}
