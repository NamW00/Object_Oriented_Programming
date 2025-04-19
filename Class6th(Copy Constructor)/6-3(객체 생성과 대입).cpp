#include <iostream>
#include <cstring>	// strlen, strcpy 함수 호출
using namespace std;

class CString
{
private:
	int len;	// 문자열의 길이
	char* str;	// 문자열 포인터

public:
	CString(const char* s = "Unknown")
	{
		len = strlen(s);
		str = new char[len + 1];
		strcpy(str, s);		// 문자열을 복사(string copy)
	}
	~CString()
	{
		delete[] str;
	}
	void Print() {
		cout << str << endl;
	}
};
int main()
{
	CString str1 = "C++ Programming";
	CString str2 = str1;	// 복사 생성
	CString str3;

	str3 = str1;			// 대입 연산

	str1.Print();
	str2.Print();
	str3.Print();

	return 0;
}