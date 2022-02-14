// youngjinp20
// 2020 06

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

int main() {
	int N, M;
	cin >> N >> M;

	int n=1e9;
	int m=1e9;
	int k=0;

	for (int i=0; i<N; i++) {
		int t;
		cin >> t;
		n = min(n, t);
		k = max(k, t);
	}

	for (int i=0; i<M; i++) {
		int t;
		cin >> t;
		m = min(m, t);
	}

	int c = max(2*n, k);
	if (c<m) cout << c;
	else cout << -1;

	return 0;
}
