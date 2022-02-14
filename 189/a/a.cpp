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

const int MAX = 4e3+1;
int dp[MAX];

int main() {
	int N, A, B, C;
	cin >> N >> A >> B >> C;

	for (int i=0; i<=N; i++) {
		if (i && !dp[i]) continue;
		if (i+A<=N) smax(dp[i+A], dp[i] + 1);
		if (i+B<=N) smax(dp[i+B], dp[i] + 1);
		if (i+C<=N) smax(dp[i+C], dp[i] + 1);
	}

	cout << dp[N];

	return 0;
}
