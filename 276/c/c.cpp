// youngjinp20
// 2020 03

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MAX = 2e5+1;
int n, q, st=1;
int a[MAX];
int ct[MAX];
int T[MAX*4];

int main() {
	cin >> n >> q;

	for (int i=0; i<n; i++) {
		cin >> a[i];
	}

	while (st < n) st <<= 1;

	for (int i=0; i<q; i++) {
		int l, r;
		cin >> l >> r;
		l--;
		l += st;
		r += st;

		while (l < r) {
			if (l&1) T[l++] ++;
			if (r&1) T[--r] ++;
			l /= 2;
			r /= 2;
		}
	}


	for (int i=0; i<n; i++) {
		int sum = 0;
		int t = i+st;
		while (t) {
			sum += T[t];
			t /= 2;
		}
		ct[i] = sum;
	}

	sort(ct, ct+n);
	sort(a, a+n);

	ll ans = 0;
	for (int i=0; i<n; i++) {
		ans += (ll) a[i] * ct[i];
	}
	cout << ans;

	return 0;
}
