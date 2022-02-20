#include <iostream>
#include <queue>
#include<deque>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	deque<int> deq;
	string s = "";
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s == "push_front") {
			int num;
			cin >> num;
			deq.push_front(num);
		}
		else if (s == "push_back") {
			int num;
			cin >> num;
			deq.push_back(num);
		}
		else if (s == "pop_front") {
			if (!deq.empty()) {
				cout << deq.front()<<endl;
				deq.pop_front();
			}
			else {
				cout << "-1"<<endl;
			}
		}
		else if (s == "pop_back") {
			if (!deq.empty()) {
				cout << deq.back()<< endl;
				deq.pop_back();
			}
			else {
				cout << "-1"<< endl;
			}
		}
		else if (s == "size") {
			cout << deq.size()<< endl;
		}
		else if (s == "empty") {
			if (deq.empty()) {
				cout << "1"<< endl;
			}
			else
				cout << "0"<< endl;
		}
		else if (s == "front") {
			if (!deq.empty()) {
				cout << deq.front()<< endl;
			}
			else
				cout << "-1"<< endl;
		}
		else if (s == "back") {
			if (!deq.empty()) {
				cout << deq.back()<< endl;
			}
			else
				cout << "-1"<< endl;
		}
	}


	return 0;
}

