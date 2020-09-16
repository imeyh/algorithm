#include <iostream>
#include <string>

using namespace std;


int main() {
	int T;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		int n;
		cin >> n;

		bool flag1{ false }, flag2{ false };

		int n1 = n / 100;
		int n2 = n % 100;

		string result;

		if (n1 == 0 && n2 == 0)
			result = "NA";
		else if ((n1 <= 12 && n1 != 0) && (n2 <= 12 && n2 != 0))
			result = "AMBIGUOUS";
		else if (n1 <= 12 && n1 != 0)
			result = "MMYY";
		else if (n2 <= 12 && n2 != 0)
			result = "YYMM";
		else
			result = "NA";

		cout << "#" << i << " " << result << "\n";

	}

	return 0;
}