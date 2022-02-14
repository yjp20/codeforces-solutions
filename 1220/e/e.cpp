// youngjinp20
// 2020 05

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

const int MAX = 2e5+1;
int N, M, S;
int W[MAX];
bool in_cycle[MAX];
bool visited[MAX];
bool used[MAX];
vector<int> G[MAX];

bool cycle(int v, int from) {
	bool res = false;
	visited[v] = true;
	used[v] = true;
	for (auto e : G[v]) {
		if (e != from) {
			if (visited[e]) {
				res = true;
				continue;
			}
			if (!used[e])
				res |= cycle(e, v);
		}
	}
	visited[v] = false;
	return in_cycle[v] |= res;
}

ll dfs(int v, int from) {
	ll best = 0;
	for (auto e : G[v]) {
		if (!in_cycle[e]) {
			in_cycle[e] = true;
			ll ans = dfs(e,v);
			smax(best, ans);
		}
	}
	return best + W[v];
}

int main() {
	cin >> N >> M;

	for (int i=1; i<=N; i++) {
		cin >> W[i];
	}

	for (int i=0; i<M; i++) {
		int a, b;
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}

	cin >> S;
	cycle(S, 0);

	in_cycle[S] = true;

	ll total = 0;
	for (int i=1; i<=N; i++) {
		if (in_cycle[i]) total += W[i];
	}

	for (int i=1; i<=N; i++) {
		if (in_cycle[i]) {
			for (auto e : G[i]) {
				if (!in_cycle[e]) {
					G[0].push_back(e);
				}
			}
		}
	}

	/* for (int i=1; i<=N; i++) { */
	/* 	cout << imie(i) imie(in_cycle[i]) << endl; */
	/* } */

	in_cycle[0] = true;
	total += dfs(0,0);

	cout << total;

	return 0;
}
