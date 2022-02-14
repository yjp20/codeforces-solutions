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

int main() {
	int T;
	cin >> T;

	for (int t=1; t<=T; t++) {
		ll x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		ll x = x2-x1;
		ll y = y2-y1;
		cout << x * y + 1 << endl;
	}

	return 0;
}
