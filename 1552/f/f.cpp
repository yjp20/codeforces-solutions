// youngjinp20
// 2021 07

#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<iostream>
#include<queue>
#include<stack>
#include<vector>
#include<utility>

#define d(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;
typedef long long ll;

const int MAX = 2e5;
const ll MOD = 998244353;
int N;
ll X[MAX+1], Y[MAX+1], S[MAX+1];
ll dp[MAX+1];
ll ot[MAX+1];

int main() {
	cin >> N;
	for (int i=1; i<=N; i++) {
		cin >> X[i] >> Y[i] >> S[i];
	}

	for (int i=1; i<=N; i++) {
		int idx = upper_bound(X, X+N+1, Y[i]) - X;
		ll pt1 = X[i] - X[i-1] + dp[i-1];
		ll pt2 = dp[idx-1] + Y[i] - X[idx-1];
		dp[i] = ((2*pt1 - pt2) % MOD + MOD) % MOD;
		ot[i] = ((pt1 - pt2) % MOD + MOD) % MOD;
	}

	ll ans = dp[N] + 1;
	for (int i=1; i<=N; i++) {
		if (!S[i]) ans = (ans - ot[i] + MOD) % MOD;
	}

	cout << ans << endl;

	return 0;
}
