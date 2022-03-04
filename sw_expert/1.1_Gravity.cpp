#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;




int main() {

	int T, N, M, H;
	int count = 0;
	int MAX_NUM = 0;
	int BOXTOP[100];
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> N >> M;
		vector<vector<int>> vec(N, vector<int>(M, 0));

		for (int j = 0; j < N; j++) {
			cin >> BOXTOP[j];
			for (int k = 0; k < BOXTOP[j]; k++) {
				vec[j][k] = 1;
			}
		}
		for (int k = 0; k < N; k++) {
			if (BOXTOP[k] > 0) {
				count = 0;

				for (int l = k; l < N; l++) {
					if (vec[l][BOXTOP[k] - 1] == 0)
						count++;
				}
				MAX_NUM = max(MAX_NUM, count);

			}
		}
		}

	cout << MAX_NUM;

	return 0;
}
