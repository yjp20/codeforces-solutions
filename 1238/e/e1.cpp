// youngjinp20
// 2019 10

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

const int M = (1<<20) + 55;

int n, m;
int a[M];
int adj[20][20] = {0};
int cntbit[M];
int minbit[M];
int d[M][20];
int dp[M];

int main() {

	scanf("%d %d\n", &n, &m);
	int B = (1<<m) - 1;
	for (int i=0; i<n; i++) {
		char c;
		scanf("%c", &c);
		a[i] = c - 'a';
	}
	for (int i=0; i<n-1; i++) {
		int x = a[i];
		int y = a[i+1];
		adj[x][y] ++;
		adj[y][x] ++;
	}
	for(int i = 0; i < M; ++i) dp[i] = 1e9+5;
	dp[0] = 0;
	for (int i=1; i<M; i++) {
		cntbit[i] = cntbit[i&(i-1)] + 1;
		for (int j=0; j<20; j++) {
			if ((i>>j) & 1) {
				minbit[i] = j;
				break;
			}
		}
	}
	for (int i=1; i<M; i++) {
		for (int j=0; j<20; j++) {
			int b = minbit[i];
			d[i][j] = d[i^(1<<b)][j] + adj[j][b];
		}
	}
	for (int i=0; i<(1<<m); i++) {
		for (int j=0; j<m; j++) {
			if ((i>>j) & 1) continue;
			int pos = cntbit[i];
			int newmsk = i | (1 << j);
			dp[newmsk] = min(dp[newmsk], dp[i] + pos * (d[i][j] - d[B^newmsk][j]));
		}
	}
	printf("%d\n", dp[B]);
	return 0;
}
