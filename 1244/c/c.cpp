// youngjinp20
// 2019 10

#include <bits/stdc++.h>
#include <numeric>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

ll n, p, w, d;

int main() {
	cin >> n >> p >> w >> d;
	ll i=0;
	ll g = gcd(w, d);
	if (p%g) {
		puts("-1");
		return 0;
	}
	w /= g;
	d /= g;
	p /= g;
	for (; i<=w; i++) {
		if (i*d % w == p % w) {
			break;
		}
	}
	ll j = (p - i*d)/w;
	if (i + j > n) {
		puts("-1");
		return 0;
	} else {
		printf("%lld %lld %lld\n", j, i, n-i-j);
	}

	return 0;
}
