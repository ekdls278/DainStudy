#include<iostream>
#include<vector>
#include<algorithm>

const int MAX_NUM = 300;
const int UNKNOWN = -1;

using namespace std;

vector<int> stairs(MAX_NUM, UNKNOWN);
vector<int> DP(MAX_NUM, UNKNOWN);

int main() {

	int n,t;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> stairs[i];
	}	
	DP[1] = stairs[1];
	DP[2] = stairs[1] + stairs[2];
	DP[3] = max(stairs[1] + stairs[3] , stairs[2] + stairs[3]);
	for (int j = 4; j <= n; j++) {
		DP[j] = max(stairs[j] + stairs[j - 1] + DP[j - 3], stairs[j] + DP[j - 2]);
	}

	cout << DP[n]<<endl;


	return 0;
}
//계단[i] +계단[i-1]+계단[i-3] vs 계단[i] + 계단[i-2]

