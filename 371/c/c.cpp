// youngjinp20
// 2020 08

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

int main() {
	char s[105];
	ll nb, ns, nc;
	ll pb, ps, pc;
	ll cb, cs, cc;
	ll rubles;
	cin >> s;
	cin >> nb >> ns >> nc;
	cin >> pb >> ps >> pc;
	cin >> rubles;
	cb=cs=cc=0;

	int len = strlen(s);
	for (int i=0; i<len; i++) {
		if (s[i] == 'B') cb ++;
		if (s[i] == 'S') cs ++;
		if (s[i] == 'C') cc ++;
	}

	ll l=0;
	ll r=1e13;
	ll best=0;

	while (l<r) {
		ll m = (l+r)/2;

		ll cost =
			max(m*cb-nb,0LL)*pb +
			max(m*cs-ns,0LL)*ps +
			max(m*cc-nc,0LL)*pc;

		if (cost <= rubles) {
			l = m + 1;
			best = max(best, m);
		}
		else {
			r = m;
		}
	}

	cout << best;

	return 0;
}
