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

int N;
int dp[47];

int main() {
	cin >> N;

	dp[0] = 0;
	dp[1] = 1;

	if (N == 0) {
		cout << "0 0 0";
		return 0;
	}

	if (N == 1) {
		cout << "0 0 1";
		return 0;
	}

	for (int i=2; i<=46; i++) {
		dp[i] = dp[i-1] + dp[i-2];
		if (dp[i] == N) {
			cout << 0 << " " << dp[i-2] << " " << dp[i-1];
			return 0;
		}
	}

	cout << "I'm too stupid to solve this problem";

	return 0;
}
