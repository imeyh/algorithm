#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	pair<int, int> dp[41];
	int t;
	cin >> t;

	dp[0] = { 1,0 };
	dp[1] = { 0,1 };

	while (t--) {
		int n;
		cin >> n;
		for (int i = 2; i <= n; i++) {
			dp[i] = { dp[i - 2].first + dp[i - 1].first,dp[i - 2].second + dp[i - 1].second };
		}

		cout << dp[n].first << " " << dp[n].second << "\n";
	}

	return 0;
}