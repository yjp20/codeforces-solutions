// youngjinp20
// 2019 09

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;

ll mod = 1000000007;

ll paw(int e, ll exp) {
	if (exp == 0) return 1;
	if (exp == 1) return e;
	ll ret = paw(e, exp/2);
	ll l = ret * ret;
	l %= mod;
	l *= paw(e, exp-2*(exp/2));
	l %= mod;
	return l;
}

int main() {
	int       x;
	ll n;
	set<int>  prime;

	cin >> x >> n;

	// Get prime numbers in set
	int cur = x;
	for (int i=2; i<sqrt(x)+5; i++) {
		while (cur%i == 0) {
			cur /= i;
			prime.insert(i);
		}
	}
	if (cur > 1) prime.insert(cur);

	// Other shit
	ll p = 1;
	for (auto e : prime) {
		ll f = e;
		ll exp = 0;
		while (f <= n) {
			exp += n / f;
			if (f <= ULONG_MAX / e) f *= e;
			else break;
		}
		p *= paw(e, exp);
		p %= mod;
	}

	printf("%lld", p);

	return 0;
}
