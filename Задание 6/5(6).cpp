#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	cout << str.substr(str.rfind(' ')+1, str.size()) << endl;
	return 0;
}