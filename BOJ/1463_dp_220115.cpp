#include<iostream>
#include<vector>

const int MAX_NUM = 1000001;
const int CHECK = -1;

using namespace std;

vector<unsigned int> DP(MAX_NUM, CHECK);
int main() {
	unsigned int num = 0;
	cin >> num;
	DP[1] = 0;
	DP[2] = 1;
	DP[3] = 1;

	for(int i=4;i<=num;i++) {
		DP[i] = 1 + DP[i - 1];//1을 먼저 뺴고 계산한 값을 저장
		if (i % 2 == 0) {//2로 나누어질때와 위 저장한 값을 비교 작은값
			DP[i] = min (1 + DP[i / 2],DP[i]);
		}
		if (i % 3 == 0) {//3으로 나누어질 때 위와 비교해 작은값
			DP[i] = min(1 + DP[i / 3], DP[i]);
		}
	}
	cout << DP[num];


	return 0;
}

/*1	1	0
2	2>1	1
3	3>1 1
4	4>3>1	2
	4>2>1	2
5	5>4>2>1 3
6	6>2>1	2
7	7>6>2>1	3
8	8>4>2>1 3
9	9>3>1	2
10	10>5>4>2>1
	10>9>3>1*/

//2로 나누어지는 경우
//3으로 나누어지는 경우
//2와3으로 나누어지는 경우
//2와 3으로도 나누어지지 않는 경우
//잘못된 풀
int main() {
	unsigned int num = 0;
	cin >> num;
	DP[1] = 0;
	DP[2] = 1;
	DP[3] = 1;

	for(int i=4;i<=num;i++) {
		if (i % 3 == 0) {
			DP[i] = min (1 + DP[i / 3],1+DP[i-1]);
		}
		else if (i % 2 == 0) {
			DP[i] = min(1 + DP[i / 2],1+DP[i-1]);
		}
		else {
			DP[i] = 1 + DP[i - 1];
		}
	}
	cout << DP[num];


	return 0;
}
//2와 3으로 나누어지는 경우 1284와 같은경우 출력값이 틀림.

