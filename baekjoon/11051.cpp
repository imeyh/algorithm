#include <iostream>

using namespace std;

int dp[1001][1001];

int main() {
	int n, k;
	cin >> n >> k;

	dp[1][0] = 1;
	dp[1][1] = 1;

	if (n / 2 < k)
		k = n - k;

	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= k; j++) {
			if (j == 0)
				dp[i][j] = 1;
			else
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % 10007;
		}
	}

	cout << dp[n][k];
	
	return 0;
}
