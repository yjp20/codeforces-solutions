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

const int MAX = 1e5+5;
int N;
ll x[MAX];
ll h[MAX];
ll dp[MAX][3];

int main() {
	cin >> N;
	for (int i=1; i<=N; i++) {
		cin >> x[i] >> h[i];
	}

	x[0] = -2e9;
	x[N+1] = 2e9+5;

	for (int i=1; i<=N; i++) {
		dp[i][0] = max({dp[i-1][0], dp[i-1][1], dp[i-1][2]});
		if (h[i] < x[i] - x[i-1]) dp[i][1] = max(dp[i-1][0], dp[i-1][1]) + 1;
		if (h[i-1] + h[i] < x[i] - x[i-1]) dp[i][1] = max(dp[i][1], dp[i-1][2] + 1);
		if (h[i] < x[i+1] - x[i]) dp[i][2] = max({dp[i-1][0], dp[i-1][1], dp[i-1][2]}) + 1;
	}

	cout << dp[N][2];

	return 0;
}
