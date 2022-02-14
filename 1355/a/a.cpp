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
		ll A, K;
		cin >> A >> K;

		for (ll it=1; it<K; it++) {
			int ma = 0;
			int mi = 9;
			ll tmp = A;
			while (tmp) {
				smax(ma, tmp%10);
				smin(mi, tmp%10);
				tmp /= 10;
			}
			A += ma * mi;
			if (mi == 0) break;
		}

		cout << A << endl;
	}

	return 0;
}
