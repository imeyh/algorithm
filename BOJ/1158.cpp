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
				}//첫번째 제거 <

				if (q.size() == 1) {
					cout << q.front() << ">";
					q.pop();
					continue;
				}//마지막 제거 >

				cout << q.front() << ", ";
				q.pop();
				continue;
				//k번째 출력 & 제거
			}//k번째인 경우

			q.push(q.front());
			q.pop();
			//1~k-1번째인 경우 순서를 가장 뒤로 보내기
		}
	}
	return 0;
}