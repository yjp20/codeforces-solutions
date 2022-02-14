// youngjinp20
// 2020 01

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

ll n, m, ct;
ll f[250001];

int main() {
	cin >> n >> m;

	f[1] = 1;
	for (ll i=2; i<=n; i++) {
		f[i] = f[i-1] * i;
		f[i] %= m;
	}

	for (ll i=0; i<n; i++) {
		ll val =f[i+1] * f[n-i];
		val %= m;
		val *= (n-i);
		val %= m;
		ct += val;
		ct %= m;
	}

	printf("%llu", ct);

	return 0;
}
