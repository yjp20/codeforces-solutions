// youngjinp20
// 2021 08

#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<iostream>
#include<queue>
#include<stack>
#include<vector>
#include<utility>

#define d(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;
typedef long long ll;

const int MAX = 2e5;
const int MOD = 1e9 + 7;
ll fact[MAX+1];
ll p2[MAX+1];

ll modp(int b, int exp) {
	if (exp == 1) return b;
	ll r = modp(b, exp/2);
	ll v = r * r % MOD;
	if (exp&1) v *= b;
	return v % MOD;
}

ll inv(ll x) {
	return modp(x, MOD-2);
}

int main() {
	int T;
	scanf("%d", &T);

	fact[0] = 1;
	for (int i=1; i<=MAX; i++) {
		fact[i] = (fact[i-1] * i) % MOD;
	}

	p2[0] = 1;
	for (int i=1; i<=MAX; i++) {
		p2[i] = (p2[i-1] * 2) % MOD;
	}

	while (T--) {
		int N, K;
		scanf("%d %d", &N, &K);

		ll mult = N&1;
		for (int i=0; i<N; i+=2) {
			ll v = fact[N] * inv(fact[N-i]) % MOD;
			v *= inv(fact[i]);
			v %= MOD;
			mult += v;
			mult %= MOD;
		}

		ll pow = 1;
		ll ct = 1;
		for (int i=0; i<K; i++) {
			ct *= mult;
			ct %= MOD;
		}

		if (N%2 == 0) {
			ll m1 = ct;
			ll m2 = 1;
			for (int i=0; i<K; i++) {
				m1 *= inv(mult);
				m1 %= MOD;
				ct += m1 * m2;
				ct %= MOD;
				m2 *= p2[N];
				m2 %= MOD;
			}
		}

		printf("%lld\n", ct);
	}

	return 0;
}
