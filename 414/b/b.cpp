// youngjinp20
// 2020 03

#include <iostream>
using namespace std;

typedef long long ll;

const int MOD = 1e9 + 7;
int n, k;
int dp[2005][2005];

int main() {
	cin >> n >> k;
	dp[0][1] = 1;
	for (int i=0; i<k; i++) {
		for (int j=1; j<=n; j++) {
			int mult = 1;
			while(mult*j <= n) {
				dp[i+1][mult*j] += dp[i][j];
				dp[i+1][mult*j] %= MOD;
				mult ++;
			}
		}
	}
	int sum = 0;
	for (int i=1; i<=n; i++) {
		sum += dp[k][i];
		sum %= MOD;
	}
	cout << sum;

	return 0;
}
