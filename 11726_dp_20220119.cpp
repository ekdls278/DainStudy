#include<iostream>
#include<vector>

const int MAX_NUM = 1001;
const int UNKNOWN = -1;

using namespace std;

vector<unsigned long long> DP(MAX_NUM, UNKNOWN);

int main() {

	int n;
	cin >> n;

	DP[1] = 1;
	DP[2] = 2;

	for (int i = 3; i <= n; i++) {
		DP[i] = (DP[i - 1] + DP[i - 2])%10007;
	}

	cout << DP[n];

	return 0;
}

//DP[i] = DP[i-1]+DP[i-2]
//cout<<DP[n]%10007 을 하게되면 overflow가 발생해서 틀리는데 왜?
//
