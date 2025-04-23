#include "ns.h"

int MyNS::MyMax(int x, int y) {
	if (x > y){
		return x;
	}
	else if (x < y) {
		return y;
	}
	else {
		cout << "두 수는 동일하다 " << endl;
	}
}

int MyNS::MyMin(int x, int y) {
	if (x < y) {
		return x;
	}
	else if (x > y) {
		return y;
	}
	else {
		cout << "두 수는 동일하다 " << endl;
	}
}