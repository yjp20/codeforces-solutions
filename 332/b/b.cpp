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

const int MAX = 2e5+1;
int N, K;
int X[MAX];
int best_idx[MAX];
ll best[MAX];
ll sum[MAX];
ll ans_best;
pair<int,int> ans;

int main() {
	cin >> N >> K;

	for (int i=1; i<=N; i++) {
		cin >> X[i];
	}

	ll it = 0;
	for (int i=1; i<=N; i++) {
		it += X[i];
		if (i-K+1 > 0) {
			sum[i-K+1] = it;
			it -= X[i-K+1];
		}
	}

	for (int i=1; i<=N; i++) {
		if (sum[i] > best[i-1]) {
			best[i] = sum[i];
			best_idx[i] = i;
		} else {
			best[i] = best[i-1];
			best_idx[i] = best_idx[i-1];
		}
	}

	for (int i=K+1; i<=N; i++) {
		if (smax(ans_best, sum[i] + best[i-K])) {
			ans = {best_idx[i-K], i};
		}
	}

	cout << ans.first << " " << ans.second << endl;

	return 0;
}
