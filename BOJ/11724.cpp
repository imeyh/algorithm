#include <iostream>
using namespace std;

int N;
int M;
int d_check[1001]{ 0 };
int graph[1001][1001]{ 0 };

void dfs(int _start) {
	d_check[_start] = 1;
	for (int i = 1; i <= N; i++) {
		if (!d_check[i] && graph[_start][i] == 1) {
			dfs(i);
		}
	}
}

int main() {
	int count{ 0 };
	cin >> N >> M;

	while (M--) {
		int k1, k2;
		cin >> k1 >> k2;
		graph[k1][k2] = 1;
		graph[k2][k1] = 1;
	}

	for (int i = 1; i <= N; i++) {
		if (!d_check[i]) {
			dfs(i);
			count++;
		}
	}

	cout << count << "\n";

	return 0;
}