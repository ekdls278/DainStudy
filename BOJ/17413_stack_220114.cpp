#include <iostream>
#include<string>
#include<stack>
using namespace std;


void print(stack<char>& s) {
	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
}

int main(){
	bool flag =false;
	string s;
	
	getline(cin, s);
	stack<char> st;
	for (char ch : s) {
		if (ch == '<') {
			print(st);
			flag = true;
			cout << ch;
		}
		else if (ch == '>') {
			flag = false;
			cout << ch;
		}
		else if (flag) {
			cout << ch;
		}
		else if (ch == ' ') {
			print(st);
			cout << ch;
		}
		else
		{
			st.push(ch);
		}
	}
	print(st);
	return 0;
}

