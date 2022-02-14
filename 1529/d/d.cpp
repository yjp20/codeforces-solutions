// youngjinp20
// 2021 05

#include <stdio.h>
#include <iostream>

#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

const ll MOD = 998244353;

// d
// 1 1 3 6 12

int main() {
	ll N;

	cin >> N;

	if (N == 1) {
		cout << 1 << endl;
		return 0;
	}

	ll divs[N+1];
	for (int i=0; i<=N; i++) {
		divs[i] = 0;
	}

	for (int i=1; i<=N; i++) {
		for (int j=2*i; j<=N; j+=i) {
			divs[j] ++;
		}
	}

	ll sum = 2;
	for (int i=2; i<=N; i++) {
		ll k = (divs[i] + sum) % MOD;
		if (i == N)  {
			cout << k;
		}
		sum += k;
		sum %= MOD;
	}

	return 0;
}
