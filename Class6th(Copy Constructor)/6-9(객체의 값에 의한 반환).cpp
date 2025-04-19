#include <iostream>
using namespace std;
class CString
{
private:
	int len;
	char* str;

public:
	CString(const char* s = "Unknown") {
		len = strlen(s);
		str = new char[len + 1];
		strcpy(str, s);
	}
	~CString() { delete[] str; }
	void Print() { cout << str << endl; }
};
CString GetString(void) {
	CString str("Current String");  // 瘤开 按眉 str 积己
	return str;						// 瘤开 按眉蔼 馆券, 烙矫按眉 积己
}

int main() {
	CString str1 = GetString();
	str1.Print();

	return 0;
}