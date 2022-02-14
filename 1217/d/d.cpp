// youngjinp20
// 2019 09

#define MAX 5001
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int n, m, res[MAX];
vi g[MAX];

bool _dfs(int v, bool *vt, bool *st) {
	if (!vt[v]) {
		vt[v] = true;
		st[v] = true;
		for (auto x : g[v]) {
			if (!vt[x] && _dfs(x, vt, st)) {
				return true;
			}
			else if (st[x]) {
				return true;
			}
		}
	}
	st[v] = false;
	return false;
}

bool dfs() {
	bool *vt = new bool[MAX];
	bool *st = new bool[MAX];
	for (int i=1; i<=n; i++) {
		vt[i] = st[i] = 0;
	}
	bool r = 0;
	for (int i=1; i<=n; i++) {
		if (_dfs(i,vt,st)) return true;
	}
	return false;
}

int main() {
	cin >> n >> m;
	for (int i=0; i<m; i++) {
		int u, v;
		cin >> u >> v;
		if (u<v) res[i] = 1;
		else res[i] = 2;
		g[u].push_back(v);
	}
	if (dfs()) {
		printf("2\n");
		for (int i=0; i<m; i++) {
			printf("%d ", res[i]);
		}
	} else {
		printf("1\n");
		for (int i=0; i<m; i++) {
			printf("1 ");
		}
	}
	return 0;
}
