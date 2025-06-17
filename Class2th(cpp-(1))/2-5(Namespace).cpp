#include <iostream>
using namespace std;
namespace CompanyA {			// Namespace CompanyA 작성
	int g_VarA;
	void func1() { cout << "CompanyA::func1" << endl; }
	void func2() { cout << "CompanyA::func2" << endl; }
}

namespace CompanyB {			// Namespace CompanyB 작성
	using namespace CompanyA;	// Namespace CompanyA를 CompanyB로 포함
	int g_VarB;
	void func1() { cout << "CompanyB::func1" << endl; }

	namespace DeptC {			// CompanyB 내에 Namespace DeptC 작성
		void func1() { cout << "CompanyB::DeptC::func1" << endl; }
	}
}

int main(void) {
	CompanyB::func1();
	CompanyB::func2();			// 실제로는 CompanyA의 func2 함수실행
	CompanyB::DeptC::func1();

	return 0;
}