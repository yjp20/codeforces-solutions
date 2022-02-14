// youngjinp20
// 2019 10

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long mod = 1e9 + 7;
	long long n, ct=1, sub=1;

	cin >> n;

	for (int i=0; i<n; i++) {
		ct *= 27;
		ct %= mod;
		sub *= 7;
		sub %= mod;
	}
	printf("%lld\n", (ct - sub + mod) % mod);
	return 0;
}
