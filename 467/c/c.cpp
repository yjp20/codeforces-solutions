// youngjinp20
// 2020 07

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

const int MAX = 5000+1;
int N, M, K;
ll dp[MAX][MAX];
ll sum[MAX];

int main() {
	cin >> N >> M >> K;
	ll run = 0;
	for (int i=1; i<=N; i++) {
		ll t;
		cin >> t;
		run += t;
		sum[i] = run;
	}

	for (int i=1; i<=N; i++) {
		for (int j=1; j<=K; j++) {
			if (i-M >= 0) {
				ll add = sum[i] - sum[i-M];
				dp[i][j] = max({dp[i][j], dp[i-1][j], dp[i-M][j-1] + add});
			}
		}
	}

	cout << dp[N][K];

	return 0;
}
