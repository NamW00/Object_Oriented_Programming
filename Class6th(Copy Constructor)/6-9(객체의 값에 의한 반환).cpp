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
	CString str("Current String");  // ���� ��ü str ����
	return str;						// ���� ��ü�� ��ȯ, �ӽð�ü ����
}

int main() {
	CString str1 = GetString();
	str1.Print();

	return 0;
}