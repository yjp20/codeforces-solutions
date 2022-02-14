// youngjinp20
// 2021 08

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

const int MOD = 1e8;
int N1, N2, K1, K2;
int dp[201][101][2][10];

int main() {
	cin >> N1 >> N2 >> K1 >> K2;

	dp[1][0][0][0] = 1;
	dp[1][1][1][0] = 1;

	for (int i=2; i<=N1+N2; i++) {
		for (int j=0; j<=N2; j++) {
			for (int k=0; j&&k<K1; k++) dp[i][j][1][0] = (dp[i][j][1][0] + dp[i-1][j-1][0][k]) % MOD;
			for (int k=0; k<K2; k++)    dp[i][j][0][0] = (dp[i][j][0][0] + dp[i-1][j  ][1][k]) % MOD;
			for (int k=1; k<K1; k++)    dp[i][j][0][k] = (dp[i][j][0][k] + dp[i-1][j  ][0][k-1]) % MOD;
			for (int k=1; j&&k<K2; k++) dp[i][j][1][k] = (dp[i][j][1][k] + dp[i-1][j-1][1][k-1]) % MOD;
		}
	}

	ll sum = 0;

	for (int i=0; i<K1; i++) sum = (sum + dp[N1+N2][N2][0][i]) % MOD;
	for (int i=0; i<K2; i++) sum = (sum + dp[N1+N2][N2][1][i]) % MOD;

	cout << sum << endl;

	return 0;
}
