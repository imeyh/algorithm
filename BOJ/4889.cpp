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
		//- 하나라도 들어오면 입력 종료
		//find return 값 찾으면 인덱스 값 못 찾으면 엄청 큰 수(음수 노노)

		for (auto i : str) {
			if (i == '{')
				s.push(i);
			if (i == '}' && (s.empty() || s.top() == '}'))
				s.push(i);
			//일단 짝이 맞지 않는 경우 stack에 push
			else if (s.top() == '{'&&i == '}')
				s.pop();
			//짝이 맞는 경우 제거
		}

		while (!s.empty()) {
			char c = s.top();
			s.pop();

			if (c != s.top())
				n += 2;
			//}{인 경우는 두 개 다 바꿔줌 연산 +2
			else
				n += 1;
			//}}인 경우는 앞의 }만 {로 바꿔줌 연산 +1
			s.pop();
			//쌍이므로 pop한 번 더 해줘야 짝수 개로 남음
		}
		cout << i << ". " << n << "\n";
		i++;
	}

	return 0;
}