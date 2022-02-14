// youngjinp20
// 2020 03

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n, m, k, t;
vector<int> v;

int main() {
	cin >> n >> m >> k >> t;

	for (int i=0; i<k; i++) {
		int a, b;
		cin >> a >> b;
		a --;
		b --;
		v.push_back(a * m + b);
	}

	sort(v.begin(), v.end());

	for (int i=0; i<t; i++) {
		int j, k;
		cin >> j >> k;
		j --;
		k --;
		auto ptr = lower_bound(v.begin(), v.end(), j*m+k);
		if (*ptr == j*m+k) {
			puts("Waste");
		} else {
			int idx = ptr-v.begin();
			switch ((j*m+k-idx) % 3) {
				case 0:
					puts("Carrots");
					break;
				case 1:
					puts("Kiwis");
					break;
				case 2:
					puts("Grapes");
					break;
			}
		}
	}

	return 0;
}
