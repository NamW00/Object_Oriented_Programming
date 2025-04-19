#include <iostream>
#include <cstring>
using namespace std;

class CString
{
private:
	int len;
	char* str;

public:
	CString(const char* s = "Unknown")
	{
		len = strlen(s);
		str = new char[len + 1];
		strcpy(str, s);
	}
	~CString()
	{
		delete[] str;
	}
	void Print() { cout << str << endl; }
};

void ShowString(CString str)
{
	str.Print();
}


int main()
{
	CString str1 = "C++ Programming";
	ShowString(str1);

	return 0;
}