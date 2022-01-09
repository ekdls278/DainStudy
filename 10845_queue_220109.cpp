#include<iostream>
#include<string>
#include<vector>
#include<queue>
using namespace std;
int main (){
	int n;
	cin >> n;

	string s = "";
	queue<int> que;
	for (int i = 0; i < n; i++) {
		cin >> s;

		if (s == "push") {
			int num;
			cin >> num;
			que.push(num);
		}
		else if (s == "pop") {
			if (!que.empty()) {
				cout << que.front() << endl;
				que.pop();
			}
			else
				cout << "-1" << endl;
		}
		else if(s=="size") {
			cout << que.size() << endl;
		}
		else if (s == "empty") {
			if (que.empty()) {
				cout << "1" << endl;
			}
			else
				cout << "0" << endl;
		}
		else if (s == "front") {
			if (!que.empty()) {
				cout << que.front() << endl;
			}
			else
				cout << "-1" << endl;
		}
		else if (s == "back") {
			if (!que.empty()) {
				cout << que.back()<<endl;
			}
			else
				cout << "-1" << endl;
		}
	}


	return 0;
}
