// youngjinp20
// 2019 09

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

ll a[300005] = {0};
ll b[300005] = {0};
ll dp[300005][3] = {0};

int main() {
	int q;
	scanf("%d", &q);
	for (int i=0; i<q; i++) {
		int n;
		a[0] = -10;
		b[0] = 0;
		dp[0][0] = 0;
		dp[0][1] = 0;
		dp[0][2] = 0;
		scanf("%d", &n);
		for (int j=1; j<=n; j++) {
			scanf("%d %d", &a[j], &b[j]);
			for (int k=0; k<3; k++) {
				ll m=5e18;
				for (int l=0; l<3; l++) {
					if (l+a[j-1] != k+a[j]) {
						m = min(m, dp[j-1][l]+k*b[j]);
					}
				}
				dp[j][k] = m;
			}
		}
		printf("%lld\n", min(dp[n][0], min(dp[n][1], dp[n][2])));
	}


	return 0;
}
