#include <iostream>
using namespace std;

namespace Microsoft { // Microsoft 네임스페이스
	int g_MVar;
	int Plus(int x, int y) {
		return (x + y);
	}
	int Minus(int x, int y) {
		return (x - y);
	}
}
// Samsung 네임스페이스
namespace Samsung {
	int g_SVar;
	int Plus(int x, int y) {
		return (x + y);
	}
	int Minus(int x, int y);
}

int Samsung::Minus(int x, int y) { // 함수의 외부 정의 :: 사용
	return (x - y);
}

int main(void) {
	Microsoft::g_MVar = Microsoft::Minus(5, 2); // 네임스페이스 이름을 통해 구별
	Samsung::g_SVar = Samsung::Plus(3, 7);
	cout << "Microsoft::Minus(5, 2) = " << Microsoft::g_MVar << endl;
	cout << "Samsung::Plus(3, 7) = " << Samsung::g_SVar << endl;

	return 0;
}