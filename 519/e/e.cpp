// youngjinp20
// 2021 11

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<iostream>
#include<queue>
#include<stack>
#include<vector>
#include<utility>

#define d(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;
typedef long long ll;

const int MAX = 1e5;
int N, M;
vector<int> G[MAX+1];
int D[MAX+1];
int P[MAX+1][17];
int ct_down[MAX+1];
int ct_up[MAX+1];

int dfs(int x, int depth=0, int from=0) {
	int ct = 0;
	D[x] = depth;
	P[x][0] = from;
	for (auto e : G[x]) {
		if (e != from) ct += dfs(e, depth+1, x);
	}
	return ct_down[x] = ct + 1;
}

int par(int x, int diff) {
	for (int i=0; i<17; i++) {
		if (diff & 1) x = P[x][i];
		diff >>= 1;
	}
	return x;
}

int lca(int x, int y) {
	y = par(y, D[y] - D[x]);
	if (x == y) return x;
	for (int i=16; i>=0; i--) {
		if (P[x][i] != P[y][i]) {
			x = P[x][i];
			y = P[y][i];
		}
	}
	return P[x][0];
}

int bef(int x, int y) {
	return par(x, D[x]-D[y]-1);
}

int main() {
	cin >> N;
	for (int i=0; i<N-1; i++) {
		int a, b;
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	dfs(1);
	for (int i=1; i<=N; i++) {
		for (int j=1; j<17; j++) {
			P[i][j] = P[P[i][j-1]][j-1];
		}
	}

	cin >> M;
	for (int i=0; i<M; i++) {
		int x, y;
		cin >> x >> y;
		if (x == y) {
			cout << N << endl;
			continue;
		}
		if ((D[x] + D[y]) & 1) {
			cout << 0 << endl;
			continue;
		}
		if (D[x] > D[y]) swap(x,y);
		int common = lca(x, y);
		int diff = (D[x] + D[y] - D[common] * 2) / 2;
		int mid = par(y, diff);

		if (mid == common) {
			cout << N - ct_down[bef(x, mid)] - ct_down[bef(y, mid)] << endl;
		} else {
			cout << ct_down[mid] - ct_down[bef(y, mid)] << endl;
		}
	}

	return 0;
}
