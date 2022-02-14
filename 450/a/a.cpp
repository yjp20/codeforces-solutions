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

	int best = 0;
	int best_idx = 0;

	for (int i=0; i<N; i++) {
		int t; cin >> t;
		int x = (t+M-1)/M;
		if (x >= best) {
			best = x;
			best_idx = i+1;
		}
	}

	cout << best_idx;

	return 0;
}
