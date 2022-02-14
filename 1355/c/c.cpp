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
	int A, B, C, D;
	cin >> A >> B >> C >> D;

	ll ct = 0;
	for (int i=C; i<=D; i++) {
		int s = i - B + 1;
		int e = i - A + 1;
		// [s,e], [B, C]
		while (s < C) {
			bool s1 = s < B;
			bool s2 = B <= s && s < C;
			bool s3 = C <= s;
			bool e1 = e < B;
			bool e2 = B <= e && e < C;
			bool e3 = C <= e;

			if (s1 && e1) {
				s += B-e;
				e += B-e;
			}

			if (s1 && e2) {
				int st_range = min(C,e) - max(B,s) + 1;

				int diff = min(B-s, C-e);
				s += diff;
				e += diff;

				int ed_range = min(C,e-1) - max(B,s-1) + 1;

				assert(ed_range == st_range + diff - 1);

				ct += (ll) (st_range + ed_range) * diff / 2;
			}
			if (s1 && e3) {
				int diff = B-s;
				s += diff;
				e += diff;
				ct += (ll) diff * (C-B+1);
			}
			if (s2 && e2) {
				int diff = C-e;
				s += diff;
				e += diff;
				ct += (ll) diff * (e-s+1);
			}
			if (s2 && e3) {
				int diff = C-s;
				s += diff;
				e += diff;
				ct += (ll) diff * (diff+3)/2;
			}
		}
		if (s==C) ct ++;
	}

	cout << ct << endl;

	return 0;
}
