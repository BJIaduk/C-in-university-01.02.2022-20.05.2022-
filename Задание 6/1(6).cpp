#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	int i, n = 0;
	getline(cin, str);
	for (i = 0; i < str.size(); i++) 
		if (str[i] == 'c') {
			str[i] = 'v';
			n++;
		}
	cout << str << endl << n;
	return 0;
}