#include <iostream>
#include<string>
#include<vector>

using namespace std;

const int UNKNOWN = -1;
const int MAX_SIZE = 100;

vector<unsigned long> memo(MAX_SIZE, UNKNOWN);

unsigned long fivo(unsigned int n) {
	if (n < 2) 
		return n;
	if (memo[n] != UNKNOWN)
		return memo[n];
	unsigned long result = fivo(n - 1) + fivo(n - 2);
	memo[n] = result;
	return result;
}

int main(){
	unsigned int n;
	cin >> n;

	cout << fivo(n);

	return 0;
}
//0 1 1 2 3
//
