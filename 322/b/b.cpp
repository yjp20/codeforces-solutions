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

ll R, G, B;
ll r, g, b;

int main() {
	cin >> R >> G >> B;

	r = R%3;
	g = G%3;
	b = B%3;

	ll wasted = r+g+b - 3*min({r, g, b});

	if (R && G && B) {
		r = r ? r : 3;
		g = g ? g : 3;
		b = b ? b : 3;

		wasted = min(wasted, r+g+b - 3*min({r, g, b}));
	}

	cout << (R+G+B-wasted) / 3 << endl;

	return 0;
}
