#include <iostream>
#include <vector>

using namespace std;


int main() {
	int T;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		int N;
		cin >> N;

		vector<int> v;
		int sum{ 0 };
		for (int j = 0; j < N; j++) {
			int k;
			cin >> k;
			v.push_back(k);
			sum += k;
		}

		int avg = sum / N;
		int count{ 0 };

		for (auto it : v) {
			if (it <= avg)
				count++;
		}

		cout << "#" << i << " " << count << "\n";

	}

	return 0;
}