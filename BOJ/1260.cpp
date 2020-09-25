#include <iostream>
#include <queue>
using namespace std;

int N;
int M;
int start;
int d_check[1001]{ 0 };
int b_check[1001]{ 0 };
queue <int> q;
int graph[1001][1001]{ 0 };

void dfs(int _start) {
	d_check[_start] = 1;
	cout << _start << " ";
	for (int i = 1; i <= N; i++) {
		if (!d_check[i] && graph[_start][i] == 1) {
			dfs(i);
		}
	}
}
void bfs(int _start) {
	q.push(_start);
	b_check[_start] = 1;
	while (!q.empty()) {
		for (int i = 1; i <= N; i++) {
			if (!b_check[i] && graph[q.front()][i] == 1) {
				q.push(i);
				b_check[i] = 1;
			}
		}
		cout << q.front() << " ";
		q.pop();
	}
}

int main() {
	cin >> N >> M >> start;

	while (M--) {
		int k1, k2;
		cin >> k1 >> k2;
		graph[k1][k2] = 1;
		graph[k2][k1] = 1;
	}

	dfs(start);
	cout << "\n";
	bfs(start);
}