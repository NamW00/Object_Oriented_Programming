#include "ns.h"
using namespace std;

int main() {
	int x, y = 0;
	cout << "µÎ ¼ö ÀÔ·Â : ";
	cin >> x >> y;

	cout << "ÃÖ´ñ°ª : " << MyNS::MyMax(x, y) << endl;
	cout << "ÃÖ¼Ú°ª : " << MyNS::MyMin(x, y) << endl;



	return 0;
}