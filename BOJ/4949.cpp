#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);


	while (1) {
		bool flag{ true };
		string str;
		stack <char> s;

		getline(cin, str);

		if (str == ".")
			break;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(' || str[i] == '[')
				s.push(str[i]);
			if (str[i] == ')') {
				if (!s.empty() && s.top() == '(') {
					s.pop();
				}
				else {
					flag = false;
					break;
				}
			}
			else if (str[i] == ']')
				if (!s.empty() && s.top() == '[') {
					s.pop();
				}
				else {
					flag = false;
					break;
				}
		}

		if (!flag || !s.empty())
			cout << "no" << "\n";
		else if (s.empty())
			cout << "yes" << "\n";

	}

	return 0;
}