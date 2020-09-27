#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	string s;
	stack <char> s1, s2;//s1은 커서 왼쪽 문자들, s2는 커서 오른쪽 문자들
	cin >> s;

	int len = s.length();

	for (int i = 0; i < len; i++) {
		s1.push(s[i]);
	}

	int M;
	cin >> M;

	while (M--) {
		char c;
		cin >> c;

		if (c == 'L') {
			if (s1.empty())
				continue;
			s2.push(s1.top());
			s1.pop();
		}//커서 왼쪽

		if (c == 'D') {
			if (s2.empty())
				continue;
			s1.push(s2.top());
			s2.pop();
		}//커서 오른쪽

		if (c == 'B') {
			if (s1.empty())
				continue;
			s1.pop();
		}//커서 왼쪽 문자 삭제

		if (c == 'P') {
			char cc;
			cin >> cc;
			s1.push(cc);
		}//커서 왼쪽에 문자 추가
	}

	while (!s1.empty()) {
		s2.push(s1.top());
		s1.pop();
	}//출력을 순서대로 하기 위해 커서를 가장 앞으로 보냄

	while (!s2.empty()) {
		cout << s2.top();
		s2.pop();
	}//최종 문자 출력
	
	return 0;
}