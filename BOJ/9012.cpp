#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while (t--) {
		stack <char> s;
		bool flag{ true };
		string str;
		cin >> str;

		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(') {
				s.push(str[i]);
			}
			else if (str[i] == ')')
				if (!s.empty())
					s.pop();
				else {
					flag = false;
					break;
				}
		}
		if (!flag || !s.empty())
			cout << "NO" << "\n";
		else {
			cout << "YES" << "\n";
		}
	}

	return 0;
}