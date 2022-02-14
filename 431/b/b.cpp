// youngjinp20
// 2020 03

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int g[6][6];
bool used[6];

int dfs(int v, int prev, int depth) {
	int best = 0;
	used[v] = true;

	for (int i=1; i<=5; i++)
		if (!used[i])
			best = max(dfs(i, v, depth+1) + g[v][i] + g[i][v], best);

	if (depth == 3)
		best *= 2;
	used[v] = false;
	return best;
}

int main() {
	for (int i=1; i<=5; i++)
		for (int j=1; j<=5; j++)
			cin >> g[i][j];

	cout << dfs(0,0,0);

	return 0;
}
