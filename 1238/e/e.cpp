// youngjinp20
// 2019 10

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int main() {
	int n, m;
	ll total = 0;
	ll dp[20][20] = {0};
	int ep[20][20] = {0};
	char s[100005];

	cin >> n >> m;
	cin >> s;

	for (int i=0; i<n-1; i++) {
		int a = s[i] - 'a';
		int b = s[i+1] - 'a';
		dp[a][b] ++;
		dp[b][a] ++;
	}

	ep[0][0] = 0;
	for (int i=1; i<m; i++) {
		// FOR EACH POSITION
		ll min_cost = 1e9;
		int min_idx = 0;

		for (int pos=0; pos<=i; pos++) {
			ll cost = 0;
			for (int k=0; k<i; k++) {
				if (k >= pos) {
					int d = k-pos+1;
					cost += d * dp[ ep[i-1][k] ][i];
					for (int l=0; l<pos; l++) {
						cost += dp[ ep[i-1][k] ][ ep[i-1][l] ];
					}
				}
				else {
					int d = pos-k;
					cost += d * dp[ ep[i-1][k] ][i];
					for (int l=pos; l<i; l++) {
						cost += dp[ ep[i-1][k] ][ ep[i-1][l] ];
					}
				}
			}
			if (cost < min_cost) {
				min_cost = cost;
				min_idx = pos;
			}
		}

		for (int j=0; j<min_idx; j++) {
			ep[i][j] = ep[i-1][j];
		}
		ep[i][min_idx] = i;
		for (int j=min_idx; j<i; j++) {
			ep[i][j+1] = ep[i-1][j];
		}
		total += min_cost;
	}

	printf("%lld\n", total);
	return 0;
}
