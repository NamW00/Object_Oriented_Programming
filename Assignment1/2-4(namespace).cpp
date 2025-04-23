#include <iostream>
using namespace std;

namespace Microsoft {
	int var;
	int Plus(int x, int y) {
		return x + y;
	}
	int Minus(int x, int y);
}
namespace Samsung {
	int var;
	int Plus(int x, int y) {
		return x + y;
	}
	int Minus(int x, int y);
}
int Microsoft::Minus(int x, int y) {
	return (x - y);
}

int Samsung::Minus(int x, int y) {
	return (x - y);
}

int main() {
	Microsoft::var = Microsoft::Minus(5, 2);
	cout << Microsoft::var << endl;
	return 0;
}