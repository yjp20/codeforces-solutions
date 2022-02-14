// youngjinp20
// 2020 03

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n;
int a[2005];
vector<int> roots, G[2005];

int dfs(int v) {
	int m = 0;
	for (auto e:G[v]) {
		m = max(m,dfs(e));
	}
	return m + 1;
}

int main() {
	cin >> n;

	for (int i=1; i<=n; i++) {
		cin >> a[i];
		if (a[i] == -1) roots.push_back(i);
		else G[a[i]].push_back(i);
	}

	int m = 0;
	for (auto e : roots) {
		m = max(dfs(e), m);
	}

	cout << m << endl;

	return 0;
}
