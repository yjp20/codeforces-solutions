// youngjinp20
// 2020 01

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int main() {
	ll x;
	cin >> x;

	map<ll, ll> M;
	ll o = x;
	vector<ll> V;


	ll best = 1000000000000;

	for (ll i=2; i*i<=x; i++) {
		while ((x % i) == 0) {
			x /= i;
			M[i] ++;
		}
	}

	if (x != 1) M[x] ++;

	for (auto e : M) {
		ll ct = e.second;
		ll prod = 1;
		while (ct--) {
			prod *= e.first;
		}
		V.push_back(prod);
	}

	for (ll i=0; i < (1 << V.size()); i++) {
		ll other = 1;
		for (int j=0; j<V.size(); j++) {
			if((i>>j)&1) other *= V[j];
		}
		best = min(best, max(o/other, other));
	}

	printf("%lld %lld", o/best, best);

	return 0;
}
