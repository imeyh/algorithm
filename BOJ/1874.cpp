#include <iostream>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	queue <int> q;
	stack <int> s;
	vector <char> v;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		int k;
		cin >> k;
		q.push(k);
		s.push(i);

		v.push_back('+');

		while (!s.empty() && q.front() == s.top()) {
			q.pop();
			s.pop();
			v.push_back('-');
		}

	}

	if (!s.empty())
		cout << "NO";
	else {
		for (auto i : v) {
			cout << i << "\n";
		}
	}

	return 0;
}