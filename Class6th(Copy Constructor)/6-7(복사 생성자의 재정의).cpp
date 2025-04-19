#include <iostream>
#include <cstring>
using namespace std;

class CString {
private:
	int len;
	char* str;

public:
	// 복사 생성자 재정의 함으로써 복사 생성시 발생하는 문제를 해결)
	CString(const CString& string) {		// 복사 생성자
		len = string.len;
		str = new char[len + 1];
		strcpy(str, string.str);
	}
	CString(const char* s = "UnKnown") {	// 일반 생성자
		len = strlen(s);
		str = new char[len + 1];
		strcpy(str, s);
	}
	~CString() { delete[] str; }
	void Print() { cout << str << endl; }

};
// 값에 의한 전달, 복사 생성
void ShowString(CString str) {
	str.Print();
}

int main()
{
	CString str1 = "C++ Programming";
	CString str2 = str1;		// 복사 생성

	str1.Print();
	ShowString(str2);			// 값에 의한 전달

	return 0;
}
