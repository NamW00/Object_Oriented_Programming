#include <iostream>
#include <cstring>	// strlen, strcpy �Լ� ȣ��
using namespace std;

class CString
{
private:
	int len;	// ���ڿ��� ����
	char* str;	// ���ڿ� ������

public:
	CString(const char* s = "Unknown")
	{
		len = strlen(s);
		str = new char[len + 1];
		strcpy(str, s);		// ���ڿ��� ����(string copy)
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
	CString str2 = str1;	// ���� ����
	CString str3;

	str3 = str1;			// ���� ����

	str1.Print();
	str2.Print();
	str3.Print();

	return 0;
}