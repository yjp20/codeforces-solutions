// youngjinp20
// 2019 12

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int main() {
	int T;
	cin >> T;
	for (int t=0; t<T; t++) {
		int m, n;
		int a[100005], b[100005], amap[100005];
		cin >> n >> m;
		for (int i=1; i<=n; i++) {
			cin >> a[i];
			amap[a[i]] = i;
		}
		int ma = 0;
		long long ct = 0;
		for (int i=1; i<=m; i++) {
			cin >> b[i];
			if (amap[b[i]] > ma) {
				ma = amap[b[i]];
				ct +=  2L*(ma-i)+1L;
			}
			else {
				ct ++;
			}
		}
		printf("%lld\n", ct);
	}

	return 0;
}
