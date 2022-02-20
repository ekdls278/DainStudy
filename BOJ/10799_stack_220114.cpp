#include <iostream>
#include<string>
#include<stack>
using namespace std;


int main(){
	string s;
	cin >> s;
	stack<char> st;
	int sum = 0;
	
	for (int i = 0;i < s.size(); i++) {
		if (s[i] == '(') {
			st.push(s[i]);
		}
		else if (s[i] == ')') {
			if (s[i - 1] == '(') {
				st.pop();
				sum += st.size();
			}
			else {
				sum++;
				st.pop();
			}
		}
	}
	cout << sum;
	return 0;
}


