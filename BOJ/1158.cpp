#include <iostream>
#include <queue>

using namespace std;

int main() {
	int n, k;
	queue <int> q;
	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	while (!q.empty()) {
		for (int i = 1; i <= k; i++) {
			if (i == k) {
				if (q.size() == n) {
					cout << "<";
				}//ù��° ���� <

				if (q.size() == 1) {
					cout << q.front() << ">";
					q.pop();
					continue;
				}//������ ���� >

				cout << q.front() << ", ";
				q.pop();
				continue;
				//k��° ��� & ����
			}//k��°�� ���

			q.push(q.front());
			q.pop();
			//1~k-1��°�� ��� ������ ���� �ڷ� ������
		}
	}
	return 0;
}