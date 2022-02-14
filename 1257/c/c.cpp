// youngjinp20
// 2019 11

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int n;
int a[200005];

int calc() {
	int last_occ[200005] = {0};
	int best = 1e9;
	cin >> n;
	for (int i=1; i<=n; i++) {
		cin >> a[i];
	}
	for (int i=1; i<n; i++) {
		if (a[i] == a[i+1]) {
			return 2;
		}
	}
	for (int i=1; i<=n; i++) {
		if (last_occ[a[i]]) {
			best = min(i-last_occ[a[i]]+1, best);
		}
		last_occ[a[i]] = i;
	}
	return best == 1e9 ? -1 : best;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		cout << calc() << "\n";
	}

	return 0;
}
