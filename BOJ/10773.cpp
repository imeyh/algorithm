#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int k;
	stack <int> s;
	int sum{ 0 };
	cin >> k;

	while (k--) {
		int n;
		cin >> n;
		if (n == 0)
			s.pop();
		else
			s.push(n);
	}

	while (!s.empty()) {
		sum += s.top();
		s.pop();
	}

	cout << sum << "\n";
}