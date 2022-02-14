// youngjinp20
// 2020 03

#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)
#define pb push_back

typedef long long ll;

const int MAX = 2e5+1;
int n, m;
int k;

vector<int> G[MAX];
vector<int> R[MAX];
vector<int> P;

struct A {
	int to;
	int from;
	int dist;
};

int main() {
	cin >> n >> m;
	for (int i=0; i<m; i++) {
		int u, v;
		cin >> u >> v;
		G[v].push_back(u);
	}
	cin >> k;
	for (int i=0; i<k; i++) {
		int t;
		cin >> t;
		P.push_back(t);
	}

	auto from = P.front();
	auto to = P.back();

	queue<A> Q;
	vector<int> dist(n+1, -1);
	Q.push({to,0,0});
	dist[0] = 0;

	while (!Q.empty()) {
		auto x = Q.front();
		Q.pop();
		if (dist[x.to] != -1) {
			if (dist[x.to] == x.dist) {
				R[x.to].push_back(x.from);
			}
			continue;
		}
		else {
			dist[x.to] = x.dist;
			R[x.to].push_back(x.from);
			for (auto e : G[x.to]) {
				Q.push({e, x.to, x.dist+1});
			}
		}
	}

	int mi = 0;
	int ma = 0;
	for (int i=0; i<P.size()-1; i++) {
		if (find(
					R[P[i]].begin(),
					R[P[i]].end(),
					P[i+1]) == R[P[i]].end()) {
			mi ++;
			ma ++;
		}
		else {
			if (R[P[i]].size() >= 2) ma ++;
		}
	}

	cout << mi << " " << ma;

	return 0;
}
