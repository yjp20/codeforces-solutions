// youngjinp20
// 2021 12

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<iostream>
#include<queue>
#include<stack>
#include<vector>
#include<utility>

#define d(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;
typedef long long ll;

const int MOD = 1e9 + 7;

int mod(ll b, int p) {
	return ((b % p) + p) % p;
}

int mode(ll b, int p) {
	if (p == 0) return 1;
	if (p == 1) return b;
	ll x = mode(b, p/2);
	return (x * x % MOD) * mode(b, p&1) % MOD;
}

int main() {
	int T;
	cin >> T;
	for (int t=0; t<T; t++) {
		ll N, M, RB, CB, RD, CD, P;
		cin >> N >> M >> RB >> CB >> RD >> CD >> P;

		ll inv = (100 - P) * mode(100, MOD-2) % MOD;
		ll jnv = P * mode(100, MOD-2) % MOD;

		vector<ll> paths;
		int a = mod(RD-RB, 2*N-2);
		int b = mod(2*N-RD-RB, 2*N-2);
		int c = mod(CD-CB, 2*M-2);
		int d = mod(2*M-CD-CB, 2*M-2);
		cout << a << b << c << d << endl;
		for (ll i=0; i<M; i++) {
			paths.push_back(2*i*(N-1)+a);
			if (a != b) paths.push_back(2*i*(N-1)+b);
		}
		for (ll i=0; i<N; i++) {
			paths.push_back(2*i*(M-1)+c);
			if (c != d) paths.push_back(2*i*(M-1)+d);
		}
		sort(paths.begin(), paths.end());

		ll num = 0;
		ll dum = 0;
		ll k = 1;
		for (auto e : paths) {
			cout << d(e) << endl;
			num = mod(num + mod(e, MOD)*k, MOD);
			dum = mod(mod(N*M, MOD)*k, MOD);
			k = mod(k*inv, MOD);
		}

		cout << d(k) << endl;
		cout << mod(jnv * mod(dum * mode(k, MOD-2), MOD), MOD) + mod(jnv * mod(num * mode(mod(1-k, MOD), MOD-2), MOD), MOD)<< endl;
	}

	return 0;
}
