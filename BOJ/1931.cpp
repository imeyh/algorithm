#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n;
	vector <pair<int, int>> time;
	int count{ 1 };
	int j = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;

		time.push_back({ b,a });
	}

	sort(time.begin(), time.end());

	for (int i = j + 1; i < n; i++) {
		if (time[i].second >= time[j].first) {
			j = i;
			count++;
		}
	}

	cout << count << "\n";
}