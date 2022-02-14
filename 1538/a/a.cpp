// youngjinp20
// 2021 06

#include<stdio.h>
#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>

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
	for (int t=0; t<T; t++) {
		int N;
		cin >> N;
		int X[N];
		for (int i=0; i<N; i++) cin >> X[i];
		int min_idx = min_element(X, X+N) - X;
		int max_idx = max_element(X, X+N) - X;

		int ans = min(min(
			max(min_idx, max_idx) + 1,
			N - min(min_idx, max_idx)),
			N + 1 - max(min_idx, max_idx) + min(min_idx, max_idx)
		);

		cout << ans << endl;
	}

	return 0;
}
