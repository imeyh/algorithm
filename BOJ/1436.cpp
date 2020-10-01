#include<iostream>
#include<string>
#include<string.h>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	long long int t = 665;
	while (n) {
		t++;
		string s = to_string(t);
		if (s.find("666") < s.length()) {
			n--;
		}
	}

	cout << t << "\n";

	return 0;
}