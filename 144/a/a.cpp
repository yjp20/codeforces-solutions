// youngjinp20
// 2019 11

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int main() {
	int n;
	int x=0, y=0;

	int mi=1e9;
	int ma=0;
	int miidx=0;
	int maidx=0;

	cin >> n;
	for (int i=0; i<n; i++) {
		int t;
		cin >> t;
		if (t<=mi) {
			mi = t;
			miidx = i;
		}

		if (t>ma) {
			ma = t;
			maidx = i;
		}
	}

	int res = maidx + n - miidx - (miidx < maidx) - 1;
	cout << res;

	return 0;
}
