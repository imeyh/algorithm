#include <iostream>
using namespace std;

int main() {
	int N, M;
	int price2{ 0 };
	int price1{ 0 };
	int sm_p{ 1000 };
	int sm_a{ 1000 };


	cin >> N >> M;

	while (M--) {
		int p, a;
		cin >> p >> a;
		if (p < sm_p)
			sm_p = p;
		if (a < sm_a)
			sm_a = a;
	}

	int q = N / 6;
	int r = N % 6;

	price1 = (sm_p*q) + (sm_a*r);
	//패키지+단품


	if (r != 0 || q == 0)
		q++;

	if (q*sm_p < N*sm_a)
		price2 = q * sm_p;
	else
		price2 = N * sm_a;

	//semi_price 패키지+단품 아닌 단순한 경우만 계산했을 때 가장 작은 가격

	if (price2 < price1)
		cout << price2 << "\n";
	else
		cout << price1 << "\n";

	return 0;
}