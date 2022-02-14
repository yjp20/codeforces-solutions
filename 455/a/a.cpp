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

const int MAX = 1e5+1;
int N;
ll ct[MAX];
ll dp[MAX][2];

int main() {
	cin >> N;

	for (int i=1; i<=N; i++) {
		int t;
		cin >> t;
		ct[t] ++;
	}

	for (int i=1; i<MAX; i++) {
		dp[i][0] = max(dp[i-1][1], dp[i-1][0]);
		dp[i][1] = ct[i]*i + dp[i-1][0];
	}

	cout << max(dp[MAX-1][0], dp[MAX-1][1]);

	return 0;
}
