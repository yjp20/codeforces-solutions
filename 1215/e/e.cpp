// youngjinp20
// 2019 09

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;

const ll N = 1<<20;
const ll INF = 1e18;

int n;
int a[400000];
ll cnt[21][21];
ll dp[N];

int main() {
	cin >> n;
	for (int i=0; i<n; i++)
		cin >> a[i];

	for (int i=1; i<=20; i++)
		for (int j=1; j<=20; j++) {
			ll ct=0;
			ll sum=0;
			for (int it=0; it<n; it++) {
				if (a[it] == i) ct ++;
				if (a[it] == j) sum += ct;
			}
			cnt[j][i] = sum;
		}

	dp[0] = 0;
	for (int msk=1; msk<(1<<20); msk++) dp[msk] = INF;

	for (int msk=0; msk<(1<<20); msk++) {
		for (int i=1; i<=20; i++) {
			if ((msk >> (i-1)) & 1) continue;
			int newmsk = msk | (1 << (i-1));
			ll sum=0;
			for (int j=1; j<=20; j++) {
				if ((msk >> (j-1)) & 1) sum += cnt[j][i];
			}
			dp[newmsk] = min(dp[newmsk], dp[msk] + sum);
		}
	}
	printf("%I64d", dp[N-1]);

	return 0;
}
