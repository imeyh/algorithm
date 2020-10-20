#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int i = 1;

	while (1) {
		stack <char> s;
		string str;
		int n{ 0 };
		cin >> str;

		if (str.find('-') <= str.length())
			break;
		//- �ϳ��� ������ �Է� ����
		//find return �� ã���� �ε��� �� �� ã���� ��û ū ��(���� ���)

		for (auto i : str) {
			if (i == '{')
				s.push(i);
			if (i == '}' && (s.empty() || s.top() == '}'))
				s.push(i);
			//�ϴ� ¦�� ���� �ʴ� ��� stack�� push
			else if (s.top() == '{'&&i == '}')
				s.pop();
			//¦�� �´� ��� ����
		}

		while (!s.empty()) {
			char c = s.top();
			s.pop();

			if (c != s.top())
				n += 2;
			//}{�� ���� �� �� �� �ٲ��� ���� +2
			else
				n += 1;
			//}}�� ���� ���� }�� {�� �ٲ��� ���� +1
			s.pop();
			//���̹Ƿ� pop�� �� �� ����� ¦�� ���� ����
		}
		cout << i << ". " << n << "\n";
		i++;
	}

	return 0;
}