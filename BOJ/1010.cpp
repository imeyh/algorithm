#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;

	
	while (T--) {
		int N, M;
		long long n{ 1 }, m{ 1 };
		cin >> N >> M;

		if (N > M / 2)
			N = M - N;

		for (int i = 1; i <= N; i++) {
			m *= M;
			n *= i;

			M--;
		}

		int bridge = m / n;

		cout << bridge << "\n";
	}

	return 0;
}