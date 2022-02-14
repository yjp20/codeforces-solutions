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
	int ct = 0;
	int ma = -1;
	int mi = 1e9;
	cin >> n;
	for (int i=0; i<n; i++) {
		int t;
		cin >> t;

		if (t < mi) {
			mi = t;
			ct ++;
		}

		if (t > ma) {
			ma = t;
			ct ++;
		}
	}

	cout << ct - 2;

	return 0;
}
