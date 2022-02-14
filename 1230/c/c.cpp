// youngjinp20
// 2019 09

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int n, m;
int ma;
vii A;

void bt(int idx, vi &S) {
	if (idx == 8) {
		set<int> s;
		for (auto p : A) {
			int u = S[p.first];
			int v = S[p.second];
			if (v > u) swap(u,v);
			s.insert(u*7+v);
		}
		int size = s.size();
		ma = max(ma, size);
		return;
	}
	for (int i=1; i<=6; i++) {
		S[idx] = i;
		bt(idx+1, S);
	}
}

int main() {
	cin >> n >> m;
	for (int i=0; i<m; i++) {
		int u, v;
		cin >> u >> v;
		A.push_back({u,v});
	}

	vi S(10);
	bt(1, S);

	cout << ma;

	return 0;
}
