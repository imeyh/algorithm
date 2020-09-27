#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	string s;
	stack <char> s1, s2;//s1�� Ŀ�� ���� ���ڵ�, s2�� Ŀ�� ������ ���ڵ�
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
		}//Ŀ�� ����

		if (c == 'D') {
			if (s2.empty())
				continue;
			s1.push(s2.top());
			s2.pop();
		}//Ŀ�� ������

		if (c == 'B') {
			if (s1.empty())
				continue;
			s1.pop();
		}//Ŀ�� ���� ���� ����

		if (c == 'P') {
			char cc;
			cin >> cc;
			s1.push(cc);
		}//Ŀ�� ���ʿ� ���� �߰�
	}

	while (!s1.empty()) {
		s2.push(s1.top());
		s1.pop();
	}//����� ������� �ϱ� ���� Ŀ���� ���� ������ ����

	while (!s2.empty()) {
		cout << s2.top();
		s2.pop();
	}//���� ���� ���
	
	return 0;
}