#include<iostream>
#include<vector>
using namespace std;

int N;
vector<int> Tree[100001];
int parent[100001]{ 0 };
bool visit[100001]{ false };

void traversial(int n) {
	for (int i = 0; i < Tree[n].size(); i++) {
		if (!visit[Tree[n][i]]) {
			parent[Tree[n][i]] = n;
			visit[Tree[n][i]] = true;
			traversial(Tree[n][i]);
		}
	}
}

int main() {

	cin >> N;

	for (int i = 0; i < N - 1; i++) {
		int a, b;
		cin >> a >> b;
		Tree[a].push_back(b);
		Tree[b].push_back(a);
	}
	visit[1] = true;
	traversial(1);

	for (auto i : parent) {
		if (i == 0)
			continue;
		else
			cout << i << "\n";
	}

	return 0;
}