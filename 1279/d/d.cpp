// youngjinp20
// 2019 12

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

ll ct[1000005] = {0L};
ll ct1[1000005] = {0L};
ll MOD = 998244353L;

ll powa(ll a, ll b) {
	if (b == 0) return 1L;
	if (b == 1) return a;
	ll f = powa(a, b/2);
	ll s = f * f % MOD;
	if (b%2 == 1L) s *= a;
	s = s % MOD;
	return s;
}

ll inv(ll a) {
	return powa(a, MOD-2);
}

int main() {
	int n;
	int t=0;
	cin >> n;
	for (int i=0; i<n; i++) {
		int k;
		cin >> k;
		ll c = inv(k);
		for (int j=0; j<k; j++) {
			int a;
			cin >> a;
			ct[a] += 1;
			ct1[a] += c;
			ct1[a] %= MOD;
		}
	}

	ll sum = 0;
	for (int i=1; i<=1000000; i++) {
		ll tmp = ct[i] * ct1[i];
		tmp %= MOD;
		tmp *= inv(n);
		tmp %= MOD;
		tmp *= inv(n);
		tmp %= MOD;
		sum += tmp;
		sum %= MOD;
	}

	printf("%llu\n", sum);

	return 0;
}
