#include <iostream>
using namespace std;

inline int Fact(int n)
{
	return ((n <= 1) ? 1 : n * Fact(n - 1));
}

int main()
{
	cout << "5! = " << Fact(5) << endl;
	return 0;
}
