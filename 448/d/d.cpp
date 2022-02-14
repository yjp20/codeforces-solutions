// youngjinp20
// 2020 04

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
using namespace std;

typedef long long ll;

int main() {
	ll N, M, K;
	cin >> N >> M >> K;

	ll l=0;
	ll r=25e10;
	ll best=0;
	ll ans=0;

	while (l<=r) {
		ll m = (l+r)/2;
		ll ct = 0;

		for (int i=1; i<=N; i++) {
			ct += min(m/i, M);
		}

		if (ct < K) {
			l = m+1;
			smax(best, ct);
			smax(ans, m);
		}
		if (ct >= K) {
			r = m-1;
		}
	}

	cout << ans+1 << endl;

	return 0;
}
