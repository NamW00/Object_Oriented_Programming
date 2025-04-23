#include <iostream>
using namespace std;

namespace A {
	int var;
	void func1() { cout << "A의 func1" << endl; }
	void func2() { cout << "A의 func2" << endl; }
}
namespace B {
	using namespace A;
	int var;
	void func1() { cout << "B의 func1" << endl; }

	namespace C {
		void func1() { cout << "C의 func1" << endl; }
	}
}
int main() {
	B::func1();
	B::func2();
	B::C::func1();
	return 0;
}