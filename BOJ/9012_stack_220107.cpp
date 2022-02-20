#include<iostream>
#include<stack>
#include<string>


using namespace std;
int main() {
	int t;
	cin >> t;
	cin.ignore();
	
	while (t--)
	{
		stack<char> st;
		string s = "";
		cin >> s;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '(' || st.empty()) {//처음 시작은 (로 해야하고 )로 시작했을 때 확인을 위해 st.empty
				st.push(s[i]);
			}
			else if (st.top() == '(' && s[i] == ')') {
				st.pop();
			}
		}
		if (st.empty()) {//맞다면 스택이 다 비어있음.
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
		while (!st.empty())//다음 반복문을 위해 스택을 비워줌
		{
			st.pop();
		}
	}
	
	return 0;
}

