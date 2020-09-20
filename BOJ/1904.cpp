#include <iostream>
using namespace std;

long long dp[1000001];

long long cal(int n) {
	dp[1] = 1;
	dp[2] = 2;

	for (int i = 3; i <= n; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2]) % 15746;
	}

	return dp[n];
}


int main() {
	int n;

	cin >> n;

	cout << cal(n) << "\n";
}