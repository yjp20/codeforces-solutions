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

int N, ct, ans;

int main() {
	cin >> N;
	for (int i=0; i<N; i++) {
		int t;
		cin >> t;
		ct += t;
	}

	for (int i=1; i<=5; i++) {
		if ((ct+i) % (N+1) != 1) {
			ans ++;
		}
	}

	cout << ans << endl;

	return 0;
}
