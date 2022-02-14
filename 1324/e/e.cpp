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

const int MAX = 2000;
int N, H, L, R;
int A[MAX+1];
int dp[MAX+1][MAX];

int main() {
	cin >> N >> H >> L >> R;
	for (int i=1; i<=N; i++) {
		cin >> A[i];
	}

	dp[0][0] = 1;

	for (int i=1; i<=N; i++) {
		for (int j=0; j<H; j++) {
			if (dp[i-1][j]) {
				int a = (j+A[i]) % H;
				int b = (j+A[i]-1) % H;
				dp[i][a] = max(dp[i][a], dp[i-1][j] + (L <= a && a <= R));
				dp[i][b] = max(dp[i][b], dp[i-1][j] + (L <= b && b <= R));
			}
		}
	}

	int best = 0;
	for (int i=0; i<H; i++) {
		smax(best, dp[N][i]);
	}

	cout << best - 1;

	return 0;
}
