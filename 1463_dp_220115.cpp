#include<iostream>
#include<vector>

using namespace std;
const int UNKNOWN = -1;
const int MAX_SIZE = 10000000;

vector<int> memo(MAX_SIZE, UNKNOWN);

int main() {
	memo[1] = 0;
	int num;
	cin >> num;
	for (int i = 2; i < num + 1; i++) {
		memo[i] = memo[i - 1] + 1;
		if (i % 2 == 0) {
			memo[i] = min(memo[i], memo[i / 2] + 1);
		}
		if (i % 3 == 0) {
			memo[i] = min(memo[i], memo[i / 3] + 1);
		}
	}
	cout << memo[num];
	return 0;
}
