#include <iostream>

using namespace std;

int a[1000001];

int cal(int n, int k) {
	int count{ 0 };
	int money{ k };

	while (money != 0) {
		if (a[n] > money) {
			n--;
			continue;
		}
		else if (a[n] == money) {
			money -= a[n];
		}
		else {
			money -= a[n];
		}
		count++;
	}
	return count;
}

int main() {
	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	cout << cal(n, k) << "\n";
}