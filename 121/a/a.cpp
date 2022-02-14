// youngjinp20
// 2020 07

#include <bits/stdc++.h>
#include <algorithm>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

const ll MAX = 44444444444ll;
vector<int> A;

ll getVal() {
	ll sum = 0;
	ll it = 1;
	for (auto e : A) {
		if (e == 0) sum += it * 4;
		if (e == 1) sum += it * 7;
		it *= 10;
	}
	return sum;
}

ll iterate(int x) {
	if (x == A.size()) {
		A.push_back(0);
	}
	else {
		if (++A[x] > 1) {
			A[x] = 0;
			iterate(x+1);
		}
	}
	return getVal();
}

int main() {
	ll l, r;
	cin >> l >> r;
	ll sum = 0;

	while (getVal() <= MAX) {
		ll x = getVal();
		ll y = iterate(0);
		ll val = max(0ll, min({y-x, y-l+1, r-x, r-l+1}));
		sum += val * y;
	}

	cout << sum;

	return 0;
}
