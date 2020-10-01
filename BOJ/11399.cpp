#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	vector <int> p;
	long long wait[1001]{ 0 };
	cin >> n;


	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		p.push_back(k);
	}

	sort(p.begin(), p.end());

	wait[0] = p[0];
	long long sum{ wait[0] };

	for (int i = 1; i < n; i++) {
		wait[i] = wait[i - 1] + p[i];
		sum += wait[i];
	}

	cout << sum << "\n";

}