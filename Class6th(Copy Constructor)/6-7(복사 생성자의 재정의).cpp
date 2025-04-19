#include <iostream>
#include <cstring>
using namespace std;

class CString {
private:
	int len;
	char* str;

public:
	// ���� ������ ������ �����ν� ���� ������ �߻��ϴ� ������ �ذ�)
	CString(const CString& string) {		// ���� ������
		len = string.len;
		str = new char[len + 1];
		strcpy(str, string.str);
	}
	CString(const char* s = "UnKnown") {	// �Ϲ� ������
		len = strlen(s);
		str = new char[len + 1];
		strcpy(str, s);
	}
	~CString() { delete[] str; }
	void Print() { cout << str << endl; }

};
// ���� ���� ����, ���� ����
void ShowString(CString str) {
	str.Print();
}

int main()
{
	CString str1 = "C++ Programming";
	CString str2 = str1;		// ���� ����

	str1.Print();
	ShowString(str2);			// ���� ���� ����

	return 0;
}
