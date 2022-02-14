// youngjinp20
// 2019 09

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int n,m;

int g(int x, int y) {
	return x*m+y;
}

void dfs_front(int x, int y, vi &vt, vi &X) {
	if (x+1 < n && !X[g(x+1,y)] && !vt[g(x+1,y)]) {
		vt[g(x+1,y)] = 1;
		dfs_front(x+1, y, vt, X);
	}
	if (y+1 < m && !X[g(x,y+1)] && !vt[g(x,y+1)]) {
		vt[g(x,y+1)] = 1;
		dfs_front(x, y+1, vt, X);
	}
}

void dfs_back(int x, int y, vi &vt, vi &X) {
	if (x-1 >= 0 && !X[g(x-1,y)] && !vt[g(x-1,y)]) {
		vt[g(x-1,y)] = 1;
		dfs_back(x-1, y, vt, X);
	}
	if (y-1 >= 0 && !X[g(x,y-1)] && !vt[g(x,y-1)]) {
		vt[g(x,y-1)]= 1;
		dfs_back(x, y-1, vt, X);
	}
}

int main() {
	scanf("%d %d\n", &n, &m);
	vi vt1(n*m, 0);
	vi vt2(n*m, 0);
	vi   X(n*m, 0);
	vi  ct(n+m, 0);
	bool connect = false;

	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			char c;
			scanf("\n%c", &c);
			X[g(i,j)] = c == '#';
		}
	}

	dfs_front(0, 0, vt1, X);
	dfs_back(n-1, m-1, vt2, X);

	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			if (vt1[g(i,j)] && vt2[g(i,j)]) {
				connect = true;
				ct[i+j] ++;
			}
		}
	}

	for (int i=1; i<n+m-2; i++) {
		if (ct[i] == 1) {
			cout << "1\n";
			return 0;
		}
	}
	cout << (connect ? "2\n" : "0\n");
	return 0;
}
