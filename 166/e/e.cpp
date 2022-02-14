// youngjinp20
// 2020 03

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MAX = 1e7 + 1;
const int MOD = 1e9 + 7;
int N;
int dp[MAX][2];

int main() {
	cin >> N;

	dp[0][0] = 1;
	for (int i=1; i<=N; i++) {
		dp[i][0] = ((ll) dp[i-1][1] * 3) % MOD;
		dp[i][1] = ((ll) dp[i-1][1] * 2 + dp[i-1][0]) % MOD;
	}

	cout << dp[N][0];

	return 0;
}
