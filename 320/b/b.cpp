// youngjinp20
// 2020 08

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;


int n;
int X[101], Y[101];
vector<int> G[101];

int dfs(int node, int dest, vector<bool> &visited) {
	bool ret = false;
	if (node == dest) return 1;
	for (auto e : G[node]) {
		if (!visited[e]) {
			visited[e] = true;
			ret = ret || dfs(e, dest, visited);
		}
	}
	return ret;
}

int main() {
	cin >> n;

	int it = 1;

	for(int i=0; i<n; i++) {
		int t;
		cin >> t;

		if (t==1) {
			cin >> X[it] >> Y[it];

			for (int j=1; j<it; j++) {
				if ((X[j] < X[it] && X[it] < Y[j]) || (X[j] < Y[it] && Y[it] < Y[j])) {
					G[it].push_back(j);
				}
				if ((X[it] < X[j] && X[j] < Y[it]) || (X[it] < Y[j] && Y[j] < Y[it])) {
					G[j].push_back(it);
				}
			}
			it ++;
		}

		if (t==2) {
			int a,b;
			cin >> a >> b;
			vector<bool> visited(101);
			visited[a] = true;
			bool res = dfs(a, b, visited);
			cout << (res ? "YES" : "NO") << endl;
		}
	}

	return 0;
}
