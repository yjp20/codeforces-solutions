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
	int T;
	cin >> T;
	for (int i=0; i<T; i++) {
		int p,f,cs,cw,s,w;
		cin >> p >> f;
		cin >> cs >> cw;
		cin >> s >> w;

		if (s > w) {
			swap(s,w);
			swap(cs,cw);
		}

		int best = min(p/s + f/s, cs);
		for (int i=0; i<=cs; i++) {
			if (p-i*s < 0 || f-(cs-i)*s < 0) continue;
			best = max(best, cs + (p-i*s)/w + (f-(cs-i)*s)/w);
		}

		cout << min(best, cs+cw) << endl;
	}

	return 0;
}
