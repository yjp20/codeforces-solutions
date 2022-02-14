// youngjinp20
// 2019 09

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int main() {
	int T; cin >> T;
	for (int t=0; t<T; t++) {
		int n, x; cin >> n >> x;
		int m = 0;
		int best = 2123456789;
		bool yes = false;
		vii A;
		for (int i=0; i<n; i++) {
			int a, b;
			cin >> a >> b;
			A.push_back({a, b});
			m = max(m, a);
		}
		int v = x - m;
		if (v <= 0) {
			yes = true;
			best = 1;
		} else {
			for (int i=0; i<n; i++) {
				int diff = A[i].first - A[i].second;
				if (diff > 0) {
					yes = true;
					best = min(best, (v-1)/diff+2);
				}
			}
		}
		int res = yes ? best : -1;
		cout << res << "\n";
	}
	return 0;
}
