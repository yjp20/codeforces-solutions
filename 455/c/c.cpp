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

const int MAX = 3e5+1;
const int INF = 1e9;
int N, M, Q;
int maxs[MAX];
int group[MAX];
vector<int> graph[MAX];

int find(int x) {
	stack<int> s;
	while (x != group[x]) {
		s.push(x);
		x = group[x];
	}
	while (!s.empty()) {
		group[s.top()] = x;
		s.pop();
	}
	return x;
}

int uni(int a, int b) {
	a = find(a);
	b = find(b);
	if (a == b) return 0;
	if (a > b) swap(a,b);
	group[b] = a;
	return 1;
}

pair<int,int> dfs(int idx, int prev) {
	pair<int,int> ma = {0, idx};

	for (int &e : graph[idx]) {
		if (e == prev) continue;
		pair<int,int> ret = dfs(e, idx);
		ma = max(ma, ret);
	}

	ma.first ++;
	return ma;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin >> N >> M >> Q;

	for (int i=1; i<=N; i++) {
		group[i] = i;
	}

	for (int i=0; i<M; i++) {
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
		uni(a,b);
	}

	for (int i=1; i<=N; i++) {
		int g = find(i);
		if (!maxs[g]) {
			pair<int,int> ret = dfs(g, 0);
			pair<int,int> fin = dfs(ret.second, 0);
			maxs[g] = fin.first;
		}
	}

	for (int i=0; i<Q; i++) {
		int t;
		cin >> t;
		if (t == 1) {
			int x;
			cin >> x;
			int g = find(x);
			cout << maxs[g]-1 << endl;
		}
		if (t == 2) {
			int x, y;
			cin >> x >> y;
			x = find(x);
			y = find(y);
			if (uni(x, y)) {
				if (x > y) swap(x,y);
				maxs[x] = max({maxs[y], maxs[x], maxs[x]/2 + maxs[y]/2 + 2});
			}
		}
	}

	return 0;
}
