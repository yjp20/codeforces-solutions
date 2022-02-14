// youngjinp20
// 2019 11

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int t;
int n;
int m;
int a[200005];
int p[200005];
int s[200005];
int par[200005];

int calc() {

	cin >> n;
	for (int i=0; i<n; i++) cin >> a[i];
	cin >> m;
	for (int i=0; i<m; i++) cin >> p[i] >> s[i];

	// make tree
	stack<pi> S;
	for (int i=0; i<n; i++) {
		int next = a[i];
		while (S.size() && S.top().first < next) {
			par[S.top().second] = i;
			S.pop();
		}
		S.push({a[i], i});
	}
	while (S.size()) {
		par[S.top().second] = n;
		S.pop();
	}

	a[n] = 2e9;
	par[n] = -1;

	// calc
	int days = 0;
	for (int i=0; i<n;) {
		int best = 0;
		int cur = i;
		vi val;
		vi idx;
		val.push_back(a[cur]);
		idx.push_back(cur);
		while (par[cur] != -1) {
			cur = par[cur];
			val.push_back(a[cur]);
			idx.push_back(cur);
		}
		days ++;
		for (int j=0; j<m; j++) {
			auto it = upper_bound(val.begin(), val.end(), p[j]);
			int loc = it - val.begin();
			best = max(best, min(idx[loc] - i, s[j]));
		}
		if (best <= 0) return -1;
		i += best;
	}

	return days;
}

int main() {
	cin >> t;
	while (t--) {
		cout << calc() << "\n";
	}

	return 0;
}
