// youngjinp20
// 2019 12

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int a[200005];

int main() {
	int T;
	cin >> T;
	for (int t=0; t<T; t++) {
		int n, s;
		cin >> n >> s;
		for (int i=0; i<n; i++) {
			cin >> a[i];
		}

		int ma = 0;
		int ma_idx = 0;

		int i = 0;
		int k = 0;

		while (i < n && s >= 0) {
			if (a[i] > ma) {
				ma = a[i];
				ma_idx = i+1;
			}
			s -= a[i];
			i ++;
		}
		s += ma;
		while (i < n && s - a[i] >= 0) {
			s -= a[i];
			i ++;
			k ++;
		}
		printf("%d\n", k == 0 ? 0 : ma_idx);
	}

	return 0;
}
