#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(void)
{
	string s1, s2;

	cin >> s1;
	cout << s1 << endl;

	cin.ignore();

	getline(cin, s2);
	cout << s2 << endl;


	return 0;
}