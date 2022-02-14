// youngjinp20
// 2020 05

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

ll pow(ll b, int exp) {
	if (exp == 0) return 1;
	ll a = pow(b, exp/2);
	return a*a*(exp&1?b:1);
}

ll a, b, c;

int main() {
	cin >> a >> b >> c;

	vector<ll> ans;

	for (int i=1; i<=81; i++) {
		ll t = b * pow(i, a) + c;
		if (0 < t && t < 1e9) {
			ll ct = 0;
			ll s = t;
			while (t) {
				ct += t % 10;
				t /= 10;
			}
			if (ct == i) {
				ans.push_back(s);
			}
		}
	}

	cout << ans.size() << endl;
	for (auto e : ans) {
		cout << e << " ";
	}

	return 0;
}
