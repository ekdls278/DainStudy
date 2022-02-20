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
/*1	1	1
2	2	
	11	2
3	111
	12
	21	3
4	1111
	112
	121
	211
	22	5
5	11111
	1112
	1121
	1211
	2111
	122
	212
	221	8
	5=DP[i-2]+DP[i-1]
	*/
//DP[i] = DP[i-1]+DP[i-2]
//cout<<DP[n]%10007 을 하게되면 overflow가 발생해서 틀리는데 왜?



//11727풀이동일
#include<iostream>
#include<vector>
using namespace std;

const unsigned int MAX_NUM = 1001;
const unsigned int UNKNOWN = -1;

vector<unsigned int> DP(MAX_NUM, UNKNOWN);

int main() {
	int num = 0;
	cin >> num;
	DP[1] = 1;
	DP[2] = 3;
	for (int i = 3; i <= num; i++) {
		DP[i] = (DP[i - 1] + DP[i - 2] * 2) % 10007;
	}

	cout << DP[num];

	return 0;
}

/*
1	1
2	11
	2  *2
		3
3	111
	12	*2
	21	*2
		5
4	1111
	112	2
	121	2
	211 2
	22  4
		11
		DP[i-1]+DP[i-2]*2


*/
