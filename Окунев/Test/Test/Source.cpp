#include <string>
#include <iostream>
using namespace std;
int main()
{
	string str1 = "b";
	string str2 = "ab";
	string* str3 = new string(str1);
	if (str3)
		cout << *str3;
	else
		cout << 0;

	getchar();
	getchar();
	return 0;
}