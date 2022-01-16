#include<iostream>
#include<vector>

using namespace std;

vector<long long> memo(10000000, -1);


int main() {
	memo[1] = 1;
	memo[2] = 2;
	memo[3] = 4;
	int n;
	int t;
	cin >> t;
	for (int j = 0; j < t; j++) {
		cin >> n;
		for (int i = 4; i < n + 1; i++) {
			memo[i] = memo[i - 1] + memo[i - 2] + memo[i - 3];
		}
		cout << memo[n]<<endl;

	}

	return 0;
}
